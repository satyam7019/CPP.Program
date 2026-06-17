// Question: Store details of 3 students using array of structures.

#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
};

int main() {
    Student s[3];

    for(int i=0;i<3;i++) {
        cin >> s[i].roll >> s[i].name;
    }

    for(int i=0;i<3;i++) {
        cout << s[i].roll << " " << s[i].name << endl;
    }

    return 0;
}