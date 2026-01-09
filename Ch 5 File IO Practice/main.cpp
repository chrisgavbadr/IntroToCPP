#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {
    // File IO Practice
    const int MIN_VALUE = 50;
    const int MAX_VALUE = 500;
    ifstream inputFile;
    ofstream outputFile;
    string filename;
    int number;
    int sum = 0;

    cout << "i) File IO Practice\n---" << endl;
    cout << "Filename: ";
    cin >> filename;

    outputFile.open(filename);

    if (outputFile) {
        outputFile << "Number Report\n";
        for (int i = 0; i < 10; i++) {
            number = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
            outputFile << number << endl;
            sum += number;
        }
        outputFile << "Sum: " << sum << endl;
        double average = sum / 10.0;
        outputFile << "Average: " << average << endl;

        outputFile.close();
    } else {
        cout << "Error 404: Failure to open file." << endl;
    }

    return 0;
}
