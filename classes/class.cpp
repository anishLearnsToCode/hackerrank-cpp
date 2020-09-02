#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include "string"

using namespace std;

class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    int get_age() {
        return age;
    }

    void set_age(int a) {
        age = a;
    }

    string get_first_name() {
        return first_name;
    }

    void set_first_name(string name) {
        first_name = name;
    }

    string get_last_name() {
        return last_name;
    }

    void set_last_name(string name) {
        last_name = name;
    }

    int get_standard() {
        return standard;
    }

    void set_standard(int s) {
        standard = s;
    }

    string to_string() {
        return ::to_string(age) + "," + first_name + ',' + last_name + "," + ::to_string(standard);
    }
};
