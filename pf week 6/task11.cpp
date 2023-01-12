#include <iostream>
#include <cmath>
using namespace std;
float playingDays(string year, int holidays, int h);
int main()
{
    string year;
    cout << "Enter type of year: ";
    cin >> year;
    int holidays;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    int h;
    cout << "Enter the weekends in which you travel hometown: ";
    cin >> h;
    cout << playingDays(year, holidays, h);
}
float playingDays(string year, int holidays, int h)
{
    int weekends = 48 - h;
    int playWeekends = (weekends * 3) / 4;
    int playHolidays = (holidays * 2) / 3;
    float totalPlaydays = playWeekends + playHolidays + h;
    if (year == "leap")
    {
        totalPlaydays = totalPlaydays + (totalPlaydays * 15) / 100;
        return floor(totalPlaydays);
    }
    if (year == "normal")
    {
        return floor(totalPlaydays);
    }
    return 0;
}