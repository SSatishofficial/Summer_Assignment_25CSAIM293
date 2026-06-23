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
        cout << "Not an anagram" << endl;
        return 0;
    }

    int freq[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    bool flag = true;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "Strings are anagrams" << endl;
    else
        cout << "Not an anagram" << endl;

    return 0;
}
