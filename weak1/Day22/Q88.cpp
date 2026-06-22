#include <iostream>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    cout << "String without spaces: ";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            cout << str[i];
    }
    cout << endl;

    return 0;
}
