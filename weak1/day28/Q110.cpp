#include <iostream>
using namespace std;

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    Account a[50];
    int n = 0, choice;

    do {
        cout << "\nBank Menu:\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter account no, name, balance: ";
            cin >> a[n].accNo >> ws;
            cin.getline(a[n].name, 50);
            cin >> a[n].balance;
            n++;
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                cout << a[i].accNo << " " << a[i].name << " " << a[i].balance << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
