#include <cmath>
#include <vector>
#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    int q, type; cin >> q;
    map<string,int> dict; string name;
    for (int i(0), mark; i<q; ++i)
    {
        cin >> type >> name;
        if (type == 1){
            cin >> mark;
            dict[name] += mark;
        }
        else if (type == 2)
            dict.erase(name);
        else
            cout << dict[name] << "\n";
    }
    return 0;
}

