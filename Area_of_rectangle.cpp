// Question: Calculate area of rectangle using constructor.

#include <iostream>
using namespace std;

class Rectangle {
    int l, b;

public:
    Rectangle(int x, int y) {
        l = x;
        b = y;
    }

    void area() {
        cout << "Area = " << l * b;
    }
};

int main() {
    Rectangle r(10, 5);
    r.area();

    return 0;
}