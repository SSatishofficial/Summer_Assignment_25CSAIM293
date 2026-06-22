#include <iostream>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int words = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && !inWord) {
            inWord = true;
            words++;
        }
        else if (str[i] == ' ') {
            inWord = false;
        }
    }

    cout << "Total words = " << words << endl;
    return 0;
}
