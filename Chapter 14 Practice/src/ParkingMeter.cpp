#include "ParkingMeter.h"

ParkingMeter::ParkingMeter() {
    minutesPurchased = 0;
}

int ParkingMeter::getMinutesPurchased() const { return minutesPurchased; }

void ParkingMeter::setMinutesPurchased(int minutes) { minutesPurchased = minutes; }
