#pragma once
#include <string>
#include "../JsonBox/src/JsonBox//JsonBox.h"

// Base class for all other resources
class Resource
{
public:
    Resource();
    ~Resource();
      std::string  getId();
      std::string externalId();
      std::string getRef();;
      virtual std::string toJSONString() = 0;
protected:
    std::string toJSONStringInternal();
private:
    std::string makeId();
    std::string id;
    std::string externalid;
};

