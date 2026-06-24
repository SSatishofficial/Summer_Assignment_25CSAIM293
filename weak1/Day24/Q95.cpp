#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int maxLen = 0, currLen = 0;
    char longest[200], word[200];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            word[j++] = str[i];
            currLen++;
        } else {
            word[j] = '\0';
            if (currLen > maxLen) {
                maxLen = currLen;
                strcpy(longest, word);
            }
            j = 0;
            currLen = 0;
        }
    }
    word[j] = '\0';
    if (currLen > maxLen) {
        maxLen = currLen;
        strcpy(longest, word);
    }

    cout << "Longest word: " << longest << endl;
    return 0;
}
