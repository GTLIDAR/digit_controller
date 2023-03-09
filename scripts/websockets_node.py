#!/usr/bin/python3
###
# Author:       Guillermo Castillo
# Email:        castillomartinez.2@osu.edu
# Modified:     01-25-2022
# Copyright:    Cyberbotics Lab @The Ohio State University
###

import rospy 
from std_msgs.msg import Bool

from ws4py.client.threadedclient import WebSocketClient
import json
import time
import numpy as np 
import sys

class BasicClient(WebSocketClient):

	def opened(self):
		self.operation_mode = None		
		self.responded = True

		privilege_request = ['request-privilege',{'privilege': 'change-action-command','priority': 0 }]
		self.send(json.dumps(privilege_request))

		self.llapi_enabled = False


	def closed(self, code, reason):
		print(("Closed", code, reason))


	def received_message(self, m):

		dataloaded = json.loads(m.data)
		message_type = str(dataloaded[0])
		message_dict = dataloaded[1]
		
		if message_type == 'privileges':
			self.done = message_dict['privileges'][0]['has']
			if self.done:
				print (("Privilege request executed successfully!"))

		if message_type == 'robot-status':
			self.responded = True
			self.operation_mode = str(message_dict['operation-mode'])
			self.left_foot_contact = message_dict['left-foot-in-contact']
			self.right_foot_contact = message_dict['right-foot-in-contact']
			# print (("Operation mode: " ,self.operation_mode))

		if message_type == 'error':
			self.error_info = str(message_dict['info'])

			print (("Error: " ,self.error_info))
			# print(message_dict)

		if message_type == 'action-status-changed':
			self.status_change_mode = str(message_dict['status'])

			if self.status_change_mode == "success":
				self.llapi_enabled = True
				
				print (("action-status-changed to low-level-api: ", self.status_change_mode))
				print("Transition successful")
			if self.status_change_mode == "failure":
				self.llapi_enabled = False
				
				print (("action-status-changed to low-level-api: ", self.status_change_mode))
				print("Cannot transition to low-level-api operation mode if no low-level commands are present")
				time.sleep(1)
				
			# print("========================================================================")
			# print("========================================================================")
			# print(self.status_change_mode)
			# print("========================================================================")
			# print("========================================================================")

class WebSocketsNode:

	def __init__(self, freq=500, run_sim = True):
		self.freq = freq 
		# start websockets connection and requrest privilege
		if run_sim:
			self.ws = BasicClient('ws://localhost:8080/', protocols=['json-v1-agility'])
		else: 
			self.ws = BasicClient('ws://10.10.1.1:8080/', protocols=['json-v1-agility'])

		self.ws.daemon = False
		while True:
			try:
				self.ws.connect()
				print ("WS connection established!")
				# time.sleep(1)
				break
			except:
				print ("WS connection NOT established!")
				# self.ws = None
				time.sleep(1)


		# init ros
		rospy.init_node("websockets_node")

		# # init variables
		self.enabled = False
		self.request_robot_status = ['get-robot-status',{},3]
		self.request_lowlevelapi_on = ["action-set-operation-mode", {"mode": "low-level-api"},1]
		self.request_lowlevelapi_off = ["action-set-operation-mode", {"mode": "locomotion"},2]

		self.apply_force =	[
								"simulator-apply-force",
								{
									"model-id": 0,
									"offset": [
									0,
									0,
									0
									],
									"reference": "world",
									"force": {"xyz":[0, -3, 0]},
									"duration": 10
								}
							]
		self.set_pose = [
							"simulator-set-pose",
							{
								"model-id": 0,
								"pose": {"rpyxyzd": [0, 0, 0, 0 , 0, 1.029]}
							}
						]

		self.get_object_kin = 	[
									"get-object-kinematics",
									{
										"object": {"name": "base"},
										"relative-to": {
										"special-frame": "world"
										},
										"in-coordinates-of": {}
									}
								]

		self.action_move_to = 	[
									"action-move",
									{
										"velocity": {"axy": [0.0, 0.25, 0.0]},
										"mobility-parameters": {}
									}
								]


		self.msg = Bool()
		self.msg.data = self.ws.llapi_enabled
	
		#Publishers
		self.start_llapi_pub = rospy.Publisher("/websockets/llapi_enabled", Bool, queue_size=1)


	def start_loop(self):
		try:
			rate = rospy.Rate(self.freq)
			while not rospy.is_shutdown():
			# while True:
				# print("Main Loop")

				if self.ws.responded:
					if self.ws.operation_mode!='low-level-api' and self.start_llapi:
						self.ws.send(json.dumps(self.request_lowlevelapi_on))

					self.ws.send(json.dumps(self.request_robot_status))
					# print("Robot status Sent")
					self.ws.responded = False	#Wait until WS server responds before sending new command
			
				# on = True if np.random.randint(2,size=1)[0]==1 else False
				if self.ws.operation_mode=='low-level-api' and self.start_llapi and not self.enabled:	
					self.enabled = True

				if self.ws.operation_mode=='low-level-api' and  not self.start_llapi and self.enabled:
					self.enabled = False	

				if self.ws.operation_mode != 'low-level-api':
					self.enabled = False	
				
				self.msg.data = self.enabled
				# print(self.enabled)
				self.start_llapi_pub.publish(self.msg)
				rate.sleep()
			self.ws.close()
			print("WebSocket connection closed.\n")
		except:
			print("WS connection lost!\n")
			# self.enabled = False
			# self.msg = Bool()
			# self.msg.data = self.enabled
			# self.start_llapi_pub.publish(self.msg)
			# rate.sleep()
			# time.sleep(1)
			# self.ws.close()
			# sys.exit()


if __name__ == '__main__':
	WSnode = WebSocketsNode(run_sim = rospy.get_param('sim_mode','True'))
	# WSnode.ws.send(json.dumps(request_lowlevelapi_on))
	WSnode.start_llapi = True
	WSnode.start_loop()

