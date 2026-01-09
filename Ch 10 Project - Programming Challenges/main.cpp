/* main.cpp [Ch 10 Project - Programming Challenges]
 *
 * Christian Baduria, C++ 2018
 * Ch 10 Project (Programming Challenges), 5/9/18
 *
 * This program allows the user to manipulate strings in
 * various ways. This includes reversing strings, capitalizing
 * sentences, and replacing a string with another string in a
 * larger string.
 */

#include <iostream>
#include <cctype>
#include <string>
#include <cstring>

using namespace std;

void reverseString(char *);

void capitalizeString(char *, int);

char *replaceSubstring(char [], char [], char [], int);

// Allocates memory and prompts user for C-strings
int main() {
    const int STRING_SIZE = 250;
    char *stringPtr = new char[STRING_SIZE];

    cout << "Ch 10 Project - Programming Challenges" << endl;

    // 2) Backward String
    cout << "\n2) Backward String\n---" << endl;
    cout << "Enter in a String: ";
    cin.getline(stringPtr, STRING_SIZE);
    reverseString(stringPtr);

    // 5) Sentence Capitalizer
    cout << "\n5) Sentence Capitalizer\n---" << endl;
    cout << "Enter in a Sentence: ";
    cin.getline(stringPtr, STRING_SIZE);
    capitalizeString(stringPtr, strlen(stringPtr));

    // 10) replaceSubstring Function
    char string1[STRING_SIZE];
    char string2[STRING_SIZE];
    char string3[STRING_SIZE];
    cout << "\n10) replaceSubstring Function\n---" << endl;
    cout << "Enter in a String: ";
    cin.getline(string1, STRING_SIZE);
    cout << "Enter in a Word you want to Replace: ";
    cin.getline(string2, STRING_SIZE);
    cout << "Enter in a Substitute Word: ";
    cin.getline(string3, STRING_SIZE);

    strcpy(string1, replaceSubstring(string1, string2, string3, STRING_SIZE));

    cout << "\nNew String: " << string1 << endl;

    return 0;
}

// Reverses C-string
void reverseString(char *stringPtr) {
    // 2) Backward String
    char stringCopy[strlen(stringPtr)];
    strcpy(stringCopy, stringPtr);
    for (int i = 0; i < strlen(stringPtr); i++) {
        stringPtr[i] = stringCopy[(strlen(stringPtr) - 1) - i];
    }
    cout << "Reversed String: " << stringPtr << endl;

    stringPtr = nullptr;
}

// Capitalizes first letter of every sentence
void capitalizeString(char *stringPtr, int length) {
    // 5) Sentence Capitalizer
    stringPtr[0] = toupper(stringPtr[0]);
    for (int i = 0; i < length; i++) {
        if (ispunct(stringPtr[i])) {
            while (!isalpha(stringPtr[i]) && i < length)
                i++;
            stringPtr[i] = toupper(stringPtr[i]);
        }
    }
    cout << "Capitalized Sentence: " << stringPtr << endl;

    stringPtr = nullptr;
}

// Replaces any occurrence of string2 with string3 in string1
char *replaceSubstring(char string1[], char string2[], char string3[], int STRING_SIZE) {
    // 10) replaceSubstring Function
    char *occurencePtr = strstr(string1, string2);
    char *newStringPtr = new char[STRING_SIZE];
    strcpy(newStringPtr, string1);

    // Continuously replaces every first occurrence of string2 and reiterates until no more occurrence
    while (occurencePtr != nullptr) {
        int index = 0;

        // Copies string until first occurrence
        while (string1 + index != occurencePtr) {
            newStringPtr[index] = string1[index];
            index++;
        }

        // Replaces string2 with string3 by appending string3
        for (int i = 0; i < strlen(string3); i++) {
            newStringPtr[i + index] = string3[i];
        }

        // Appends the rest of string1 after string2
        for (int i = index; i < strlen(string1) + (strlen(string3) - strlen(string2)); i++) {
            newStringPtr[i + strlen(string3)] = string1[i + strlen(string2)];
        }

        // Copies to newStringPtr to string1 and finds next occurrence
        strcpy(string1, newStringPtr);
        occurencePtr = strstr(string1, string2);
    }

    newStringPtr[strlen(newStringPtr)] = '\0';

    return newStringPtr;
}
