#include "User.h"
#include <string>
#include "Manager.h"

class EnterpriseUser :
    public User
{
public:
    EnterpriseUser();
    ~EnterpriseUser();
    std::string EmployeeNumber;
    std::string CostCenter;
    std::string Organization;
    std::string Division;
    std::string Department;
    Manager manager;
};

