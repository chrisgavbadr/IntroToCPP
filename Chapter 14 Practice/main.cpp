//Main
//Chapter 14 practice

//{ Includes
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <cctype>
#include <cstring>
#include <string>
#include <ctime>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
//}

//{ Namespace
using namespace std;
//}

//{ Function Prototypes
void problem();
//}

int main() {
    cout << setprecision(1) << left << fixed;
    problem();
}

//{ #. Problem
//Practice:
void problem() {
    // 14) Parking Ticket Simulator
    ParkedCar car;
    PoliceOfficer officer;
    ParkingMeter meter;
    string make;
    string model;
    string color;
    string licenseNumber;
    int parkMinutes;
    int minutesPurchased;

    cout << "Chapter 14 Practice" << endl;
    cout << "Enter in your Car Info." << endl;
    cout << "Make: ";
    getline(cin, make);
    cout << "Model: ";
    getline(cin, model);
    cout << "Color: ";
    getline(cin, color);
    cout << "License Number: ";
    getline(cin, licenseNumber);
    cout << "Enter in your Parking Info." << endl;
    cout << "Park Minutes: ";
    cin >> parkMinutes;
    cout << "Minutes Purchased: ";
    cin >> minutesPurchased;

    car.setMake(make);
    car.setModel(model);
    car.setColor(color);
    car.setLicenseNumber(licenseNumber);
    car.setParkMinutes(parkMinutes);
    meter.setMinutesPurchased(minutesPurchased);

    if (officer.examine(car, meter)) {
        ParkingTicket ticket = officer.makeTicket(car, hours);
    }

    cout << endl;
}
//}
