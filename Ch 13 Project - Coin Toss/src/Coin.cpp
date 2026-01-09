#include "Coin.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Initializes m_value to 0 and randomizes starting side
Coin::Coin() {
    m_value = 0;
    srand(time(0));
    m_sideUp = (rand() % 2 == 0) ? "heads" : "tails";
}

// Initializes m_value to a given value and randomizes starting side
Coin::Coin(double val) {
    m_value = val;
    srand(time(0));
    m_sideUp = (rand() % 2 == 0) ? "heads" : "tails";
}

// Flips coin by randomizing side facing up
void Coin::toss() {
    // If heads, coin value is added to total balance
    if (rand() % 2 == 0) {
        m_sideUp = "heads";
        m_balance += m_value;
    } else
        m_sideUp = "tails";
}

// Returns total balance
double Coin::getBalance() { return m_balance; }

// Returns value of coin
double Coin::getValue() const { return m_value; }

// Returns current side facing up
string Coin::getSideUp() const { return m_sideUp; }
