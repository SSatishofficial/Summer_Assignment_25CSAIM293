#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    char ans = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            ans = str[i];
            break;
        }
    }

    if (ans != '\0')
        cout << "First non-repeating character: " << ans << endl;
    else
        cout << "No non-repeating character found" << endl;

    return 0;
}
