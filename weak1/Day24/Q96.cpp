#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    bool seen[256] = {false};
    cout << "String without duplicates: ";
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            cout << str[i];
            seen[ch] = true;
        }
    }
    cout << endl;

    return 0;
}
