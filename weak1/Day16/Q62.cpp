#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_map<int,int> freq;
    for (int i = 0; i < n; i++) freq[arr[i]]++;

    int maxFreq = 0, element = arr[0];
    for (auto p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            element = p.first;
        }
    }

    cout << "Element with maximum frequency: " << element << " (appears " << maxFreq << " times)" << endl;
    return 0;
}
