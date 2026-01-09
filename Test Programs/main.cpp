#include <iostream>

using namespace std;

int main() {
    int i = 0;
    int j = 0;
    int n = 0;

    while (i < 10) {
        i++;
        n = n + i + j;
        j++;
        cout << i << " " << j << " " << n << endl;
    }

    return 0;
}
