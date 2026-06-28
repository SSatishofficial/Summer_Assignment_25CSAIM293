#include <iostream>
#include <cstring>
using namespace std;

struct Contact {
    char name[50];
    char phone[20];
};

int main() {
    Contact c[50];
    int n = 0, choice;

    do {
        cout << "\nContact Menu:\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter name and phone: ";
            cin >> ws;
            cin.getline(c[n].name, 50);
            cin.getline(c[n].phone, 20);
            n++;
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                cout << c[i].name << " - " << c[i].phone << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
