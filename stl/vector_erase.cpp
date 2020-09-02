#include "iostream"
#include "vector"

using namespace std;

int main() {
    int length, number, removal_position, a, b;
    cin >> length;
    vector<int> numbers;

    for (int i = 0 ; i < length ; i++) {
        cin >> number;
        numbers.push_back(number);
    }

    cin >> removal_position;
    numbers.erase(numbers.begin() + removal_position - 1);

    cin >> a >> b;
    numbers.erase(numbers.begin() + a -1, numbers.begin() + b - 1);

    cout << numbers.size() << endl;
    for (int i = 0 ; i < numbers.size() ; i++) {
        cout << numbers[i] << ' ';
    }
}
