// Question: Demonstrate Single Inheritance.

#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "Parent Class";
    }
};

class Child : public Parent {
};

int main() {
    Child c;
    c.display();
    return 0;
}