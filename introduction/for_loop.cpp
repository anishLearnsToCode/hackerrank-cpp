#include <iostream>
#include <iomanip>

using namespace std;

string numToString(int number) {
    switch (number) {
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
    }

    if (number > 9) {
        return number % 2 == 0 ? "even" : "odd";
    }

    return "";
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    for (int number = a ; number <= b ; number++) {
        cout << numToString(number) << endl;
    }
}
