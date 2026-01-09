#include <iostream>
#include <iomanip>
#include <cmath>
#include "RightTriangle.h"

using namespace std;

int main() {
    // Right Triangle Class
    RightTriangle triangle;
    double leg1;
    double leg2;
    double hypotenuse;

    cout << "Right Triangle Class\n---" << endl;
    cout << "\nEnter in the length of the hypotenuse and its two legs of a Right Triangle." << endl;
    cout << "\nLength of First Leg: ";
    cin >> leg1;
    cout << "Length of Second Leg: ";
    cin >> leg2;
    cout << "Length of Hypotenuse: ";
    cin >> hypotenuse;

    triangle.setLeg1(leg1);
    triangle.setLeg2(leg2);
    triangle.setHypotenuse(hypotenuse);

    if (!triangle.verifyRightTriangle(leg1, leg2, hypotenuse)) {
        cout << setprecision(4) << fixed;
        if (hypotenuse <= leg1 || hypotenuse <= leg2) {
            triangle.setHypotenuse(sqrt(pow(leg1, 2) + pow(leg2, 2)));
            cout << "\n*The Hypotenuse was readjusted to " << triangle.getHypotenuse();
        } else if (leg2 <= leg1) {
            triangle.setLeg1(sqrt(pow(hypotenuse, 2) - pow(leg2, 2)));
            cout << "\n*Leg 1 was readjusted to " << triangle.getLeg1();
        } else {
            triangle.setLeg2(sqrt(pow(hypotenuse, 2) - pow(leg1, 2)));
            cout << "\n*Leg 2 was readjusted to " << triangle.getLeg2();
        }
        cout << " to compensate for the right triangle." << endl;
    }

    cout << "\n---Information about your Right Triangle---" << endl;
    cout << setprecision(2) << fixed;
    cout << "Area: " << setw(13) << triangle.getArea() << endl;
    cout << "Perimeter: " << setw(8) << triangle.getPerimeter() << endl;

    return 0;
}
