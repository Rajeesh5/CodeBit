#pragma once
#include <ctime>
#include <string>

#include "Book.h"
#include "FixConst.h"
#include "Rack.h"


class BookItem : public Book {
private:
    std::string barcode;
    bool isReferenceOnly;
    time_t borrowed;
    time_t dueDate;
    double price;
    BookFormat format;
    BookStatus status;
    time_t dateOfPurchase;
    time_t publicationDate;
    Rack placedAt;

public:
    bool checkout(std::string memberId);

};