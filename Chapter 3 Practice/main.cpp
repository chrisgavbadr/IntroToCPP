#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

//{ Function Prototypes
void boxOffice();

void mathTutor();

void pizzaPie();

void wordGame();
//}

int main() {
    boxOffice();
    mathTutor();
    pizzaPie();
    wordGame();

    return 0;
}

void boxOffice() {
    // 7) Box Office
    const double ADULT_TICKET_PRICE = 10.00;
    const double CHILD_TICKET_PRICE = 6.00;
    const double THEATER_PC_EARNINGS = 0.2;

    string movie;
    int adultTicketsSold, childTicketsSold;
    double grossBoxProfit, netBoxProfit, distributorPayment;

    cout << "7) Box Office\n---" << endl;
    cout << "What movie will you be watching? ";
    getline(cin, movie);
    cout << "How many adult tickets were sold? ";
    cin >> adultTicketsSold;
    cout << "How many child tickets were sold? ";
    cin >> childTicketsSold;

    grossBoxProfit = (adultTicketsSold * ADULT_TICKET_PRICE) + (childTicketsSold * CHILD_TICKET_PRICE);
    netBoxProfit = grossBoxProfit * THEATER_PC_EARNINGS;
    distributorPayment = grossBoxProfit - netBoxProfit;

    cout << setprecision(2) << fixed;
    cout << "\nMovie Name:" << setw(40) << movie << endl;
    cout << "Adult Tickets Sold:" << setw(19) << adultTicketsSold << endl;
    cout << "Child Tickets Sold:" << setw(19) << childTicketsSold << endl;
    cout << "Gross Box Office Profit:" << setw(8) << "$" << setw(9) << grossBoxProfit << endl;
    cout << "Net Box Office Profit:" << setw(10) << "$" << setw(9) << netBoxProfit << endl;
    cout << "Amount Paid to Distributor:" << setw(5) << "$" << setw(9) << distributorPayment << endl;
}

void mathTutor() {
    // 17) Math Tutor
    const int MIN_VALUE = -10;
    const int MAX_VALUE = 10;
    char ch;
    int addend1 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    int addend2 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    int sum = addend1 + addend2;

    cout << "\n17) Math Tutor\n---" << endl;
    cout << setw(7) << addend1 << endl;
    cout << "+" << setw(6) << addend2 << endl;
    cout << "-------";
    cin.ignore();
    cin.get(ch);
    cout << setw(7) << sum << endl;
}

void pizzaPie() {
    // 20) Pizza Pie
    const double PI = 3.14159;
    const double SLICE_AREA = 14.125;
    double pizzaDiameter, pizzaArea, slicesTaken;

    cout << "\n20) Pizza Pie\n---" << endl;
    cout << "What is the diameter of the pizza (inches)? ";
    cin >> pizzaDiameter;

    pizzaArea = PI * (pizzaDiameter / 2) * (pizzaDiameter / 2);
    slicesTaken = pizzaArea / SLICE_AREA;

    cout << setprecision(1) << fixed;
    cout << "Number of slices per pizza: " << slicesTaken << endl;

    // 21) How Many Pizzas? (Continuation of Pizza Pie)
    const int SLICES_PER_PERSON = 4;
    int attendence;

    cout << "\n21) How Many Pizzas? (Continuation of Pizza Pie)\n---" << endl;
    cout << "How many people will be attending your party? ";
    cin >> attendence;

    int pizzasToPurchase = (attendence * SLICES_PER_PERSON * SLICE_AREA) / pizzaArea;

    cout << "You will need to purchase " << pizzasToPurchase << " pizzas to satisfy the people in your party." << endl;
}

void wordGame() {
    // 24) Word Game
    int age;
    string name, city, college, profession, animal, petName;

    cout << "\n24) Word Game\n---" << endl;
    cout << "Enter in a... " << endl;
    cin.ignore();
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cout << "City: ";
    cin.ignore();
    getline(cin, city);
    cout << "College: ";
    getline(cin, college);
    cout << "Profession: ";
    getline(cin, profession);
    cout << "Animal: ";
    getline(cin, animal);
    cout << "Pet Name: ";
    getline(cin, petName);

    cout << "\nThere once was a person named " << name << " who lived in " << city << ". At the age of " << age << ","
         << endl;
    cout << name << " went to college at " << college << ", " << name << " graduated and went to work as a" << endl;
    cout << profession << ". Then, " << name << " adopted a(n) " << animal << " named " << petName << ". They both"
         << endl;
    cout << "lived happily ever after.";
}
