#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    if (strlen(str1) != strlen(str2)) {
        cout << "Not a rotation" << endl;
        return 0;
    }

    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2))
        cout << "Strings are rotations" << endl;
    else
        cout << "Not a rotation" << endl;

    return 0;
}
