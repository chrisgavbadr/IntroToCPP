// My first C++ program

#include <iostream>
#include <iomanip>

using namespace std;

//{ Function Prototypes
void getAverage();

void showDataTypeSize();

void displayCircuitPrice();
//}

int main() {
    getAverage();
    showDataTypeSize();
    displayCircuitPrice();
}

void getAverage() {
    // 5) Average of Values
    int a = 28,
            b = 32,
            c = 37,
            d = 24,
            e = 33;
    cout << "5) Average of Values\n---" << endl;
    cout << "Average of " << a << ", " << b << ", " << c << ", " << d << ", and " << e << endl;
    double average = (a + b + c + d + e) / 5.0;
    cout << average << endl;
}

void showDataTypeSize() {
    // 9) Cyborg Data Type Sizes
    cout << "\n9) Cyborg Data Type Sizes\n---" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
}

void displayCircuitPrice() {
    // 13) Circuit Board Price
    double percentProfit = 0.4;
    double originalPrice = 12.67;
    double sellingPrice = (1 + 0.4) * originalPrice;

    cout << "\n13) Circuit Board Price\n---" << endl;
    cout << "Original Price: " << "$" << originalPrice << endl;
    cout << "Percent Profit: " << percentProfit * 100 << "%" << endl;
    cout << "Selling Price: " << "$" << sellingPrice << endl;
}
