#include <iostream>
using namespace std;
float isCharges(char, int);
int main()
{
    char serviceCode;
    cout << "Enter service code(P,R): ";
    cin >> serviceCode;
    int minutes;
    cout << "Enter total minutes: ";
    cin >> minutes;
    cout << isCharges(serviceCode, minutes) << " $";
}
float isCharges(char serviceCode, int minutes)
{
    float charges;
    if (serviceCode == 'R')
    {
        int totalMinutes;
        totalMinutes = minutes - 50;
        if (totalMinutes <= 0)
        {
            charges = 10.00;
            return charges;
        }
        if (totalMinutes > 0)
        {
            charges = 0.2 * totalMinutes + 10.00;
            return charges;
        }
    }
    if (serviceCode = 'P')
    {
        char time;
        cout << "Press 'd' for daytime and press 'n' for night time call: ";
        cin >> time;
        int totalMinutes;
        if (time == 'd')
        {
            totalMinutes = minutes - 75;
            if (totalMinutes <= 0)
            {
                charges = 25.00;
                return charges;
            }
            if (totalMinutes > 0)
            {
                charges = 0.10 * totalMinutes + 25.00;
                return charges;
            }
        }
        if (time == 'n')
        {
            totalMinutes = minutes - 100;
            if (totalMinutes <= 0)
            {
                charges = 25.00;
                return charges;
            }
            if (totalMinutes > 0)
            {
                charges = 0.05 * totalMinutes + 25.00;
                return charges;
            }
            return 0;
        }
    }
}
