#pragma once


enum BookFormat {
    HARDCOVER,
    PAPERBACK,
    AUDIO_BOOK,
    EBOOK,
    NEWSPAPER,
    MAGAZINE,
    JOURNAL
};

enum BookStatus {
    AVAILABLE,
    RESERVED,
    LOANED,
    LOST
};

enum ReservationStatus {
    COMPLETE,
    WAITING,
    PENDING,
    CANCELED,
    NONE
};

enum AccountStatus {
    ACTIVE,
    CLOSED,
    CANCELED,
    BLACKLISTED,
    NONE
};

class Constants {
public:
    static const int MAX_BOOKS_ISSUED_TO_A_USER = 5;
    static const int MAX_LENDING_DAYS = 10;
};
