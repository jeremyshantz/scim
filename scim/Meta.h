#include <ctime>
#include <string>

class Meta
{
public:
    Meta();
    ~Meta();
    std::string ResourceType;
    time_t Created;
    time_t LastModified;
    std::string Location;
    std::string Version;
};

