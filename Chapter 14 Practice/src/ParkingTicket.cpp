#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "PoliceOfficer.h"

ParkingTicket::ParkingTicket() {
    fine = 0.0;
}

void ParkingTicket::setParkedCar(ParkedCar car) {
    this.car = car;
}

void ParkingTicket::setPoliceOfficer(PoliceOfficer officer) {
    this.officer = officer;
}

void ParkingTicket::setHoursIllegalyParked(int hours) {
    if (hours > 0) {
        hours--;
        fine += 25;
    }
    while (hours > 0) {
        hours--;
        fine += 10;
    }
}
