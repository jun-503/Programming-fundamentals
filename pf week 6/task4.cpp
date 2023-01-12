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
    if (day == "sunday" && (month == "october" || month == "march" || month == "august"))
    {
        totalPayable = amount - (amount * 10.00) / 100.00;
        return totalPayable;
    }
    else if (day == "monday" && (month == "november" || month == "december"))
    {
        totalPayable = amount - (amount * 5.0) / 100.00;
        return totalPayable;
    }
    else
        return amount;
}