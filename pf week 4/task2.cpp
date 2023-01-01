#include <iostream>
using namespace std;
void details(string name, int marks);
main()
{
    int marks;
    cout << "Enter Your Marks:  ";
    cin >> marks;
    string name;
    cout << " enter your name:  ";
    cin >> name;
    details("ali", 50);
}
void details(string name, int marks)
{
    cout << "your name is" << name << endl;
    cout << "your marks is:   " << marks;
}