#include "PoliceOfficer.h"
#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"

PoliceOfficer::PoliceOfficer() {
    //ctor
}

PoliceOfficer::~PoliceOfficer() {
    //dtor
}

bool PoliceOfficer::examine(ParkedCar car, ParkingMeter meter) {
    return (car.getParkMinutes() > meter.getMinutesPurchased)
}

void PoliceOfficer::setName(string name1) {
    name = name1;
}

string PoliceOfficer::getName() {
    return name;
}

void PoliceOfficer::setBadgeNumber(int num) {
    badgeNumber = num;
}

int PoliceOfficer::getBadgeNumber() const;

{
return
badgeNumber;
}


ParkingTicket PoliceOfficer::makeTicket(ParkedCar car, ParkingMeter meter) {
    ParkingTicket ticket;
    ticket.setCar(car);
    ticket.setPoliceOfficer(this);
    ticket.setHoursIllegalyParked((meter.getMinutesPurchased - car.getParkMinutes) / 60.0);
    return ticket;
}
