#include "PhoneNumber.h"


PhoneNumber::PhoneNumber()
{
}

PhoneNumber::PhoneNumber(std::string phoneNumber)
{
    init(phoneNumber, RType::work);
}
PhoneNumber::PhoneNumber(std::string phoneNumber, RType type)
{
    init(phoneNumber, type);
}


PhoneNumber::~PhoneNumber()
{
}

void PhoneNumber::init(std::string phoneNumber, RType type)
{
    Value = phoneNumber;
    Type = type;
}

 JsonBox::Value  PhoneNumber::toJSON()
{
    JSONHelper json;
    json.AddValue("value", Value);
    json.AddValue("type",  Type == RType::home ? "home" : "work");
    return json.ToValue();
 }