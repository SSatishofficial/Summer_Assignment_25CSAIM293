#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int index = 0; // position for non-zero
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    moveZeroes(arr, n);

    cout << "Array after moving zeroes: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
