#include <iostream>
#include <cctype>
#include <string>
#include <cstring>

using namespace std;

//{ Function Prototypes
void passwordVerifier();

void verifyPassword(char [], bool &, bool &, bool &);
//}

int main() {
    passwordVerifier();

    return 0;
}

void passwordVerifier() {
    // 12) Password Verifier
    const int CHAR_REQUIRED = 8;
    const int PASSWORD_SIZE = 100;

    char password[PASSWORD_SIZE];
    int passwordSize;
    bool hasLowercase;
    bool hasUppercase;
    bool hasDigit;

    cout << "12) Password Verifier\n---" << endl;
    cout << "Your password must meet the following requirements:" << endl;
    cout << "\t1) At least " << CHAR_REQUIRED << " characters in length" << endl;
    cout << "\t2) At least 1 uppercase and 1 lowercase letter" << endl;
    cout << "\t3) At least 1 Digit" << endl;
    cout << "\nEnter your Password: ";
    cin.getline(password, PASSWORD_SIZE);

    verifyPassword(password, hasLowercase, hasUppercase, hasDigit);

    while (!(strlen(password) > CHAR_REQUIRED && hasLowercase && hasUppercase && hasDigit)) {
        cout << "Your password doesn't meet the criteria: " << endl;
        if (strlen(password) < CHAR_REQUIRED)
            cout << "\tPassword only consists of " << strlen(password) << " characters." << endl;
        if (!hasLowercase)
            cout << "\tPassword doesn't include a lowercase letter." << endl;
        if (!hasUppercase)
            cout << "\tPassword doesn't include an uppercase letter." << endl;
        if (!hasDigit)
            cout << "\tPassword doesn't include a digit." << endl;
        cout << "\nEnter your Password: ";
        cin >> password;
        verifyPassword(password, hasLowercase, hasUppercase, hasDigit);
    }
}

void verifyPassword(char password[], bool &hasLowercase, bool &hasUppercase, bool &hasDigit) {
    hasLowercase = false;
    hasUppercase = false;
    hasDigit = false;
    for (int i = 0; i < strlen(password); i++) {
        if (islower(password[i]))
            hasLowercase = true;
        if (isupper(password[i]))
            hasUppercase = true;
        if (isdigit(password[i]))
            hasDigit = true;
    }
}
