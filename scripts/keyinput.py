#!/usr/bin/python3

import rospy
import std_msgs

import tkinter as tk

def on_key_down(event):
    #print(event.keysym_num)
    key_pub.publish(event.keysym_num)


if __name__=='__main__':
    rospy.init_node('keypress')
    key_pub = rospy.Publisher('/keyinput', std_msgs.msg.Int32, queue_size=10)

    root = tk.Tk()
    root.title("Keyboard Input")
    root.geometry("200x200")
    root.bind("<KeyPress>", on_key_down)

    def check_ros():
        if rospy.is_shutdown():
            quit()
        else:
            root.after(50, check_ros)

    root.after(50, check_ros)
    root.mainloop()
