#ifndef DOMAIN_CONTROL_H_
#define DOMAIN_CONTROL_H_

#include "Eigen/Dense"
#include <chrono>
#include <vector>
#include <cmath>
#include <memory>
#include <algorithm>
#include <set>
#include "cpptoml/include/cpptoml.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

namespace DomainControl {
  enum DomainType {
    LEFT_STAND = 0,
    RIGHT_STAND = 1,
    DOUBLE_SUPPORT = 2,
    FLOATING = 3
  };

  class Domain {
   public:
    Domain();
    int loadDomainInfo(std::shared_ptr<cpptoml::table> config, DomainControl::DomainType domain_id);
    void print_domain();
    std::string get_name() { return this->name; }
    int nOutputs;
    int nJoints;
    DomainControl::DomainType support_leg; // 0: Left Leg, 1: Right Leg, 2: Double Support // HW: refer to enum for details.
    int index; // HW: what's this? --see walking_trajectory.cpp:681
    int nNodes; // Number of nodes on this domain cycle
    DomainControl::DomainType firstDomainId; // The id of the first domain in this cycle
    int phase_type; // 0: Double Support , 1: Single Support
    int isCyclic; // 1: The node is in a cycle, 0:The node is not in a cycle
    double targetVelocity; // Desired hip velocity during walking
    std::string name;
  };
}

#endif