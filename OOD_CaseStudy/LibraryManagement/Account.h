#pragma once
#include "FixConst.h"
#include <string.h>

class Account {

public:
    bool resetPassword(){}
private:
    std::string id;
    std::string password;
    AccountStatus status;   
};
