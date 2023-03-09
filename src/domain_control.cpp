#include "domain_control.hpp"

using namespace DomainControl;
using namespace std;

Domain::Domain()
{
}

int Domain::loadDomainInfo(std::shared_ptr<cpptoml::table> config, DomainControl::DomainType domain_id) {
  std::string base = "Domain" + std::to_string(domain_id + 1);
  name = config->get_qualified_as<std::string>(base + ".name").value_or("unamed");
  nOutputs = config->get_qualified_as<int>(base + ".nOutputs").value_or(0);
  firstDomainId = DomainControl::DomainType(config->get_qualified_as<int>(base + ".firstDomainId").value_or(1));
  nNodes = config->get_qualified_as<int>(base + ".nNodes").value_or(1);
  isCyclic = config->get_qualified_as<int>(base + ".isCyclic").value_or(1);
  phase_type = config->get_qualified_as<int>(base + ".phaseType").value_or(1);
  targetVelocity = config->get_qualified_as<double>(base + ".targetVelocity").value_or(0);
  // For now nJoints and nOutputs are equal, but we can have internal dynamics in the future
  nJoints = nOutputs;

  support_leg = DomainControl::DomainType(config->get_qualified_as<int>(base + ".support_leg").value_or(0));

  //DEBUG
  // print_domain();
  return 0;
}

// For debug purposes or screen initialization
void Domain::print_domain()
{
  printf("\nDomain Information \n");
  printf("Name: %s \n", name.c_str());
  printf("\nSupport Leg: %d \n", support_leg);
}
