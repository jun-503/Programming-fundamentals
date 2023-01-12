#include <iostream>
using namespace std;
string evenOrodd(int number);
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << evenOrodd(number);
}
string evenOrodd(int number)
{
    int mod;
    string result;
    mod = number % 2;
    if (mod == 0)
    {
        result = "even";
    }
    else
    {
        result = "odd";
    }
    return result;
}
