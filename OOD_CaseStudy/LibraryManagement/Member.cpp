#include "Member.h"
#include "BookReservation.h"


int  Member::getTotalBooksCheckedOut() {
	return m_totalBooksCheckedout;
}
bool Member::reserveBookItem(BookItem* bookItem) {
    m_pReservation->createReservation(m_pAccNbr->getId(),bookItem);
}
void Member::incrementTotalBooksCheckedout() {
	m_totalBooksCheckedout++;
}
bool Member::checkoutBookItem(BookItem* bookItem) {
    if (getTotalBooksCheckedOut() >= Constants::MAX_BOOKS_ISSUED_TO_A_USER) {
        //ShowError("The user has already checked-out maximum number of books");
        return false;
    }
    BookReservation *bookReservation = BookReservation::fetchReservationDetails(bookItem->getBarCode());
    if (bookReservation != NULL && bookReservation->getMemberId() != getAccount()->getId()) {
    //    // book item has a pending reservation from another user
    //    //ShowError("This book is reserved by another member");
        return false;
    }
    else if (bookReservation != NULL) {
        // book item has a pending reservation from the give member, update it
        bookReservation->updateStatus(ReservationStatus::COMPLETE);
    }

    if (!bookItem->checkout(getAccount()->getId())) {
        return false;
    }

    incrementTotalBooksCheckedout();
    return true;

}