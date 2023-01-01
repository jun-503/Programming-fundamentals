#include <iostream>
using namespace std;
void details(string name, int marks, float aggregate, char section);
main()
{
    int marks;
    cout << "Enter Your Marks:  ";
    cin >> marks;
    string name;
    cout << " enter your name:  ";
    cin >> name;
    float aggregate;
    cout << "enter your aggregate:  ";
    cin >> aggregate;
    char section;
    cout << "your section is";
    cin >> section;
    details(name, marks, aggregate, section);
}
void details(string name, int marks, float aggregate, char section)
{
    cout << "your name is: " << name << endl;
    cout << "your marks is:   " << marks << endl;
    cout << "your aggregate is:  " << aggregate << endl;
    cout << "your section is :  " << section;
}
