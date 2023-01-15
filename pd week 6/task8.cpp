#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
    int examHour, examMinute, arrivalHour, arrivalMinute;
    cin >> examHour >> examMinute >> arrivalHour >> arrivalMinute;
    int examTime = examHour * 60 + examMinute;
    int arrivalTime = arrivalHour * 60 + arrivalMinute;
    int difference = arrivalTime - examTime;
    if (difference <= 0 && (difference >= -30))
    {
        cout << "on time" << endl;
    }
    else if (difference > 0)
    {
        cout << "late" << endl;
    }
    else
    {
        cout << "too early" << endl;
    }
    if (difference != 0)
    {
        int hours = difference / 60;
        int minutes = difference % 60;
        if ((difference >= -59) && (difference < 0))
        {
            cout << -minutes << " minutes before the start " << endl;
        }
        if ((difference < 60) && (difference == 0))
        {
            cout << minutes << " minutes after the start " << endl;
        }
        if (difference <= -60)
        {
            cout << -hours << ":" << -minutes << " hours before the start " << endl;
        }
        if (difference >= 60)
        {
            cout << hours << ":" << minutes << "hours after the start" << endl;
        }
    }
    return 0;
}
