/* main.cpp [Ch 9 Project - Movie Stats]
 *
 * Christian Baduria, C++ 2018
 * Ch 9 Project (Movies Stats), 4/5/18
 *
 * This program allows the user to enter the number of
 * movies watched by a given number of students in a survey.
 * The average, median, and mode are then calculated from
 * the dataset.
 */

#include <iostream>

using namespace std;

//{ Function Prototypes
void createArray(int *, int);

void sortArray(int *, int);

int determineMode(int *, int);

double determineMedian(int *, int);

double calculateAverage(int *, int);
//}

int main() {
    // 13) Movie Statistics
    int students;
    int mode;
    double median;
    double average;

    cout << "Ch 9 Project - Movies Stats\n---" << endl;
    cout << "\nEnter in Movie Statistics." << endl;
    cout << "\nNumber of Students Surveyed: ";
    cin >> students;
    while (students < 0) {
        cout << "Invalid Input... Try again: ";
        cin >> students;
    }

    int *moviesWatchedPtr = new int[students];

    createArray(moviesWatchedPtr, students);
    sortArray(moviesWatchedPtr, students);
    average = calculateAverage(moviesWatchedPtr, students);
    median = determineMedian(moviesWatchedPtr, students);
    mode = determineMode(moviesWatchedPtr, students);

    cout << "\n--- Movies Statistics ---" << endl;
    cout << "Average: " << average << endl;
    cout << "Median: " << median << endl;
    cout << "Mode: " << mode << endl;

    moviesWatchedPtr = nullptr;

    return 0;
}

// Creates an Array by Prompting the User for the # of Movies a Student Watched
void createArray(int *moviesWatchedPtr, int students) {
    for (int i = 0; i < students; i++) {
        cout << "Number of Movies Student " << i + 1 << " Watched: ";
        cin >> *(moviesWatchedPtr + i);
        while (moviesWatchedPtr < 0) {
            cout << "Invalid Input... Try again: ";
            cin >> *(moviesWatchedPtr + i);
        }
    }
}

// Sorts an Array in Ascending Order
void sortArray(int *moviesWatchedPtr, int students) {
    int tmpValue;

    for (int i = 0; i < students; i++) {
        for (int j = 0; j < students; j++) {
            if (*(moviesWatchedPtr + i) < *(moviesWatchedPtr + j)) {
                tmpValue = moviesWatchedPtr[i];
                *(moviesWatchedPtr + i) = *(moviesWatchedPtr + j);
                *(moviesWatchedPtr + j) = tmpValue;
            }
        }
    }
}

// Determines the Mode of an Array
int determineMode(int *moviesWatchedPtr, int students) {
    // 8) Mode Function
    int largestQuantity = 0;
    int quantityCounter = 0;
    int mode;

    for (int i = 0; i < students - 1; i++) {
        if (*(moviesWatchedPtr + i) == *(moviesWatchedPtr + (i + 1)))
            quantityCounter++;
        else
            quantityCounter = 0;
        if (quantityCounter > largestQuantity && quantityCounter > 0) {
            mode = *(moviesWatchedPtr + i);
            largestQuantity = quantityCounter;
            quantityCounter = 0;
        }
    }

    if (largestQuantity > 0)
        return mode;
    return -1;
}

// Determines the Median of an Array
double determineMedian(int *moviesWatchedPtr, int students) {
    // 9) Median Function
    if (students % 2 == 0) {
        return (*(moviesWatchedPtr + (students / 2 - 1)) + *(moviesWatchedPtr + (students / 2))) / 2.0;
    }
    return *(moviesWatchedPtr + (students / 2));
}

// Calculates the Average of an Array
double calculateAverage(int *moviesWatchedPtr, int students) {
    double sum = 0;

    for (int i = 0; i < students; i++)
        sum += *(moviesWatchedPtr + i);

    return sum / students;
}
