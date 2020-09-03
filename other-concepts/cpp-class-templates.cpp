#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

/*Write the class AddElements here*/

template <class T> class AddElements {
public:
    T element;
    AddElements(T i) {element = i;}
    T add(T i) {return element+i;}
private:

};

// the actual solution
template <> class AddElements <string> {
public:
    string element;
    AddElements(string i) {element = i;}
    string concatenate(string element2) {return element+element2;}
private:

};

// boiler plate required because the locked stub fof code by hackerrank is slow
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';


int main () {
    int n,i;
    cin >> n;
    for(i=0;i<n;i++) {
        string type;
        cin >> type;
        if(type=="float") {
            double element1,element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat (element1);
            cout << myfloat.add(element2) << endl;
        }
        else if(type == "int") {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint (element1);
            cout << myint.add(element2) << endl;
        }
        else if(type == "string") {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring (element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
