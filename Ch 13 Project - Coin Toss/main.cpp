/* main.cpp [Ch 13 Project - Coin Toss]
 *
 * Christian Baduria, C++ 2018
 * Ch 13 Project (Coin Toss), 5/31/18
 *
 * This program simulates coin tosses by creating instances
 * of the Coin class and calling a member function that randomizes
 * the side that faces up. This includes a simple simulation of a
 * series of coin tosses and a game called "Tossing Coin for a
 * Dollar" that involves tossing 3 instances of Coin, each given
 * different values that'll be added to a balance.
 */

#include <iostream>
#include <iomanip>
#include "Coin.h"

using namespace std;

//{ Function Prototypes
void coinTossSimulator();

void tossingCoinForADollar();
//}

// Central function that initiates coin toss simulation and "Tossing Coin for a Dollar"
int main() {
    cout << "Ch 13 Project - Coin Toss" << endl;
    coinTossSimulator();
    tossingCoinForADollar();
    return 0;
}

// Simulates 20 coin tosses and keeps head and tail count
void coinTossSimulator() {
    // 12) Coin Toss Simulator
    const int NUMBER_OF_TOSSES = 20;
    int headCount = 0;
    int tailCount = 0;
    Coin coin;

    cout << "\n12) Coin Toss Simulator\n---" << endl;
    cout << "\nStarting Side Facing Up: " << coin.getSideUp() << endl;

    // Iterates through NUMBER_OF_TOSSES flips and displays side facing up
    for (int i = 1; i <= NUMBER_OF_TOSSES; i++) {
        coin.toss();
        cout << "Flip " << i << ": " << coin.getSideUp() << endl;
        if (coin.getSideUp() == "heads")
            headCount++;
        else
            tailCount++;
    }

    // Displays counts of heads and tails
    cout << "\n---Heads and Tails Stats---" << endl;
    cout << "Number of Heads: " << headCount << endl;
    cout << "Number of Tails: " << tailCount << endl;
}

// Plays "Tossing Coin For A Dollar" using 3 instances of Coin with given values
void tossingCoinForADollar() {
    // 13) Tossing Coin for a Dollar
    Coin quarter(0.25);
    Coin dime(0.1);
    Coin nickel(0.05);
    int flipCounter = 0;

    cout << setprecision(2) << fixed;
    cout << "\n13) Tossing Coin for a Dollar\n---" << endl;
    cout << "\nWelcome to \"Tossing Coin for a Dollar\"! You begin with a starting balance of $0.00 and a"
         << "\nquarter, dime, and nickel will be tossed every time the Enter key is pressed. If any of the"
         << "\ncoins land on heads, the value of the coin is added to your balance. The game is over when your"
         << "\nbalance reaches $1.00. If your balance is exactly $1, you win the game. If your balance exceeds"
         << "\n$1, you lose the game. Press the Enter key to begin." << endl;

    // Iterates through each flip and displays money earned and current balance
    do {
        cin.ignore(INT_MAX, '\n');
        flipCounter++;
        quarter.toss();
        dime.toss();
        nickel.toss();

        cout << "\nFlip " << flipCounter << ":" << endl;
        cout << "\tQuarter: " << quarter.getSideUp() << "\t" << "(+ $";
        (quarter.getSideUp() == "heads") ? cout << quarter.getValue() : cout << "0.00";
        cout << ")" << endl;

        cout << "\tDime: " << dime.getSideUp() << "\t" << "(+ $";
        (dime.getSideUp() == "heads") ? cout << dime.getValue() : cout << "0.00";
        cout << ")" << endl;

        cout << "\tNickel: " << nickel.getSideUp() << "\t" << "(+ $";
        (nickel.getSideUp() == "heads") ? cout << nickel.getValue() : cout << "0.00";
        cout << ")" << endl;

        cout << "\t---\n\tCurrent Balance: " << setw(3) << "$" << Coin::getBalance() << endl;
    } while (Coin::getBalance() < 1);

    // Determines win/lose and displays message
    if (Coin::getBalance() == 1)
        cout << "\nCongratulations! Your final balance is exactly $1.00!" << endl;
    else
        cout << "\nYour final balance of $" << Coin::getBalance() << " exceeds $1.00. You lose!" << endl;
}
