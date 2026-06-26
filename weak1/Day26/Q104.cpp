#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char ans;

    cout << "Q1: Capital of India?\n";
    cout << "a) Mumbai\nb) Delhi\nc) Kolkata\n";
    cin >> ans;
    if (ans == 'b' || ans == 'B') score++;

    cout << "Q2: 2 + 2 = ?\n";
    cout << "a) 3\nb) 4\nc) 5\n";
    cin >> ans;
    if (ans == 'b' || ans == 'B') score++;

    cout << "Q3: Largest planet?\n";
    cout << "a) Earth\nb) Jupiter\nc) Mars\n";
    cin >> ans;
    if (ans == 'b' || ans == 'B') score++;

    cout << "Your score = " << score << "/3" << endl;
    return 0;
}
