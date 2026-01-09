#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;

//{ Function Prototypes
void hotelOccupancy();

void studentGrades();

void saveFriendsList();
//}

int main() {
    hotelOccupancy();
    studentGrades();
    saveFriendsList();

    return 0;
}

void hotelOccupancy() {
    // 8) Hotel Occupancy
    int floors;
    int totalRooms = 0;
    int roomsOccupied = 0;
    int roomsUnoccupied = 0;
    int roomsPerFloor;
    int roomsOccupiedOnFloor;
    double pctRoomsOccupied;

    cout << "8) Hotel Occupancy\n---" << endl;
    cout << "# of Floors in the Hotel: ";
    cin >> floors;
    while (floors < 1) {
        cout << "Invalid Input... Try again: ";
        cin >> floors;
    }
    cout << "# of Rooms on each Floor: ";
    cin >> roomsPerFloor;
    while (roomsPerFloor < 10) {
        cout << "Invalid Input... Try again: ";
        cin >> roomsPerFloor;
    }
    totalRooms = roomsPerFloor * floors;

    for (int i = 1; i <= floors; i++) {
        if (i == 13) {
            floors++;
            i++;
        }

        cout << "# of Rooms Occupied on Floor " << i << ": ";
        cin >> roomsOccupiedOnFloor;
        while (roomsOccupiedOnFloor < 0 || roomsOccupiedOnFloor > roomsPerFloor) {
            cout << "Invalid Input... Try again: ";
            cin >> roomsOccupiedOnFloor;
        }
        roomsOccupied += roomsOccupiedOnFloor;
    }
    roomsUnoccupied = totalRooms - roomsOccupied;
    pctRoomsOccupied = (double) roomsOccupied / totalRooms * 100;

    cout << "\n---Hotel Statistics---" << endl;
    cout << "Total # of Rooms: " << setw(10) << totalRooms << endl;
    cout << "# of Occupied Rooms: " << setw(7) << roomsOccupied << endl;
    cout << "# of Unoccupied Rooms: " << setw(5) << roomsUnoccupied << endl;
    cout << "% of Occupied Rooms: " << setw(10) << setprecision(2) << fixed << pctRoomsOccupied << "%" << endl;

}

void studentGrades() {
    // 14) Student Grades
    int numberStudents;
    int numberTestScores;
    double score;
    double averageTestScore = 0;

    cout << "\n14) Student Grades\n---" << endl;
    cout << "# of Students: ";
    cin >> numberStudents;
    while (numberStudents < 0) {
        cout << "Invalid Input... Try again: ";
        cin >> numberStudents;
    }
    cout << "# of Test Scores: ";
    cin >> numberTestScores;
    while (numberTestScores < 0) {
        cout << "Invalid Input... Try again: ";
        cin >> numberTestScores;
    }

    for (int i = 1; i <= numberStudents; i++) {
        cout << "\nStudent " << i << " Test Scores" << endl;
        for (int j = 1; j <= numberTestScores; j++) {
            cout << "Test " << j << " Score: ";
            cin >> score;
            while (score < 0) {
                cout << "Invalid Input... Try again: ";
                cin >> score;
            }
            averageTestScore += score;
        }

        averageTestScore /= numberTestScores;
        cout << "Student " << i << " Average: " << averageTestScore << endl;
        averageTestScore = 0;
    }
}

void saveFriendsList() {
    // 18) Save Friends List
    const int numberFriends = 3;
    ifstream inputFile;
    ofstream outputFile;
    string filename;
    string friendName;

    cout << "\n18) Save Friends List\n---" << endl;
    cout << "Filename: ";
    cin.ignore();
    getline(cin, filename);
    outputFile.open(filename);

    if (outputFile) {
        outputFile << "---Friend List---" << endl;

        for (int i = 1; i <= numberFriends; i++) {
            cout << "Name of Friend " << i << ": ";
            getline(cin, friendName);
            outputFile << i << ") " << friendName << endl;
        }

        outputFile.close();
    } else {
        cout << "Error 404: Failure to open file." << endl;
    }

    // 19) Read Friends List File
    cout << "\n19) Read Friends List File\n---" << endl;
    cout << "Filename to Read From: ";
    getline(cin, filename);

    inputFile.open(filename);

    if (inputFile) {
        cout << "Opening '" << filename << "'..." << endl;
    } else {
        cout << "Error 404: Failure to open file." << endl;
    }
}
