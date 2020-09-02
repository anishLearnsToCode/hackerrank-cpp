#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int length;
    cin >> length;
    int array[length];
    for (int index = 0 ; index < length ; index++) {
        cin >> array[index];
    }
    for (int index = length - 1 ; index >= 0 ; index--) {
        cout << array[index] << " ";
    }
}
