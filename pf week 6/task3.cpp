#include <iostream>
using namespace std;
float discount(string day, string month, float amount);
int main()
{
    string day;
    cout << "enter current day: ";
    cin >> day;
    string month;
    cout << "Enter month: ";
    cin >> month;
    float amount;
    cout << "Enter your bill: ";
    cin >> amount;
    cout << discount(day, month, amount);
}
float discount(string day, string month, float amount)
{
    float totalPayable;
    if (month == "october" && day == "sunday")
    {
        totalPayable = amount - (amount * 10) / 100;
        return totalPayable;
    }
    else if (day == "sunday")
    {
        totalPayable = amount - (amount * 5) / 100;
        return totalPayable;
    }
    else
        return amount;
}