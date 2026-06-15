#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // return index if found
    }
    return -1; // not found
}

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int pos = linearSearch(arr, n, key);
    if (pos != -1)
        cout << "Element found at index " << pos << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}
