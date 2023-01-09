#include <iostream>
#include <cmath>
using namespace std;
string poolState(int volume, int flowrate1, int flowrate2, float hours);

main()
{
    int volume;
    cout << "Enter the volume of the pool: ";
    cin >> volume;
    int flowrate1;
    cout << " Enter flowrate of first pipe: ";
    cin >> flowrate1;
    int flowrate2;
    cout << " Enter flowrate of second pipe: ";
    cin >> flowrate2;
    float hours;
    cout << "Enter total hours in which worker was absent: ";
    cin >> hours;
    poolState(volume, flowrate1, flowrate2, hours);
}
string poolState(int volume, int flowrate1, int flowrate2, float hours)
{
    int percentage;
    float value1;
    value1 = flowrate1 * hours;
    float value2;
    value2 = flowrate2 * hours;
    float value3;
    value3 = value1 + value2;
    int pct1;
    pct1 = value1 / value3 * 100;
    int pct2 = value2 / value3 * 100;
    percentage = value3 / volume * 100;
    if (percentage <= 100)
    {
        cout << "The pool is " << percentage << "% full"
             << " . Contribution of Pipe 1: " << pct1 << "% . Contribution of Pipe 2: " << pct2 << "% .";
    }
    if (percentage > 100)
    {
        float overLitres;
        overLitres = (value1 + value2) - volume;
        cout << "for " << hours << " hours the pool overflows with " << overLitres << " litres";
    }
}
