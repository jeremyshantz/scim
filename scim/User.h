#include "Resource.h"
#include "Name.h"
#include "PhoneNumber.h"
#include "Email.h"
#include <vector>

class User :
    public Resource
{
public:
    User();
    ~User();
    Name name;
    std::string UserName;
    std::vector<Email> Emails;
    std::vector<PhoneNumber> PhoneNumbers;
};

