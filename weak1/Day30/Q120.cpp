#include <iostream>
#include <cstring>
using namespace std;

struct Item {
    int id;
    char name[50];
    int qty;
};

void addItem(Item items[], int &n) {
    cout << "Enter id, name, quantity: ";
    cin >> items[n].id >> ws;
    cin.getline(items[n].name, 50);
    cin >> items[n].qty;
    n++;
}

void showItems(Item items[], int n) {
    for (int i = 0; i < n; i++) {
        cout << items[i].id << " " << items[i].name 
             << " Qty: " << items[i].qty << endl;
    }
}

int main() {
    Item items[50];
    int n = 0, choice;

    do {
        cout << "\nMini Project Menu:\n";
        cout << "1. Add Item\n2. Show Items\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addItem(items, n); break;
            case 2: showItems(items, n); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 3);

    return 0;
}
