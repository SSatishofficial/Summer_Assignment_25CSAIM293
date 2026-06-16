#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_set<int> unique;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        if (unique.find(arr[i]) == unique.end()) {
            cout << arr[i] << " ";
            unique.insert(arr[i]);
        }
    }
    cout << endl;
    return 0;
}
