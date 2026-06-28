#include <iostream>
using namespace std;

struct Ticket {
    int id;
    char name[50];
    char destination[50];
};

int main() {
    Ticket t[50];
    int n = 0, choice;

    do {
        cout << "\nTicket Menu:\n";
        cout << "1. Book Ticket\n";
        cout << "2. Show Tickets\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter ticket id, name, destination: ";
            cin >> t[n].id >> ws;
            cin.getline(t[n].name, 50);
            cin.getline(t[n].destination, 50);
            n++;
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                cout << t[i].id << " " << t[i].name << " " << t[i].destination << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
