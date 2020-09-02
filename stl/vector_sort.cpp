#include "iostream"
#include "vector"
#include <algorithm>

using namespace std;

int main() {
    int length, number;
    cin >> length;
    vector<int> numbers;

    for (int i = 0 ; i < length ; i++) {
        cin >> number;
        numbers.push_back(number);
    }

    sort(numbers.begin(), numbers.end());
    for (int i = 0 ; i < length ; i++) {
        cout << numbers[i] << ' ';
    }
}
