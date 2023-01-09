#include <iostream>
using namespace std;
int main()
{
    int days;
    cout << "Enter number of working days:  ";
    cin >> days;
    int hours;
    cout << "Enter number of needed hours: ";
    cin >> hours;
    int workers;
    cout << "Enter number of workers:  ";
    cin >> workers;
    int workingHours;
    workingHours = workers * 10;
    int Time;
    Time = workingHours * days;
    int totaltime;
    totaltime = Time - (0.1 * Time);
    int remainingHours = totaltime - hours;
    if (totaltime >= hours)
    {
        cout << "Yes! " << remainingHours << "  hours left";
    }
    if (totaltime < hours)
    {
        cout << "Not enough time!" << -remainingHours << "  needed";
    }
}
