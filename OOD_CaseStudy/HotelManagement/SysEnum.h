#pragma once
#include <string>

enum RoomStyle {
    STANDARD, DELUXE, FAMILY_SUITE, BUSINESS_SUITE
};

enum RoomStatus {
    AVAILABLE, RESERVED, OCCUPIED, NOT_AVAILABLE, BEING_SERVICED, OTHER
};

enum BookingStatus {
    REQUESTED, PENDING, CONFIRMED, CHECKED_IN, CHECKED_OUT, CANCELLED, ABANDONED
};

enum AccountStatus {
    ACTIVE, CLOSED, CANCELED, BLACKLISTED, BLOCKED
};

enum AccountType {
    MEMBER, GUEST, MANAGER, RECEPTIONIST
};

enum PaymentStatus {
    UNPAID, PENDING, COMPLETED, FILLED, DECLINED, CANCELLED, ABANDONED, SETTLING, SETTLED, REFUNDED
};

class Address {
    std::string streetAddress;
    std::string city;
    std::string state;
    std::string zipCode;
    std::string country;
};
