#include <iostream>
using namespace std;

int main() {
    int arr[50], n, choice;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    do {
        cout << "\nArray Menu:\n";
        cout << "1. Display\n2. Insert\n3. Delete\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) cout << arr[i] << " ";
                cout << endl;
                break;
            case 2: {
                int pos, val;
                cout << "Enter position and value: ";
                cin >> pos >> val;
                for (int i = n; i > pos; i--) arr[i] = arr[i-1];
                arr[pos] = val;
                n++;
                break;
            }
            case 3: {
                int pos;
                cout << "Enter position to delete: ";
                cin >> pos;
                for (int i = pos; i < n-1; i++) arr[i] = arr[i+1];
                n--;
                break;
            }
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}
