#include <iostream>
using namespace std;
string checkTitle(int age, char gender);
int main()
{
    int age;
    cout << "enter your age:  ";
    cin >> age;
    char gender;
    cout << "enter your gender:  ";
    cin >> gender;
    cout << checkTitle(age, gender);
}
string checkTitle(int age, char gender)
{
    string result;
    if (gender == 'M' && age >= 16)
    {
        result = "Mr.";
    }
    else if (gender == 'M' && age < 16)
    {
        result = "Master";
    }
    else if (gender == 'f' && age >= 16)
    {
        result = "Ms.";
    }
    else if (gender == 'F' && age < 16)
    {
        result = "Miss";
    }
    else
        result = "nothing";
    return result;
}