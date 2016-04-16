#include "EnterpriseUser.h"
 
// Compiler error:   undefined reference to `vtable for EnterpriseUser'
EnterpriseUser::EnterpriseUser(std::string firstName, std::string lastName, std::string  employeeId) : User(firstName, lastName)
{
  init(employeeId);
}

EnterpriseUser::~EnterpriseUser()
{
}

void EnterpriseUser::init(std::string employeeId)
{
    EmployeeNumber = employeeId;
    CostCenter = "";
    Organization = "";
    Division = "";
    Department = "";
    
}