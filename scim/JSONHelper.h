#pragma once
#include <string>

#include "../JsonBox/src/JsonBox//JsonBox.h"

class JSONHelper
{
public:
    JSONHelper();
   
    void AddValue(std::string name, std::string value);
    void AddValue(std::string name, int value);
    JsonBox::Value ToValue();
private:
       JsonBox::Object o;
};