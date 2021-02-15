#pragma once

#include "SysEnum.h"

class Account {
public:
    bool resetPassword();
private:
    std::string password;
    std::string id;
    AccountStatus status;
};
