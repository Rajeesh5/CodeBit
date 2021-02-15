#pragma once

#include "SysEnum.h"
#include "HotelLocation.h"
#include <vector>

class Hotel {
public:
    bool addLocation(HotelLocation location);

private:
    std::string name;
    std::vector<HotelLocation> locations;
};
