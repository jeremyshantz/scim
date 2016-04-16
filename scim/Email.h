#pragma once
#include <string>
#include "RTypes.h"
#include "JSONHelper.h"

//Represents an email address of a user
class Email
{
public:
        
    Email();
    Email(std::string emailAddress);
    Email(std::string emailAddress, RType type);
    
    ~Email();
    RType Type;
    std::string  Value;
    bool Primary;
    JsonBox::Value toJSON();

private:
    void init(std::string emailAddress, RType type);
};

