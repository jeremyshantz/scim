#pragma once
#include <string>
#include "RTypes.h"
#include "JSONHelper.h"

//Represents a phone number of a user
class PhoneNumber
{
public:
    PhoneNumber();
    PhoneNumber(std::string phoneNumber);
    PhoneNumber(std::string phoneNumber, RType type);
    ~PhoneNumber();
    RType Type;
    std::string Value;
    JsonBox::Value toJSON();
    
private:
    void init(std::string phoneNumber, RType type);
};

