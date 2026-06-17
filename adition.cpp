// Question: Perform addition using constructor.

#include <iostream>
using namespace std;

class Sum {
public:
    Sum(int a, int b) {
        cout << "Sum = " << a + b;
    }
};

int main() {
    Sum s(10, 20);

    return 0;
}