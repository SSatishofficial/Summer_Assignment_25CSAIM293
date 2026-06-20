#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int A[n][n];
    
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    bool symmetric = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (A[i][j] != A[j][i])
                symmetric = false;

    if (symmetric)
        cout << "Matrix is symmetric." << endl;
    else
        cout << "Matrix is not symmetric." << endl;

    return 0;
}
