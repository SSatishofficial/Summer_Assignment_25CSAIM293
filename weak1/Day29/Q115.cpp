#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int choice;
    do {
        cout << "\nString Menu:\n";
        cout << "1. Length\n2. Reverse\n3. Uppercase\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Length = " << strlen(str) << endl;
                break;
            case 2: {
                cout << "Reversed: ";
                for (int i = strlen(str)-1; i >= 0; i--) cout << str[i];
                cout << endl;
                break;
            }
            case 3:
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                cout << "Uppercase: " << str << endl;
                break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}
