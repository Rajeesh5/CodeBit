#pragma once
#include <ctime>
#include <string>

#include "Book.h"
#include "FixConst.h"
#include "Rack.h"


class BookItem : public Book {
private:
    std::string m_barcode;
    bool m_isReferenceOnly;
    time_t m_borrowed;
    time_t m_dueDate;
    double m_price;
    BookFormat m_format;
    BookStatus m_status;
    time_t m_dateOfPurchase;
    time_t m_publicationDate;
    Rack m_placedAt;

public:
    bool checkout(std::string memberId);
    void updateBookItemStatus(BookStatus status);
    bool getIsReferenceOnly();
    std::string getBarCode() { return m_barcode; }

};