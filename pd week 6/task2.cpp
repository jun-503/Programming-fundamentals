#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    int sub1;
    cout << "Enter 1st subject marks: ";
    cin >> sub1;
    int sub2;
    cout << "Enter 2nd subject marks: ";
    cin >> sub2;
    int sub3;
    cout << "Enter 3rd subject marks: ";
    cin >> sub3;
    int sub4;
    cout << "Enter 4th subject marks: ";
    cin >> sub4;
    int sub5;
    cout << "Enter 5th subject marks: ";
    cin >> sub5;
    int totalMarks;
    totalMarks = sub1 + sub2 + sub3 + sub4 + sub5;
    cout << totalMarks << endl;
    float percentage = (totalMarks / 500.00) * 100.00;
    cout << percentage << endl;
    if (percentage >= 90 && percentage <= 100)
        cout << "your grade is A+";
    if (percentage >= 80 && percentage <= 90)
        cout << "your grade is A";
    if (percentage >= 70 && percentage <= 80)
        cout << "your grade is B+";
    if (percentage >= 60 && percentage <= 70)
        cout << "your grade is B";
    if (percentage >= 50 && percentage <= 60)
        cout << "your grade is C";
    if (percentage >= 40 && percentage <= 500)
        cout << "your grade is D";
    if (percentage < 40)
        cout << "your grade is F";
}