
#include "cppunitlite/TestHarness.h"

#include "scim/Resource.h"
#include "scim/User.h"
#include "scim/EnterpriseUser.h"

#include <iostream>
#include <string>
#include <random>
#include <string>

TEST(user, id_is_unique)
{
    User u1 = User ("", "");
    User u2 = User ("", "");
    User u3 = User ("", "");
    
    CHECK(u1.getId() != u2.getId());
    CHECK(u1.getId() != u3.getId());
}

TEST(user, clone_user)
{
    User user1 = User("", "");;;
    User user2 = User(user1);
    CHECK(user1.getId() != user2.getId());
}

TEST(user, cloned_users_object_collections_are_not_shared)
{
    User user1 = User("", "");;
    user1.addPhoneNumber("phone");
    
    User user2 = User(user1);
    PhoneNumber user2PhoneNumber =user2.PhoneNumbers.at(0);
    user2PhoneNumber.Value = "phone2";
    
    PhoneNumber user1PhoneNumber =user1.PhoneNumbers.at(0);
    
    CHECK(user1PhoneNumber.Value != user2PhoneNumber.Value);
}

TEST(user, username_returns_id_when_name_is_null)
{
    User user = User("", "");;
    CHECK_EQUAL(user.getId(), user.UserName());
}

TEST(user, user_has_id)
{
    User user = User("", "");;
    CHECK(user.getId() != "");
}

TEST(user, name_constructor_fullname)
{
    User user  = User("first", "last");
    
    CHECK_EQUAL("flast", user.UserName());
    CHECK_EQUAL("last", user.name.familyName);
    CHECK_EQUAL("first last", user.name.formatted());
}

TEST(user, can_add_email)
{
    User user = User("", "");;
    user.addEmail("test@example.com");
    CHECK_EQUAL(1, user.Emails.size());
}

TEST(user, can_add_email_directly_to_collection)
{
    User user = User("", "");;
    user.Emails.push_back(Email("work@example.com"));
    CHECK_EQUAL(1, user.Emails.size());
}

TEST(user, can_add_phone)
{
    User user = User("", "");;
    user.addPhoneNumber("phone1");
    CHECK_EQUAL(1, user.PhoneNumbers.size());
}

TEST(user, to_group_user)
{
    User user = User("first", "last");
//    GroupUser guser = user.ToGroupUser();
//    
//    CHECK_EQUAL(user.name.formatted(), guser.DisplayName);
//    CHECK_EQUAL(user.getRef(), guser.Ref);
//    CHECK_EQUAL(user.getId(), guser.Value);
}

TEST(enterpriseuser, a)
{
    EnterpriseUser  user = EnterpriseUser("first", "last", "1");
    CHECK_EQUAL("first last", user.name.formatted());
    CHECK_EQUAL("1", user.EmployeeNumber); // passes in the debugged, but fails when Run
}

