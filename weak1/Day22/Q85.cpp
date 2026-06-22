#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int n = strlen(str);
    bool flag = true;

    for (int i = 0; i < n/2; i++) {
        if (str[i] != str[n-1-i]) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "Palindrome string" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}
