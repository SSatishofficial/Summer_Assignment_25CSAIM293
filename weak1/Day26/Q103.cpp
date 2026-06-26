#include <iostream>
using namespace std;

int main() {
    int balance = 1000; // starting balance
    int choice, amount;

    do {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Balance = " << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Deposited successfully.\n";
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawn successfully.\n";
                } else {
                    cout << "Insufficient balance.\n";
                }
                break;
            case 4:
                cout << "Thank you for using ATM.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}
