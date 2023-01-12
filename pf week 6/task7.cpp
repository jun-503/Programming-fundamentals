#include <iostream>
using namespace std;
float totalIncome(string, int, int);
int main()
{
    string screen;
    cout << "Enter type of screen: ";
    cin >> screen;
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int columns;
    cout << "Enter number of columns: ";
    cin >> columns;
    cout << totalIncome(screen, rows, columns);
}
float totalIncome(string screen, int rows, int columns)
{
    float totalIncome;
    float result;

    if (screen == "premiere")
    {
        totalIncome = 12.00 * (rows * columns);
        result = totalIncome;
    }
    else if (screen == "normal")
    {
        totalIncome = 7.50 * (rows * columns);
        result = totalIncome;
    }
    else if (screen == "student")
    {
        totalIncome = 5.00 * (rows * columns);
        result = totalIncome;
    }
    else
    {
        result = 0;
    }
    return result;
}