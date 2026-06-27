#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    int roll;
    char name[50];
    int age;
};

int main() {
    Student s[50];
    int n = 0, choice;

    do {
        cout << "\nStudent Menu:\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter roll, name, age: ";
            cin >> s[n].roll >> ws;
            cin.getline(s[n].name, 50);
            cin >> s[n].age;
            n++;
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                cout << s[i].roll << " " << s[i].name << " " << s[i].age << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
