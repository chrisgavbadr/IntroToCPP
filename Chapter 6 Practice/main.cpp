#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//{ Function Prototypes
void starSearch();

void getJudgeData(double &, int);

void calcScore(double, double, double, double, double);

double findLowest(double, double, double, double, double);

double findHighest(double, double, double, double, double);

void overloadedHospital();

double getPatientData(int, double, double, double);

double getPatientData(double, double);

void paintJobEstimator();

void displayPaintJobData(double, double, double, double, double);

void rockPaperScissorsGame();

int makeUserChoice();

void compareChoices(int, int);
//}

int main() {
    starSearch();
    overloadedHospital();
    paintJobEstimator();
    rockPaperScissorsGame();

    return 0;
}

void starSearch() {
    // 12) Star Search
    double score1;
    double score2;
    double score3;
    double score4;
    double score5;

    cout << "12) Star Search\n---" << endl;
    cout << "Enter scores for 5 Judges." << endl;
    getJudgeData(score1, 1);
    getJudgeData(score2, 2);
    getJudgeData(score3, 3);
    getJudgeData(score4, 4);
    getJudgeData(score5, 5);
    calcScore(score1, score2, score3, score4, score5);
}

void getJudgeData(double &score, int judgeNumber) {
    const int MAX_SCORE = 10;
    cout << "Judge #" << judgeNumber << " (0-" << MAX_SCORE << "): ";
    cin >> score;
    while (score < 0 || score > MAX_SCORE) {
        cout << "Invalid Score... Try again: ";
        cin >> score;
    }
}

void calcScore(double score1 = 0, double score2 = 0, double score3 = 0, double score4 = 0, double score5 = 0) {
    double lowestScore = findLowest(score1, score2, score3, score4, score5);
    double highestScore = findHighest(score1, score2, score3, score4, score5);
    double totalScore = score1 + score2 + score3 + score4 + score5 - (lowestScore + highestScore);
    double finalScore = totalScore / 3;

    cout << "\nLowest Score: " << setw(5) << lowestScore << endl;
    cout << "Highest Score: " << setw(4) << highestScore << endl;
    cout << "Total Score: " << setw(6) << totalScore << endl;
    cout << "Final Score: " << setw(6) << finalScore << endl;
}

double findLowest(double score1, double score2, double score3, double score4, double score5) {
    int lowest = score1;
    if (score2 < lowest)
        lowest = score2;
    if (score3 < lowest)
        lowest = score3;
    if (score4 < lowest)
        lowest = score4;
    if (score5 < lowest)
        lowest = score5;
    return lowest;


}

double findHighest(double score1, double score2, double score3, double score4, double score5) {
    int highest = score1;
    if (score2 > highest)
        highest = score2;
    if (score3 > highest)
        highest = score3;
    if (score4 > highest)
        highest = score4;
    if (score5 > highest)
        highest = score5;
    return highest;
}

void overloadedHospital() {
    // 14) Overloaded Hospital
    int patientID;
    double medicationFees;
    double serviceFees;
    double totalFee;

    cout << "\n14) Overloaded Hospital\n---" << endl;
    cout << "Were you admitted as an 1) in-patient or 2) out-patient? ";
    cin >> patientID;
    while (patientID != 1 && patientID != 2) {
        cout << "Invalid Input... Try again: ";
        cin >> patientID;
    }

    cout << "Medication Fees: $";
    cin >> medicationFees;
    while (medicationFees < 0) {
        cout << "Invalid Fee... Try again: ";
        cin >> medicationFees;
    }

    cout << "Service Fees: $";
    cin >> serviceFees;
    while (serviceFees < 0) {
        cout << "Invalid Fee... Try again: ";
        cin >> serviceFees;
    }

    if (patientID == 1) {
        int daysInHospital;
        double dailyRate;

        cout << "Days in Hospital: ";
        cin >> daysInHospital;
        while (daysInHospital < 0) {
            cout << "Invalid Number... Try again: ";
            cin >> daysInHospital;
        }

        cout << "Daily Rate: $";
        cin >> dailyRate;
        while (dailyRate < 0) {
            cout << "Invalid Rate... Try again: ";
            cin >> dailyRate;
        }

        totalFee = getPatientData(daysInHospital, dailyRate, medicationFees, serviceFees);
    } else {
        totalFee = getPatientData(medicationFees, serviceFees);
    }

    cout << "\nTotal Fee: $" << setprecision(2) << fixed << totalFee << endl;
}

double getPatientData(int daysInHospital, double dailyRate, double medicationFees, double serviceFees) {
    return daysInHospital * dailyRate + medicationFees + serviceFees;
}

double getPatientData(double medicationFees, double serviceFees) {
    return medicationFees + serviceFees;
}

void paintJobEstimator() {
    // 17) Paint Job Estimator
    const int SQUARE_FT_PER_GAL = 110;
    const int LABOR_HOURS_PER_GAL = 8;
    const double HOURLY_FEE = 25.00;
    const double GAL_PAINT_PRICE_CAP = 10.00;

    int numberOfRooms;
    double galPaintPrice;
    double wallSurfaceArea;

    cout << "\n17) Paint Job Estimator\n---" << endl;
    cout << "# of Rooms to Paint: ";
    cin >> numberOfRooms;
    while (numberOfRooms < 1) {
        cout << "Invalid Quantity... Try again: ";
        cin >> numberOfRooms;
    }

    cout << "Price for a Gallon of Paint: $";
    cin >> galPaintPrice;
    while (galPaintPrice < GAL_PAINT_PRICE_CAP) {
        cout << "Invalid Price... Try again: $";
        cin >> galPaintPrice;
    }

    cout << "Wall Area of a Room: ";
    cin >> wallSurfaceArea;
    while (wallSurfaceArea < 0) {
        cout << "Invalid Area... Try again: ";
        cin >> wallSurfaceArea;
    }

    double galPaintRequired = (numberOfRooms * wallSurfaceArea) / SQUARE_FT_PER_GAL;
    double hoursOfLabor = galPaintRequired * LABOR_HOURS_PER_GAL;
    double totalPaintFee = galPaintRequired * galPaintPrice;
    double totalLaborFee = hoursOfLabor * HOURLY_FEE;
    double totalPaintJobFee = totalPaintFee + totalLaborFee;

    displayPaintJobData(galPaintRequired, hoursOfLabor, totalPaintFee, totalLaborFee, totalPaintJobFee);
}

void displayPaintJobData(double galPaintRequired, double hoursOfLabor, double totalPaintFee,
                         double totalLaborFee, double totalPaintJobFee) {
    cout << "\nGallons of Paint Required: " << setw(8) << galPaintRequired << " Gallons" << endl;
    cout << "Hours of Labor Required: " << setw(10) << hoursOfLabor << " Hours" << endl;
    cout << "Total Paint Fee: " << setw(9) << "$" << setw(8) << totalPaintFee << endl;
    cout << "Total Labor Fee: " << setw(9) << "$" << setw(8) << totalLaborFee << endl;
    cout << "Total Paint Job Fee: " << setw(5) << "$" << setw(8) << totalPaintJobFee << endl;
}

void rockPaperScissorsGame() {
    // 23) Rock, Paper, Scissors Game
    int computerChoice;
    int userChoice;
    cout << "\n23) Rock, Paper, Scissors Game\n---" << endl;
    do {
        computerChoice = (rand() % 4) + 1;
        userChoice = makeUserChoice();
        cout << "Computer's Choice: " << computerChoice << endl;
        compareChoices(computerChoice, userChoice);
    } while (userChoice == computerChoice);
}

int makeUserChoice() {
    static int userChoice;

    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;
    cout << "\nMake your Choice: ";
    cin >> userChoice;
    while (userChoice < 1 || userChoice > 3) {
        cout << "Invalid Selection... Try again: ";
        cin >> userChoice;
    }

    return userChoice;
}

void compareChoices(int computerChoice, int userChoice) {
    const int ROCK = 1;
    const int PAPER = 2;
    const int SCISSORS = 3;

    if (userChoice == ROCK && computerChoice == SCISSORS)
        cout << "Rock smashes Scissors." << endl;
    else if (userChoice == PAPER && computerChoice == ROCK)
        cout << "Paper wraps Rock." << endl;
    else if (userChoice == SCISSORS && computerChoice == PAPER)
        cout << "Scissors cut Paper." << endl;
    else
        cout << "Tie! Play again." << endl;
}
