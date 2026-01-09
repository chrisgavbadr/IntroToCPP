/* main.cpp [Ch 11 Project - Weather Stats]
 *
 * Christian Baduria, C++ 2018
 * Ch 11 Project (Weather Stats), 5/17/18
 *
 * This program prompts the user for the total rainfall,
 * and the highest and lowest temperatures of each month of
 * the year. The average temperature of the month is calculated
 * by the highest and lowest temperatures. The program then
 * calculates and displays the total rainfall, the highest and
 * lowest temperatures, and the average monthly temperature of
 * the year.
 */

#include <iostream>
#include <iomanip>

using namespace std;

const int MONTHS_IN_YEAR = 12;

// Structure to store weather data
struct WeatherData {
    double totalRainfall;
    double highTemp;
    double lowTemp;
    double avgTemp;
};

// Sets enumerated values for each month
enum Month {
    JANUARY, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST, SEPTEMBER,
    OCTOBER, NOVEMBER, DECEMBER
};

//{ Function Prototypes
void getWeatherData(WeatherData *, string *);

double calcTotalRainfall(WeatherData *);

void determineHighsAndLows(WeatherData *, Month *, Month *, double *, double *);

double calcAvgTemp(WeatherData *);
//}

// Central function that gathers, calculates, and displays data
int main() {
    string months[] = {"January", "February", "March", "April",
                       "May", "June", "July", "August", "September",
                       "October", "November", "December"};
    WeatherData data[MONTHS_IN_YEAR];
    double totalRainfall;
    double avgRainfall;
    double highestTemp;
    double lowestTemp;
    double avgTemp;
    Month highMonthIndex;
    Month lowMonthIndex;

    cout << "Ch 11 Project - Weather Stats" << endl;
    cout << "\n4) Weather Statistics\n---" << endl;
    cout << "\nEnter in the Weather Statistics for the entire year." << endl;

    getWeatherData(data, months);
    determineHighsAndLows(data, &highMonthIndex, &lowMonthIndex, &highestTemp, &lowestTemp);

    totalRainfall = calcTotalRainfall(data);
    avgRainfall = totalRainfall / MONTHS_IN_YEAR;
    avgTemp = calcAvgTemp(data);

    cout << setprecision(2) << fixed;
    cout << "\n---Weather Statistics for this Year---" << endl;
    cout << "Total Rainfall: " << setw(19) << totalRainfall << " inches" << endl;
    cout << "Average Monthly Rainfall: " << setw(9) << avgRainfall << " inches" << endl;
    cout << "Highest Temperature: " << setw(14) << highestTemp << " 'F in " << months[highMonthIndex] << endl;
    cout << "Lowest Temperature: " << setw(15) << lowestTemp << " 'F in " << months[lowMonthIndex] << endl;
    cout << "Average Temperature: " << setw(14) << avgTemp << " 'F" << endl;

    return 0;
}

// Prompts the user for total rainfall, and highest and lowest temperatures of each month
void getWeatherData(WeatherData *dataPtr, string *months) {
    Month month;

    for (month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        cout << "\nMonth " << month + 1 << ": " << months[month] << endl;
        cout << "Total Rainfall (inches): ";
        cin >> dataPtr[month].totalRainfall;
        while (dataPtr[month].totalRainfall < 0) {
            cout << "Invalid Input. Rainfall must be at least 0 inches: ";
            cin >> dataPtr[month].totalRainfall;
        }

        cout << "High Temperature ('F): ";
        cin >> dataPtr[month].highTemp;
        while (!(dataPtr[month].highTemp >= -100 && dataPtr[month].highTemp <= 140)) {
            cout << "Invalid Input. Temperatures must be between -100 to 140 'F: ";
            cin >> dataPtr[month].highTemp;
        }

        cout << "Low Temperature ('F): ";
        cin >> dataPtr[month].lowTemp;
        while (!(dataPtr[month].lowTemp >= -100 && dataPtr[month].lowTemp <= 140)) {
            cout << "Invalid Input. Temperatures must be between -100 to 140 'F: ";
            cin >> dataPtr[month].lowTemp;
        }

        dataPtr[month].avgTemp = (dataPtr[month].highTemp + dataPtr[month].lowTemp) / 2;
    }
}

// Calculates total rainfall
double calcTotalRainfall(WeatherData *dataPtr) {
    Month month;
    double totalRainfall = 0;

    for (month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        totalRainfall += dataPtr[month].totalRainfall;
    }

    return totalRainfall;
}

// Determines highest and lowest temperatures
void determineHighsAndLows(WeatherData *dataPtr, Month *highMonthPtr, Month *lowMonthPtr, double *highTempPtr,
                           double *lowTempPtr) {
    Month month;
    *highTempPtr = dataPtr[0].highTemp;
    *highMonthPtr = JANUARY;
    *lowTempPtr = dataPtr[0].lowTemp;
    *lowMonthPtr = JANUARY;

    for (month = FEBRUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        if (dataPtr[month].highTemp > *highTempPtr) {
            *highTempPtr = dataPtr[month].highTemp;
            *highMonthPtr = month;
        }
        if (dataPtr[month].lowTemp < *lowTempPtr) {
            *lowTempPtr = dataPtr[month].lowTemp;
            *lowMonthPtr = month;
        }
    }
}

// Calculates average monthly temperature
double calcAvgTemp(WeatherData *dataPtr) {
    Month month;
    double sumTemp = 0;

    for (month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        sumTemp += dataPtr[month].avgTemp;
    }

    return sumTemp / MONTHS_IN_YEAR;
}
