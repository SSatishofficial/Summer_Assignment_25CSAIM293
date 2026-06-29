#include <iostream>
#include <cstring>
using namespace std;

struct Item {
    int id;
    char name[50];
    int qty;
};

int main() {
    Item items[50];
    int n = 0, choice;

    do {
        cout << "\nInventory Menu:\n";
        cout << "1. Add Item\n2. Display Items\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter id, name, quantity: ";
            cin >> items[n].id >> ws;
            cin.getline(items[n].name, 50);
            cin >> items[n].qty;
            n++;
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                cout << items[i].id << " " << items[i].name 
                     << " Qty: " << items[i].qty << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
