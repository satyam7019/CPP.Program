// Question: Demonstrate a parameterized constructor.

#include <iostream>
using namespace std;

class Student {
public:
    Student(int r) {
        cout << "Roll No = " << r;
    }
};

int main() {
    Student s(101);
    return 0;
}