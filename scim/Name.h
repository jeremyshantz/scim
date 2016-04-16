#pragma once
#include <string>
#include<sstream>
#include<iostream>
#include "JSONHelper.h"
class Name
{
public:
    Name();
    Name(std::string firstName, std::string lastName);
    ~Name();
    std::string formatted();
    std::string familyName;
    std::string givenName;
    std::string middleName;
    std::string honorificPrefix;
    std::string honorificSuffix;
    JsonBox::Value toJSON();
    
private:
    void init(std::string firstname, std::string lastname);
};

