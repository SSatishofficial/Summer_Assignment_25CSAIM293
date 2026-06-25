#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    char words[50][50];
    int n = 0, j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            words[n][j++] = str[i];
        } else {
            words[n][j] = '\0';
            n++;
            j = 0;
        }
    }
    words[n][j] = '\0';
    n++;

    // sort by length
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                char temp[50];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    cout << "Words sorted by length:\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}
