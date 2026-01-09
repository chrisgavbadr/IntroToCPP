#include "RightTriangle.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

RightTriangle::RightTriangle() {
    m_leg1 = 0;
    m_leg2 = 0;
    m_hypotenuse = 0;
}

void RightTriangle::setLeg1(double a) {
    while (a < 0) {
        cout << "Invalid Length. Try again: ";
        cin >> a;
    }
    m_leg1 = a;
}

void RightTriangle::setLeg2(double b) {
    while (b < 0) {
        cout << "Invalid Length. Try again: ";
        cin >> b;
    }
    m_leg2 = b;
}

void RightTriangle::setHypotenuse(double c) {
    while (c < 0) {
        cout << "Invalid Hypotenuse. Try again: ";
        cin >> c;
    }
    m_hypotenuse = c;
}

bool RightTriangle::verifyRightTriangle(double a, double b, double c) {
    return (a + b > c && abs(pow(a, 2) + pow(b, 2) - pow(c, 2)) <= 0.5);
}
