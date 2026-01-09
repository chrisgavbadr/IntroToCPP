#include <iostream>

using namespace std;

#ifndef COIN_H
#define COIN_H

// Static balance of coin shared by all instances
static double m_balance = 0;

// Defines Coin class
class Coin {
    // Initializes private member variables
private:
    double m_value;
    string m_sideUp;

    // Initializes constructors and public member functions
public:
    Coin();

    Coin(double val);

    static double getBalance();

    double getValue() const;

    string getSideUp() const;

    void toss();
};

#endif // COIN_H
