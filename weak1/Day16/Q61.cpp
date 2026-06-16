#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2; // sum of 1..n+1
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return total - sum;
}

int main() {
    int n;
    cout << "Enter size of array (n): ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements (1 to n+1 with one missing): ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Missing number: " << findMissing(arr, n) << endl;
    return 0;
}
