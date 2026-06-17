// Question: Store and display employee details using structure.

#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    Employee e = {1, "Rahul", 25000};

    cout << "ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary;

    return 0;
}