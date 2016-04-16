#include "Name.h"
#include "JSONHelper.h"

using std::string;

Name::Name()
{
    init("", "");
}


Name::Name(string firstName, string lastName)
{
    init(firstName, lastName);
}

Name::~Name()
{
}

string Name::formatted()
{
    std::stringstream s;
    if (!honorificPrefix.empty())
    {
        s << honorificPrefix;
        s << " ";
    }
    
    s <<  givenName + " " + familyName;
    
    if (!honorificSuffix.empty())
    {
        s << honorificSuffix;;
        s << " ";
    }
    
    return s.str();
}

 JsonBox::Value  Name::toJSON()
{
    JSONHelper json;
    json.AddValue("formatted", formatted());
    json.AddValue("familyName", familyName);
    json.AddValue("givenName", givenName);
    json.AddValue("middleName", middleName);
    json.AddValue("honorificPrefix", honorificPrefix);
    json.AddValue("honorificSuffix", honorificSuffix);
    return json.ToValue();
 }

void Name::init(string firstName, string lastName)
{
    givenName = firstName;
    familyName = lastName;
    middleName = "";
    honorificPrefix = "";
    honorificSuffix = "";
}