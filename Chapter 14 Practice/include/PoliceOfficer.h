#include "ParkingTicket.h"

#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H


class PoliceOfficer {
public:
    PoliceOfficer();
    string setName();
    void getName() const;
    int setBadgeNumber();
    void getBadgeNumber() const;
    bool examine(ParkedCar, ParkingMeter) const;
    ParkingTicket makeTicket(ParkedCar, ParkingMeter);
private:
    string name;
    int badgeNumber;
};

#endif // POLICEOFFICER_H
