#pragma once

#include "SysEnum.h"
#include "Account.h"

class Person {              //Need to make it abstract..
public:

private:
    std::string name;
    Address address;
    std::string email;
    std::string phone;
    Account account;
};
