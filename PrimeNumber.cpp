// Question: Check whether a number is prime or not.

#include <iostream>
using namespace std;

int main() {
    int n;
    bool prime = true;

    cout << "Enter Number: ";
    cin >> n;

    if(n <= 1)
        prime = false;

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            prime = false;
            break;
        }
    }

    if(prime)
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    return 0;
}