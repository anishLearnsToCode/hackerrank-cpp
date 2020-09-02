#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    cout << a.size() << " " << b.size();
    cout << a + b;
    char c = a[0];
    a[0] = b[0];
    b[0] = c;
    cout << a << " " << b;
}
