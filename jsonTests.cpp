#include "cppunitlite/Test.h"
#include "JsonBox/src/JsonBox/JsonBox.h"
#include "scim/Name.h"
#include "scim/Email.h"
#include "scim/PhoneNumber.h"
#include <iostream>
#include <sstream>
#include <string>

TEST(json, create)
{
    	JsonBox::Object o;
	o["myName"] = JsonBox::Value(123);
	o["myOtherMember"] = JsonBox::Value("asld\\kfn");
	o["hahaha"] = JsonBox::Value(true);
	o["adamo"] = JsonBox::Value(129.09);
	//std::cout << o << std::endl;
	JsonBox::Value v(o);
	v.writeToFile("file.json");
//	
//	JsonBox::Array a;
//	a.push_back(JsonBox::Value("I'm a string..."));
//	a.push_back(JsonBox::Value(123));
//	std::cout << a << std::endl;
//	
//	JsonBox::Value v2;
//	v2.loadFromFile("file.json");
//	std::cout << v2 << std::endl;
//	v2.writeToStream(std::cout, true, true);
//	v2.writeToFile("file.json", false, false);

}

TEST(json, name)
{
    std::string expected = "{\"familyName\":\"last\",\"formatted\":\"first last\",\"givenName\":\"first\",\"honorificPrefix\":\"\",\"honorificSuffix\":\"\",\"middleName\":\"\"}";
    Name name = Name("first", "last");
    std::stringstream json;
    name.toJSON().writeToStream(json, false, false);
    CHECK_EQUAL(expected, json.str());
}

TEST(json, email)
{
    std::string expected = "";
    Email name = Email("email");
    std::stringstream json;
    name.toJSON().writeToStream(json, false, false);
    CHECK_EQUAL(expected, json.str());
}

TEST(json, phone)
{
    std::string expected = "";
    PhoneNumber name = PhoneNumber("phone");
    std::stringstream json;
    name.toJSON().writeToStream(json, false, false);
    CHECK_EQUAL(expected, json.str());
}