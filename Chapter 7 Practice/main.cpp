#include <iostream>
#include <iomanip>

using namespace std;

const int PRACTICE_COLUMNS = 4;
const int BOARD_SIZE = 3;
const int DATA_COLUMNS = 5;

//{ Function Prototypes
void practice1();

void practice2();

void practice3();

void createArray(int [][PRACTICE_COLUMNS], int);

int sumAll(int [][PRACTICE_COLUMNS], int);

void sumAllByRow(int [][PRACTICE_COLUMNS], int);

void sumAllByColumn(int [][PRACTICE_COLUMNS], int);

void sumAllDiagonally(int [][PRACTICE_COLUMNS], int);

void chipsAndSalsa();

void lotteryApplication();

void ticTacToeGame();

void printBoard(char [][BOARD_SIZE]);

void playTurn(char [][BOARD_SIZE], int);

void scanRows(char [][BOARD_SIZE], bool []);

void scanColumns(char [][BOARD_SIZE], bool []);

void scanFirstDiagonal(char [][BOARD_SIZE], bool []);

void scanSecondDiagonal(char [][BOARD_SIZE], bool []);

void twoDArrayOperations();

double getTotal(double [][DATA_COLUMNS], int);

double getAverage(double [][DATA_COLUMNS], int);

double getRowTotal(double [][DATA_COLUMNS], int);

double getColumnTotal(double [][DATA_COLUMNS], int, int);

double getHighestInRow(double [][DATA_COLUMNS], int);

double getLowestInRow(double [][DATA_COLUMNS], int);

void displayData(int, int, double, double, double, double, double, double);
//}

int main() {
    //practice1();
    //practice2();
    //practice3();
    chipsAndSalsa();
    // lotteryApplication();
    // ticTacToeGame();
    // twoDArrayOperations();

    return 0;
}

/*{ Practice Problems
void practice1() {
    cout << setprecision(2) << fixed;

    const int STUDENT_NUMS_SIZE = 100;
    const int MILES_SIZE = 14;
    const int CITY_NAMES_SIZE = 6;
    const int TOP_EVENTS_SIZE = 3;

    int studentNums[STUDENT_NUMS_SIZE];
    long double miles[MILES_SIZE] = {1, 16, 49, 100, 169};
    string cityNames[CITY_NAMES_SIZE];
    string topEvents[] = {"FRC District Competition", "Drive", "Sleep"};

    for (int i = 0; i < STUDENT_NUMS_SIZE; i++)
        studentNums[i] = i + 1;

    for (int i = 0; i <= CITY_NAMES_SIZE + 4; i++) {
        cout << "Enter in a city: ";
        getline(cin, cityNames[i]);
    }

    cout << "miles Array: ";
    for (long double n : miles)
        cout << n << " ";

    string topEventsCopy[TOP_EVENTS_SIZE];
    for (int i = 0; i < TOP_EVENTS_SIZE; i++)
        topEventsCopy[i] = topEvents[i];

    cout << "\ntopEvents Array: ";
    for (string n : topEvents)
        cout << "\"" << n << "\" ";
    cout << "\ntopEventsCopy Array: ";
    for (string n : topEventsCopy)
        cout << "\"" << n << "\" ";

    long double milesCopy[MILES_SIZE];
    for (int i = 0; i < MILES_SIZE; i++)
        milesCopy[i] = miles[i];

    cout << "\nmiles Array: ";
    for (long double n : miles)
        cout << n << " ";
    cout << "\nmilesCopy Array: ";
    for (long double n : milesCopy)
        cout << n << " ";
}

void practice2() {

    const int NUMBERS_SIZE = 100;
    const int MIN_VALUE = 5;
    const int MAX_VALUE = 55;

    int numbers[NUMBERS_SIZE];
    int sum = 0;
    int minValue;
    int maxValue;
    double average;

    cout << "\nnumbers Array: ";
    for (int i = 0; i < NUMBERS_SIZE; i++) {
        numbers[i] = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
        cout << numbers[i] << " ";
    }
    minValue = numbers[0];
    maxValue = numbers[0];

    for (int n : numbers) {
        sum += n;
        if (n < minValue)
            minValue = n;
        if (n > maxValue)
            maxValue = n;
    }

    average = (double) sum / NUMBERS_SIZE;

    cout << "\nSum of numbers Array: " << sum << endl;
    cout << "Average of numbers Array: " << average << endl;
}

void practice3() {
    const int C_NUMBERS1 = 4;
    const int R_NUMBERS1 = 4;

    const int R_NUMBERS2 = 4;

    int numbers1[R_NUMBERS1][C_NUMBERS1] = {{1, 2, 3, 4},
                                            {5, 6, 7, 8},
                                            {9, 10, 11, 12},
                                            {13, 14, 15, 16}};
    int numbers2[R_NUMBERS2][COLUMNS];

    createArray(numbers2, R_NUMBERS2);
    cout << endl;
    sumAll(numbers2, R_NUMBERS2);
    cout << endl;
    sumAllByColumn(numbers2, R_NUMBERS2);
    cout << endl;
    sumAllByRow(numbers2, R_NUMBERS2);
    cout << endl;
    //sumAllDiagonally(numbers2, R_NUMBERS2);
}

void createArray(int numbers[][COLUMNS], int rows) {
    const int MIN_VALUE = 4;
    const int MAX_VALUE = 64;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            numbers[i][j] = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
}

int sumAll(int numbers[][COLUMNS], int rows) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            sum += numbers[i][j];
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    return sum;
}

void sumAllByColumn(int numbers[][COLUMNS], int rows) {
    int sum[COLUMNS];

    for (int i = 0; i < COLUMNS; i++) {
        for (int j = 0; j < rows; j++) {
            sum[i] += numbers[j][i];
        }
        cout << sum[i] << " ";
    }
}

void sumAllByRow(int numbers[][COLUMNS], int rows) {
    int sum[rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            sum[i] += numbers[i][j];
        }
        cout << sum[i] << " ";
    }
}

void sumAllDiagonally(int numbers[][COLUMNS], int rows) {

}
}*/

//{ 3) Chips and Salsa
void chipsAndSalsa() {
    // 3) Chips and Salsa
    const int SALSA_QUANTITY = 5;

    string typesOfSalsa[] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int salsaSales[SALSA_QUANTITY];
    int totalSales = 0;
    int lowestSale;
    int highestSale;
    int lowestSaleIndex;
    int highestSaleIndex;

    cout << "\n3) Chips and Salsa\n---" << endl;
    cout << "Enter Sales for each Type of Salsa:" << endl;
    for (int i = 0; i < SALSA_QUANTITY; i++) {
        cout << typesOfSalsa[i] << " Salsa: ";
        cin >> salsaSales[i];
        while (salsaSales < 0) {
            cout << "Inappropriate Quantity... Try again: ";
            cin >> salsaSales[i];
        }
    }

    lowestSaleIndex = 0;
    lowestSale = salsaSales[lowestSaleIndex];
    highestSaleIndex = 0;
    highestSale = salsaSales[highestSaleIndex];

    cout << "\nSalsa Sales" << endl;
    for (int i = 0; i < SALSA_QUANTITY; i++) {
        cout << typesOfSalsa[i] << " Salsa: " << salsaSales[i] << endl;

        totalSales += salsaSales[i];
        if (salsaSales[i] < lowestSale) {
            lowestSale = salsaSales[i];
            lowestSaleIndex = i;
        }
        if (salsaSales[i] > highestSale) {
            highestSale = salsaSales[i];
            highestSaleIndex = i;
        }
    }

    cout << "\nTotal Sales: " << totalSales << endl;
    cout << "Highest Selling Salsa: " << typesOfSalsa[highestSaleIndex] << " Salsa" << endl;
    cout << "Lowest Selling Salsa: " << typesOfSalsa[lowestSaleIndex] << " Salsa" << endl;
}
//}

//{ 14) Lottery Application
void lotteryApplication() {
    // 14) Lottery Application
    const int NUMBER_OF_DIGITS = 5;
    const int MAX_NUMBER = 9;

    int matchingDigits = 0;
    int lottery[MAX_NUMBER];
    int user[NUMBER_OF_DIGITS];

    cout << "\n14) Lottery Application\n---" << endl;
    cout << "Enter in your " << NUMBER_OF_DIGITS << " digits (0-" << MAX_NUMBER
         << ") for a chance to win the Grand Prize!" << endl;

    for (int i = 0; i < NUMBER_OF_DIGITS; i++) {
        lottery[i] = rand() % (MAX_NUMBER + 1);
    }

    for (int i = 0; i < NUMBER_OF_DIGITS; i++) {
        cout << "#" << i + 1 << ": ";
        cin >> user[i];
        while (user[i] < 0 || user[i] > MAX_NUMBER) {
            cout << "Invalid Input... Try again: ";
            cin >> user[i];
        }
        if (user[i] == lottery[i])
            matchingDigits++;
    }

    cout << "\nLottery Numbers: " << lottery[0];
    for (int i = 1; i < NUMBER_OF_DIGITS; i++)
        cout << " | " << lottery[i];

    cout << "\nYour Numbers: " << setw(4) << user[0];
    for (int i = 1; i < NUMBER_OF_DIGITS; i++)
        cout << " | " << user[i];

    if (matchingDigits != NUMBER_OF_DIGITS)
        cout << "\n\nYou've matched " << matchingDigits << " digit(s)." << endl;
    else
        cout << "\n\nYou are the Grand Prize Winner!" << endl;
}
//}

//{ 18) Tic-Tac-Toe Game
void ticTacToeGame() {
    // 18) Tic-Tac-Toe Game
    bool winnerXO[] = {false, false};
    char board[BOARD_SIZE][BOARD_SIZE];
    int turns = 0;

    cout << "\n 18) Tic-Tac-Toe Game\n---" << endl;
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++)
            board[i][j] = '*';
    }

    while (!winnerXO[0] && !winnerXO[1] && turns != BOARD_SIZE * BOARD_SIZE) {
        turns++;

        printBoard(board);
        playTurn(board, turns);
        scanRows(board, winnerXO);
        if (!winnerXO[0] && !winnerXO[1])
            scanColumns(board, winnerXO);
        if (!winnerXO[0] && !winnerXO[1])
            scanFirstDiagonal(board, winnerXO);
        if (!winnerXO[0] && !winnerXO[1])
            scanSecondDiagonal(board, winnerXO);
    }

    printBoard(board);

    if (winnerXO[0])
        cout << "\nPlayer 1 (X) is the Winner!" << endl;
    if (winnerXO[1])
        cout << "\nPlayer 2 (O) is the Winner!" << endl;
    if (!winnerXO[0] && !winnerXO[1])
        cout << "\nTied Game." << endl;

    cout << endl;
    for (int j = 0; j < 8 * BOARD_SIZE + 3; j++)
        cout << "=";
    cout << endl;
}

// Prints out the Tic-Tac-Toe Board
void printBoard(char board[][BOARD_SIZE]) {
    for (int j = 0; j < 8 * BOARD_SIZE + 3; j++)
        cout << "=";
    cout << endl;
    cout << "\n===";
    for (int i = 0; i < BOARD_SIZE; i++)
        cout << "|" << i + 1 << "|=";
    for (int i = 0; i < BOARD_SIZE; i++) {
        cout << "\n|" << i + 1 << "| ";
        for (int j = 0; j < BOARD_SIZE; j++)
            cout << board[i][j] << " | ";
        cout << endl;
        for (int j = 0; j < 4 * BOARD_SIZE + 3; j++)
            cout << "=";
    }
}

// Plays a Turn by Prompting for their next Position
void playTurn(char board[][BOARD_SIZE], int turns) {
    int playerRow;
    int playerColumn;
    int round = (turns + 1) / 2;

    cout << "\nRound " << round << ": Player " << -turns % 2 + 2 << "'s Turn" << endl;
    cout << "Row: ";
    cin >> playerRow;
    cout << "Column: ";
    cin >> playerColumn;

    while (playerRow > BOARD_SIZE || playerColumn > BOARD_SIZE || playerRow < 1
           || playerColumn < 1 || board[playerRow - 1][playerColumn - 1] != '*') {
        cout << "Invalid Play... Try again." << endl;
        cout << "Row: ";
        cin >> playerRow;
        cout << "Column: ";
        cin >> playerColumn;
    }
    cout << endl;

    if (turns % 2 == 1)
        board[playerRow - 1][playerColumn - 1] = 'X';
    else
        board[playerRow - 1][playerColumn - 1] = 'O';
}

// Scans each Row for Wins
void scanRows(char board[][BOARD_SIZE], bool winnerXO[]) {
    for (int i = 0; i < BOARD_SIZE && !winnerXO[0] && !winnerXO[1]; i++) {
        winnerXO[0] = true;
        winnerXO[1] = true;
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] != 'X')
                winnerXO[0] = false;
            if (board[i][j] != 'O')
                winnerXO[1] = false;
        }
    }
}

// Scans each Column for Wins
void scanColumns(char board[][BOARD_SIZE], bool winnerXO[]) {
    for (int i = 0; i < BOARD_SIZE && !winnerXO[0] && !winnerXO[1]; i++) {
        winnerXO[0] = true;
        winnerXO[1] = true;
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[j][i] != 'X')
                winnerXO[0] = false;
            if (board[j][i] != 'O')
                winnerXO[1] = false;
        }
    }
}

// Scans the First Diagonal for Wins
void scanFirstDiagonal(char board[][BOARD_SIZE], bool winnerXO[]) {
    winnerXO[0] = true;
    winnerXO[1] = true;
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i][i] != 'X')
            winnerXO[0] = false;
        if (board[i][i] != 'O')
            winnerXO[1] = false;
    }
}

// Scans the Second Diagonal for Wins
void scanSecondDiagonal(char board[][BOARD_SIZE], bool winnerXO[]) {
    winnerXO[0] = true;
    winnerXO[1] = true;
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i][(BOARD_SIZE - 1) - i] != 'X')
            winnerXO[0] = false;
        if (board[i][(BOARD_SIZE - 1) - i] != 'O')
            winnerXO[1] = false;
    }
}
//}

//{ 19) 2D Array Operations
void twoDArrayOperations() {
    // 19) 2D Array Operations
    const int DATA_ROWS = 4;
    const int ROW_SUBSCRIPT = 3;
    const int COLUMN_SUBSCRIPT = 4;

    double testData[DATA_ROWS][DATA_COLUMNS];
    double total;
    double average;
    double rowTotal;
    double columnTotal;
    double highestInRow;
    double lowestInRow;

    cout << "\n19) 2D Array Operations" << endl;
    for (int i = 0; i < DATA_ROWS; i++) {
        for (int j = 0; j < DATA_COLUMNS; j++) {
            testData[i][j] = (double) (rand() % 101) / (rand() % 10 + 1);
        }
    }

    total = getTotal(testData, DATA_ROWS);
    average = getAverage(testData, DATA_ROWS);
    rowTotal = getRowTotal(testData, ROW_SUBSCRIPT);
    columnTotal = getColumnTotal(testData, DATA_ROWS, COLUMN_SUBSCRIPT);
    highestInRow = getHighestInRow(testData, ROW_SUBSCRIPT);
    lowestInRow = getLowestInRow(testData, ROW_SUBSCRIPT);

    displayData(ROW_SUBSCRIPT, COLUMN_SUBSCRIPT, total, average, rowTotal, columnTotal, highestInRow, lowestInRow);
}

// Returns the Sum of its Elements
double getTotal(double data[][DATA_COLUMNS], int rows) {
    double sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < DATA_COLUMNS; j++)
            sum += data[i][j];
    }

    return sum;
}

// Returns the Average of its Elements
double getAverage(double data[][DATA_COLUMNS], int rows) {
    return getTotal(data, rows) / (rows * DATA_COLUMNS);
}

// Returns the Sum of the Elements of a given Row
double getRowTotal(double data[][DATA_COLUMNS], int rowSubscript) {
    double rowSum = 0;

    for (int i = 0; i < DATA_COLUMNS; i++)
        rowSum += data[rowSubscript - 1][i];

    return rowSum;
}

// Returns the Sum of the Elements of a given Column
double getColumnTotal(double data[][DATA_COLUMNS], int rows, int columnSubscript) {
    double columnSum = 0;

    for (int i = 0; i < rows; i++)
        columnSum += data[i][columnSubscript - 1];

    return columnSum;
}

// Returns the Largest Element in a given Row
double getHighestInRow(double data[][DATA_COLUMNS], int rowSubscript) {
    double highestNum = data[rowSubscript][0];

    for (int i = 0; i < DATA_COLUMNS; i++) {
        if (data[rowSubscript][i] > highestNum)
            highestNum = data[rowSubscript][i];
    }

    return highestNum;
}

// Returns the Smallest Element in a given Row
double getLowestInRow(double data[][DATA_COLUMNS], int rowSubscript) {
    double lowestNum = data[rowSubscript][0];

    for (int i = 0; i < DATA_COLUMNS; i++) {
        if (data[rowSubscript][i] < lowestNum)
            lowestNum = data[rowSubscript][i];
    }

    return lowestNum;
}

// Displays the Calculated Information
void displayData(int rowSubscript, int columnSubscript, double total, double average,
                 double rowTotal, double columnTotal, double highestInRow, double lowestInRow) {
    cout << setprecision(3) << fixed;
    cout << "Total Sum: " << setw(16) << total << endl;
    cout << "Average: " << setw(18) << average << endl;
    cout << "Row " << rowSubscript << " Sum: " << setw(16) << rowTotal << endl;
    cout << "Column " << columnSubscript << " Sum: " << setw(13) << columnTotal << endl;
    cout << "Highest in Row " << rowSubscript << ": " << setw(9) << highestInRow << endl;
    cout << "Lowest in Row " << rowSubscript << ": " << setw(10) << lowestInRow << endl;
}
//}
