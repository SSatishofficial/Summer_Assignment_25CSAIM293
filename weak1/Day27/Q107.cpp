#include <iostream>
using namespace std;

int main() {
    int empId[50];
    float salary[50];
    int n = 0, choice;

    do {
        cout << "\nSalary Menu:\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display Salaries\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter employee id and salary: ";
            cin >> empId[n] >> salary[n];
            n++;
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                cout << "ID: " << empId[i] << " Salary: " << salary[i] << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
