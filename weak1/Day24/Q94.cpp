#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    cout << "Compressed string: ";
    for (int i = 0; str[i] != '\0'; ) {
        char ch = str[i];
        int count = 0;
        while (str[i] == ch) {
            count++;
            i++;
        }
        cout << ch << count;
    }
    cout << endl;

    return 0;
}
