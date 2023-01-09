#include <iostream>
#include <cmath>
using namespace std;
float time(int hours, int minutes);
main()
{
    int hours;
    cout << "Enter hours:  ";
    cin >> hours;
    int minutes;
    cout << "Enter minutes:  ";
    cin >> minutes;
    time(hours, minutes);
}
float time(int hours, int minutes)
{
    int newMin;
    int newHours;
    newHours = hours + 1;
    newMin = minutes + 15;
    int newMin1 = newMin - 60;
    if (newMin > 59 && hours < 23)
    {
        cout << "new time is:  " << newHours << ":" << newMin1;
    }
    if (newHours == 24)

    {
        int newHours1;
        newHours1 = newHours - 24;
        cout << "new time is:" << newHours1 << ":" << newMin1;
    }

    if (newMin <= 59)
    {
        cout << "new time is: " << hours << ":" << newMin;
    }
}
