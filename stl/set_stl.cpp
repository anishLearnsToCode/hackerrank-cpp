#include "iostream"
#include "set"

using namespace std;

int main() {
    set<int> numbers;
    int queries, instruction, element;
    cin >> queries;

    while (queries--) {
        cin >> instruction >> element;
        if (instruction == 1) {
            numbers.insert(element);
        } else if (instruction == 2) {
            numbers.erase(element);
        } else {
            auto itr = numbers.find(element);
            if (itr == numbers.end()) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }
}
