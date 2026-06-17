// Question: Demonstrate Multilevel Inheritance.

#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public B {
public:
    void showC() {
        cout << "Class C";
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();

    return 0;
}