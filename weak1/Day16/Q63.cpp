#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> target;

    unordered_set<int> s;
    bool found = false;
    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if (s.find(complement) != s.end()) {
            cout << "Pair found: (" << arr[i] << ", " << complement << ")" << endl;
            found = true;
            break;
        }
        s.insert(arr[i]);
    }
    if (!found) cout << "No pair with given sum." << endl;
    return 0;
}
