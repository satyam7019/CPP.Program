// Question: Reverse the digits of a number.

#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;

    cout << "Enter Number: ";
    cin >> n;

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    cout << "Reversed Number = " << rev;

    return 0;
}