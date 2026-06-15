#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n) {
    bool found = false;
    cout << "Duplicate elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = true;
                break; // avoid printing same duplicate multiple times
            }
        }
    }
    if (!found) cout << "None";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    findDuplicates(arr, n);
    return 0;
}
