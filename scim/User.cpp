#include "User.h"
#include<string>

using std::string;

 User::User(string firstName, string lastName)
 : Resource()
{
     init(firstName, lastName);
}

 User::User(const User& user)
 {
     Emails = user.Emails;
     PhoneNumbers = user.PhoneNumbers;
     name = user.name;
 }
 
User::~User()
{
}

std::string User::UserName()
{
    return makeUserName(name);
}

void User::addEmail(string emailAddress)
{
    Email email;
    email.Value = emailAddress;
    Emails.push_back(email);
}

void User::addPhoneNumber(std::string phoneNumber)
{
    PhoneNumber p;
    p.Value = phoneNumber;
    PhoneNumbers.push_back(p);
}

//GroupUser User::ToGroupUser()
//{
//    return  GroupUser(getId(), getRef(), name.formatted());
//}
void User::init(string firstName, string lastName)
{
    name = Name(firstName, lastName);
}

string User::toJSONString()
{
    return "";
}

string User::makeUserName(const Name name)
{    
    auto first = name.givenName;
    auto last = name.familyName;
    
    if (first.empty() && last.empty())
    {
        return getId();
    }
    
    if (!first.empty() && !last.empty())
    {
        return first.substr(0, 1) + last;
    }
    
    if (first != "")
    {
        return first;
    }
    
    return last;
}
