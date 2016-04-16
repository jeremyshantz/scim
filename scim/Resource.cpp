#include "Resource.h"
#include <string>
#include <sstream>
#include <random>

Resource::Resource()
        :
        externalid { "" },
        id {""}
{
            id = makeId();
}


Resource::~Resource()
{
}

std::string  Resource::getId()
{
    return id;
}

std::string Resource::externalId()
{
    return externalid;
}
      
std::string Resource::getRef()
{
    return "http://scim.example.com/" + getId();
}

std::string Resource::toJSONStringInternal()
{
       	JsonBox::Object o;
	o["myName"] = JsonBox::Value(123);
	o["myOtherMember"] = JsonBox::Value("asld\\kfn");
	o["hahaha"] = JsonBox::Value(true);
	o["adamo"] = JsonBox::Value(129.09);
	std::cout << o << std::endl;
	JsonBox::Value v(o);
	v.writeToFile("file.json");
}

// Creates a unique id for the resource. In reality, this would be generated server-side and would be a guid
std::string Resource::makeId()
{
       int i = std::rand();
        std::stringstream ss;
        ss << i;
        return ss.str();
}
