#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 10000, amount;

    cout << "===== Banking System =====" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    if(choice == 1) {
        cout << "Current Balance = " << balance;
    }
    else if(choice == 2) {
        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Updated Balance = " << balance;
    }
    else if(choice == 3) {
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if(amount <= balance) {
            balance -= amount;
            cout << "Updated Balance = " << balance;
        }
        else {
            cout << "Insufficient Balance";
        }
    }
    else {
        cout << "Invalid Choice";
    }

    return 0;
}