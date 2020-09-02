#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int integer;
    long bigInteger;
    char character;
    float decimal;
    double precision;

    cin >> integer >> bigInteger >> character >> decimal >>precision ;
    cout << integer << "\n" << bigInteger << "\n" << character << "\n";
    cout<<fixed<<setprecision(3)<< decimal <<"\n";
    cout<<fixed<<setprecision(9)<< precision <<"\n";
    return 0;
}
