#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle {
public:
    void triangle() {
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle {
public:
    void isosceles() {
        cout << "I am an isosceles triangle\n";
    }

    // Added method to describe the property of an isosceles triangle
    void properties() {
        cout << "In an isosceles triangle two sides are equal\n";
    }
};

int main() {
    Isosceles isc;
    isc.isosceles();    // Print "I am an isosceles triangle"
    isc.properties();   // Print "In an isosceles triangle two sides are equal"
    isc.triangle();     // Print "I am a triangle"
    return 0;
}