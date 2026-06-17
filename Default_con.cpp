// Question: Demonstrate a default constructor.

#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Default Constructor Called";
    }
};

int main() {
    Student s;
    return 0;
}