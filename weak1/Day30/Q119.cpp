#include <iostream>
#include <cstring>
using namespace std;

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    Employee e[50];
    int n = 0, choice;

    do {
        cout << "\nEmployee Menu:\n";
        cout << "1. Add Employee\n2. Show Employees\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter id, name, salary: ";
            cin >> e[n].id >> ws;
            cin.getline(e[n].name, 50);
            cin >> e[n].salary;
            n++;
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                cout << e[i].id << " " << e[i].name << " " << e[i].salary << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
