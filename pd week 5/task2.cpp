#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
void pyramidVolume(int length, int width, int height, string unit);
main()
{
    int length;
    cout << "Enter the length in meters: ";
    cin >> length;
    int width;
    cout << "Enter the width in meters: ";
    cin >> width;
    int height;
    cout << "Enter the height in meters ";
    cin >> height;
    string unit;
    cout << " Enter the unit(mm , cm , km): ";
    cin >> unit;

    pyramidVolume(length, width, height, unit);
}
void pyramidVolume(int length, int width, int height, string unit)
{
    double volume;
    volume = (length * width * height) / 3;
    if (unit == "cm")
    {
        double VolumeCm;
        VolumeCm = volume * pow(100, 3);
        cout << "volume in cubic cm: " << VolumeCm;
    }
    if (unit == "km")
    {

        double VolumeKm = volume / 1000000000;
        cout << "Volume in cubic kilometers is: " << VolumeKm;
    }
    if (unit == "mm")
    {
        double VolumeMm = volume * pow(1000, 9);
        cout << "Volume in cubic mm: " << VolumeMm;
    }
}
