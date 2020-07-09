#pragma once
#include "FixConst.h"
#include <string.h>

class Account {

public:
    bool resetPassword(){}
    std::string getId() { return m_id; }
private:
    std::string   m_id;
    std::string   m_password;
    AccountStatus m_status;   
};
