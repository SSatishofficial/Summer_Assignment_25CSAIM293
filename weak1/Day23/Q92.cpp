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

    int maxCount = 0;
    char maxChar = '\0';
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }

    if (maxChar != '\0')
        cout << "Maximum occurring character: " << maxChar 
             << " (appears " << maxCount << " times)" << endl;
    else
        cout << "No characters found" << endl;

    return 0;
}
