#include <iostream>
#include <iomanip>

using namespace std;

//{ Function Prototypes
void testScores();

void createArray(double *, string[], int);

void sortArray(double *, string [], int);

void calculateAverage(double *, int, double *);

void displayScores(double *, string [], int, double *);
//}

int main() {
    testScores();

    return 0;
}

//{ 2-4) Test Scores
void testScores() {
    int numTestScores;
    double averageScore = 0;
    double *averageScorePtr = &averageScore;

    cout << "2-4) Test Scores\n---" << endl;
    cout << "Number of Test Scores to Record: ";
    cin >> numTestScores;
    while (numTestScores < 1) {
        cout << "Invalid Input... Try again: ";
        cin >> numTestScores;
    }

    double *testScoresPtr = nullptr;
    string *studentsPtr = nullptr;
    testScoresPtr = new double[numTestScores];
    studentsPtr = new string[numTestScores];

    createArray(testScoresPtr, studentsPtr, numTestScores);
    sortArray(testScoresPtr, studentsPtr, numTestScores);
    calculateAverage(testScoresPtr, numTestScores, averageScorePtr);
    displayScores(testScoresPtr, studentsPtr, numTestScores, averageScorePtr);

    delete[] testScoresPtr;
    delete[] studentsPtr;
    testScoresPtr = nullptr;
    studentsPtr = nullptr;
}

// Creates two Arrays by Prompting the User for a Student Name and Test Score
void createArray(double *testScoresPtr, string students[], int numTestScores) {
    for (int i = 0; i < numTestScores; i++) {
        cout << "Student " << i + 1 << ": ";
        cin.ignore();
        getline(cin, students[i]);
        cout << "Test Score: ";
        cin >> testScoresPtr[i];
        while (testScoresPtr[i] < 0) {
            cout << "Invalid Input... Try again: ";
            cin >> testScoresPtr[i];
        }
    }
}

// Sorts the testScores Array in Ascending Order
void sortArray(double *testScoresPtr, string students[], int numTestScores) {
    int tmpScore;
    string tmpName;

    for (int i = 0; i < numTestScores; i++) {
        for (int j = 0; j < numTestScores; j++) {
            if (testScoresPtr[i] < testScoresPtr[j]) {
                tmpScore = testScoresPtr[i];
                tmpName = *(students + i);
                testScoresPtr[i] = testScoresPtr[j];
                *(students + i) = *(students + j);
                testScoresPtr[j] = tmpScore;
                *(students + j) = tmpName;
            }
        }
    }
}

// Calculates the Average Test Score
void calculateAverage(double *testScoresPtr, int numTestScores, double *averageScorePtr) {
    for (int i = 1; i < numTestScores; i++)
        *averageScorePtr += *(testScoresPtr + i);
    *averageScorePtr /= --numTestScores;
}

// Displays the Students, their Test Score, and the Test Average
void displayScores(double *testScoresPtr, string students[], int numTestScores, double *averageScorePtr) {
    cout << "\nTest Scores in Ascending Order" << endl;
    cout << setprecision(2) << fixed;
    for (int i = 0; i < numTestScores; i++) {
        cout << i + 1 << " | " << *(students + i) << ": " << testScoresPtr[i] << "%" << endl;
    }

    cout << "Test Average (Excluding Score 1): " << *averageScorePtr << "%" << endl;
}
//}
