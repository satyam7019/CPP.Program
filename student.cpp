// Question: Store and display student details using structure.

#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s = {101, "Deep", 89.5};

    cout << "Roll No: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks;

    return 0;
}