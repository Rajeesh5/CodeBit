#pragma once

#include "Account.h"
#include "Person.h"
#include "FixConst.h"
#include "BookItem.h"
#include <ctime>

class Member : public Person {
private:

	Account *m_pAccNbr;
    time_t  m_dateOfMembership;
    int     m_totalBooksCheckedout;
    BookReservation* m_pReservation;
public:

    int  getTotalBooksCheckedOut();
    bool reserveBookItem(BookItem* bookItem);
    void incrementTotalBooksCheckedout();
    bool checkoutBookItem(BookItem* bookItem);  
    Account* getAccount() { return m_pAccNbr; }
};

