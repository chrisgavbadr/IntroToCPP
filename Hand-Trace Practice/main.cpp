#include <iostream>
#include <math.h>

using namespace std;

//{ Function Prototypes
void squaresLessThanN(int);

void numbersDivisibleBy10LessThanN(int);

void powersOf2LessThanN(int);

void sumOfEvens(int, int);

void sumOfSquares(int, int);

void sumOfOdds(int, int);

void sumOfOddDigits(int);
//}

int main() {
    cout << "Hand-Trace Practice: While Loops\n---" << endl;
    squaresLessThanN(100);
    numbersDivisibleBy10LessThanN(100);
    powersOf2LessThanN(100);
    sumOfEvens(2, 100);
    sumOfSquares(1, 100);
    sumOfOdds(1, 99);
    sumOfOddDigits(32677);

    return 0;
}

void squaresLessThanN(int n) {
    int counter = 0;
    cout << "\nSquares Less than " << n << ": ";
    while (counter * counter < n) {
        cout << counter * counter << " ";
        counter++;
    }
}

void numbersDivisibleBy10LessThanN(int n) {
    int counter = 1;
    cout << "\nPositive Numbers Divisible by 10 and Less than " << n << ": ";
    while (counter * 10 < n) {
        cout << counter * 10 << " ";
        counter++;
    }
}

void powersOf2LessThanN(int n) {
    int counter = 0;
    cout << "\nPowers of 2 Less than " << n << ": ";
    while (pow(2, counter) < n) {
        cout << pow(2, counter) << " ";
        counter++;
    }
}

void sumOfEvens(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    cout << "\nSum of Evens Between " << a << " and " << b << ": " << sum;
}

void sumOfSquares(int a, int b) {
    int sum = 0;
    for (int i = a; i * i < b; i++) {
        sum += i;
    }
    cout << "\nSum of Squares Between " << a << " and " << b << ": " << sum;
}

void sumOfOdds(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 1)
            sum += i;
    }
    cout << "\nSum of Odds Between " << a << " and " << b << ": " << sum;
}

void sumOfOddDigits(int n) {
    int sum = 0;
    cout << "\nSum of Odd Digits in " << n << ": ";
    while (n > 0) {
        if ((n % 10) % 2 == 1) {
            int digit = n % 10;
            sum += digit;
        }
        n /= 10;
    }
    cout << sum;
}
