#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    bool seen[256] = {false};
    for (int i = 0; str1[i] != '\0'; i++) {
        seen[(unsigned char)str1[i]] = true;
    }

    cout << "Common characters: ";
    bool found = false;
    for (int i = 0; str2[i] != '\0'; i++) {
        if (seen[(unsigned char)str2[i]]) {
            cout << str2[i] << " ";
            seen[(unsigned char)str2[i]] = false; // avoid duplicates
            found = true;
        }
    }
    if (!found) cout << "None";
    cout << endl;

    return 0;
}
