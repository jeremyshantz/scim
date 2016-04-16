
#pragma once
#include "Resource.h"
#include "Name.h"
#include "PhoneNumber.h"
#include "Email.h"
#include <vector>

/// Represents a User in a secure system
class User :
    public Resource
{
public:
    User(std::string firstname, std::string lastName);
    User(const User& user);
    ~User();
    Name name;
    std::string UserName();
    std::vector<Email> Emails;
    std::vector<PhoneNumber> PhoneNumbers;
    void addEmail(std::string emailAddress);
    void addPhoneNumber(std::string phoneNumber);User();
    virtual std::string toJSONString();
    
 private:
     void init(std::string firstName, std::string lastName);
     std::string makeUserName(const Name name);
};

