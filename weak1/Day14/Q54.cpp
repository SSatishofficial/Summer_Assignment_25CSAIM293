#include <iostream>
using namespace std;

int frequency(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) count++;
    }
    return count;
}

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to find frequency: ";
    cin >> key;

    cout << "Frequency of " << key << " = " << frequency(arr, n, key) << endl;
    return 0;
}
