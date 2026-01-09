#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

//{ Function Prototypes
void daysInMonth();

void mathTutor();

void bankCharges();

void personalBest();

void speedOfSound();
//}

int main() {
    daysInMonth();
    mathTutor();
    bankCharges();
    personalBest();
    speedOfSound();

    return 0;
}

void daysInMonth() {
    // 10) Days in a Month
    int month;
    int year;
    int days;

    cout << "10) Days in a Month\n---" << endl;
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;

    switch (month) {
        case 1:;
        case 3:;
        case 5:;
        case 7:;
        case 8:;
        case 10:;
        case 12:
            days = 31;
            break;
        case 4:;
        case 6:;
        case 9:;
        case 11:
            days = 30;
            break;
        case 2:
            if (year % 4 != 0 && year % 400 == 0)
                days = 29;
            else
                days = 28;
            break;
    }

    cout << "\nMonth " << month << " of the year " << year << " has " << days << " days." << endl;
}

void mathTutor() {
    // 11) Math Tutor
    const int MIN_VALUE = -10;
    const int MAX_VALUE = 10;
    int addend1 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    int addend2 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    int sum = addend1 + addend2;
    int userAnswer;

    cout << "\n11) Math Tutor\n---" << endl;
    cout << "" << setw(7) << addend1 << endl;
    cout << "+" << setw(6) << addend2 << endl;
    cout << "-------" << endl;
    cin.ignore();
    cin >> userAnswer;
    if (userAnswer == sum) {
        cout << "Congratulations!" << endl;
    } else {
        cout << setw(7) << sum << endl;
    }
}

void bankCharges() {
    // 14) Bank Charges
    const double MONTHLY_FEE = 10;
    const int MIN_BALANCE = 400;
    const int MIN_BALANCE_FEE = 15;
    const int CHECKS_QUANTITY_1 = 20;
    const int CHECKS_QUANTITY_2 = 40;
    const int CHECKS_QUANTITY_3 = 60;
    const double PRICE_MULTIPLIER_1 = 0.1;
    const double PRICE_MULTIPLIER_2 = 0.08;
    const double PRICE_MULTIPLIER_3 = 0.06;
    const double PRICE_MULTIPLIER_4 = 0.04;
    double balance;
    double totalFee;
    int checks;

    cout << "\n14) Bank Charges\n---" << endl;
    cout << "Starting Balance: $";
    cin >> balance;
    while (balance < 0) {
        cout << "The Balance is Overdrawn... Try again: $";
        cin >> balance;
    }
    cout << "Number of Checks Written: ";
    cin >> checks;
    while (checks < 0) {
        cout << "Inappropriate Quantity... Try again: ";
        cin >> checks;
    }
    cout << "Checks: " << checks << endl;
    totalFee = balance < MIN_BALANCE ? MIN_BALANCE_FEE + MONTHLY_FEE : MONTHLY_FEE;
    cout << "Total Fee: " << totalFee << endl;

    if (checks < CHECKS_QUANTITY_1)
        totalFee += checks * PRICE_MULTIPLIER_1;
    else if (checks < CHECKS_QUANTITY_2)
        totalFee += checks * PRICE_MULTIPLIER_2;
    else if (checks < CHECKS_QUANTITY_3)
        totalFee += checks * PRICE_MULTIPLIER_3;
    else
        totalFee += checks * PRICE_MULTIPLIER_4;

    cout << "\nBank's Service Fee for the Month: $" << setprecision(2) << fixed << totalFee << endl;
}

void personalBest() {
    // 17) Personal Best
    string runner1, runner2, runner3,
            firstPlace, secondPlace, thirdPlace;
    int time1, time2, time3;

    cout << "\n17) Personal Best\n---" << endl;
    cout << "Enter statistics for 3 runners." << endl;
    cout << "Runner 1" << endl;
    cout << "Name: ";
    cin.ignore();
    getline(cin, runner1);
    cout << "Time: ";
    cin >> time1;
    cout << "Runner 2" << endl;
    cout << "Name: ";
    cin.ignore();
    getline(cin, runner2);
    cout << "Time: ";
    cin >> time2;
    cout << "Runner 3" << endl;
    cout << "Name: ";
    cin.ignore();
    getline(cin, runner3);
    cout << "Time: ";
    cin >> time3;

    if (time1 < time2 && time1 < time3) {
        firstPlace = runner1;
        if (time2 < time3) {
            secondPlace = runner2;
            thirdPlace = runner3;
        } else {
            secondPlace = runner3;
            thirdPlace = runner2;
        }
    } else if (time2 < time1 && time2 < time3) {
        firstPlace = runner2;
        if (time1 < time3) {
            secondPlace = runner1;
            thirdPlace = runner3;
        } else {
            secondPlace = runner3;
            thirdPlace = runner1;
        }
    } else {
        firstPlace = runner3;
        if (time1 < time2) {
            secondPlace = runner1;
            thirdPlace = runner2;
        } else {
            secondPlace = runner2;
            thirdPlace = runner1;
        }
    }

    cout << "\nFirst Place: " << firstPlace << endl;
    cout << "Second Place: " << secondPlace << endl;
    cout << "Third Place: " << thirdPlace << endl;
}

void speedOfSound() {
    // 20) The Speed of Sound
    const int AIR_SOS = 1100;
    const int WATER_SOS = 4900;
    const int STEEL_SOS = 16400;
    double distance;
    int medium;

    cout << "\n20) The Speed of Sound\n---" << endl;
    cout << "1) Air" << endl;
    cout << "2) Water" << endl;
    cout << "3) Steel" << endl;
    cout << "Medium that the Sound Wave will travel through: ";
    cin >> medium;
    cout << "Distance Traveled (ft): ";
    cin >> distance;

    cout << setprecision(4) << fixed;
    switch (medium) {
        case 1:
            cout << "\nIt will take " << distance / AIR_SOS << " seconds." << endl;
            break;
        case 2:
            cout << "\nIt will take " << distance / WATER_SOS << " seconds." << endl;
            break;
        case 3:
            cout << "\nIt will take " << distance / STEEL_SOS << " seconds." << endl;
            break;
        default:
            cout << "Inappropriate selection...";
    }
}
