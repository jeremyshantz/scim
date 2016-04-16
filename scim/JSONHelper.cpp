#include "JSONHelper.h"

JSONHelper::JSONHelper()
{  
}

void JSONHelper::AddValue(std::string name, std::string value)
{
        o[name] = JsonBox::Value(value);
}
    
void JSONHelper::AddValue(std::string name, int value)
{
    o[name] = JsonBox::Value(value);
}

JsonBox::Value JSONHelper::ToValue()
{
       JsonBox::Value v(o);
       return v;
}