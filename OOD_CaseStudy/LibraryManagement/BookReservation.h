#pragma once

#include "FixConst.h"
#include <string>
#include <ctime>


class BookReservation {

public:
    static BookReservation* fetchReservationDetails(std::string barcode);
    static std::vector<BookItem*> reservedBookList;
    void createReservation(std::string id, BookItem *item) {
        //m_creationDate = CurrentDate();
        //m_status = ReservationStatus:: (Based on Book item status)
        m_memberId = id;
        m_bookItemBarcode = item->getBarCode();
        reservedBookList.push_back(item);
    }

    std::string getMemberId() { return m_memberId;  }
    void updateStatus(ReservationStatus status){}
private:
    time_t            m_creationDate;
    ReservationStatus m_status;
    std::string       m_bookItemBarcode;
    std::string       m_memberId;
    


};

BookReservation* BookReservation::fetchReservationDetails(std::string barcode) {

}