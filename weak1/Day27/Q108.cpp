#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[50];
    int marks[3];
};

int main() {
    Student s;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter name: ";
    cin.ignore();
    cin.getline(s.name, 50);
    cout << "Enter marks in 3 subjects: ";
    for (int i = 0; i < 3; i++) cin >> s.marks[i];

    int total = 0;
    for (int i = 0; i < 3; i++) total += s.marks[i];
    float percent = total / 3.0;

    cout << "\n--- Marksheet ---\n";
    cout << "Roll: " << s.roll << "\nName: " << s.name << endl;
    cout << "Total: " << total << "\nPercentage: " << percent << "%" << endl;

    if (percent >= 60) cout << "Result: First Division\n";
    else if (percent >= 45) cout << "Result: Second Division\n";
    else if (percent >= 33) cout << "Result: Third Division\n";
    else cout << "Result: Fail\n";

    return 0;
}
