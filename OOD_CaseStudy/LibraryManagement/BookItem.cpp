#include "BookItem.h"

bool BookItem::getIsReferenceOnly() {
    return m_isReferenceOnly;
}

void BookItem::updateBookItemStatus(BookStatus status){
    m_status = status;
}

bool BookItem::checkout(std::string memberId) {
    if (getIsReferenceOnly()) {
        //ShowError("This book is Reference only and can't be issued");
        return false;
    }
    //if (!BookLending.lendBook(this.getBarCode(), memberId)) {
    //    return false;
    //}
    updateBookItemStatus(BookStatus::LOANED);
    return true;
}

