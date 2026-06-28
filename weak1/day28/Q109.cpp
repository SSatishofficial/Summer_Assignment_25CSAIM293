#include <iostream>
#include <cstring>
using namespace std;

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    Book b[50];
    int n = 0, choice;

    do {
        cout << "\nLibrary Menu:\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter id, title, author: ";
            cin >> b[n].id >> ws;
            cin.getline(b[n].title, 50);
            cin.getline(b[n].author, 50);
            n++;
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                cout << b[i].id << " " << b[i].title << " " << b[i].author << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
