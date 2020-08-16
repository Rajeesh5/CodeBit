#pragma once
#include "Account.h"
#include "Person.h"
#include "Member.h"


class Librarian : public Person {

private:
	Account* m_pAccNbr;

public:
	bool addBookItem(BookItem bookItem);
	bool blockMember(Member member);
	bool unBlockMember(Member member);
};
