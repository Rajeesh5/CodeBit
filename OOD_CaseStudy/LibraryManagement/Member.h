#pragma once

#include "Account.h"
#include "Person.h"
#include "FixConst.h"
#include <ctime>

class Member : public Person {
private:

	Account m_accNbr;
    time_t dateOfMembership;
    int totalBooksCheckedout;
public:

    int getTotalBooksCheckedOut();
    bool reserveBookItem(BookItem bookItem);
    void incrementTotalBooksCheckedout();
    bool checkoutBookItem(BookItem bookItem);     
};

