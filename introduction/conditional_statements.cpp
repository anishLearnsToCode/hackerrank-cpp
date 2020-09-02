#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int number;
    cin >> number;
    switch (number) {
        case 1: cout << "one";
            break;
        case 2: cout << "two";
            break;
        case 3: cout << "three";
            break;
        case 4: cout << "four";
            break;
        case 5: cout << "five";
            break;
        case 6: cout << "six";
            break;
        case 7: cout << "seven";
            break;
        case 8: cout << "eight";
            break;
        case 9: cout << "nine";
    }

    if (number > 9) {
        cout << "Greater than 9";
    }
}
