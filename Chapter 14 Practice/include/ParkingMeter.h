#ifndef PARKINGMETER_H
#define PARKINGMETER_H


class ParkingMeter {
private:
    int minutesPurchased;

public:
    ParkingMeter();

    int getMinutesPurchased() const;

    void setMinutesPurchased(int minutes);
};

#endif // PARKINGMETER_H
