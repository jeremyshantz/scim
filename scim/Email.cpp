#include "Email.h"
#include "RTypes.h"

Email::Email()
{
    init("", work);
}

Email::Email(std::string emailAddress)
{
    init(emailAddress, work);
}

Email::Email(std::string emailAddress, RType type)
{
    init(emailAddress, type);
}

Email::~Email()
{
}

void Email::init(std::string emailAddress, RType type)
{
    Value = emailAddress;
    Type = type;
}

 JsonBox::Value  Email::toJSON()
{
    JSONHelper json;
    json.AddValue("value", Value);
    json.AddValue("type", Type == RType::home ? "home" : "work");
    json.AddValue("primary", Primary);
    return json.ToValue();
 }