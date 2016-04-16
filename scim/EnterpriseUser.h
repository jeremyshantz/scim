#include "User.h"

/// Represents a Enterprise User in a secure system,
class EnterpriseUser :
    public User
{
public:
    EnterpriseUser(std::string firstname, std::string lastname, std::string employeeId);
    ~EnterpriseUser();
    std::string EmployeeNumber;
    std::string CostCenter;
    std::string Organization;
    std::string Division;
    std::string Department;
//    GroupUser Manager;
    std::string toJSONString();
private:
    void init(std::string employeeId);
};

