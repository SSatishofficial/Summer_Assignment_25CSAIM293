#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int A[n][n];
    cout << "Enter elements of Matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < n; i++) {
        primarySum += A[i][i];             // Primary diagonal
        secondarySum += A[i][n - i - 1];   // Secondary diagonal
    }

    cout << "Primary Diagonal Sum = " << primarySum << endl;
    cout << "Secondary Diagonal Sum = " << secondarySum << endl;
    return 0;
}
