
#include <string>
#include "Meta.h"


class Resource
{
public:
    Resource();
    ~Resource();
    std::string getId();
    std::string externalId();
    Meta getMeta();

};

