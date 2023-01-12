#include <iostream>
using namespace std;
float cheapestFair(float kilometres, string period);
int main()
{
    float kilometres;
    cout << "Enter distance in kilometers: ";
    cin >> kilometres;
    string period;
    cout << "Enter the period of day: ";
    cin >> period;
    cout << cheapestFair(kilometres, period);
}
float cheapestFair(float kilometres, string period)
{
    float taxiFair;
    if (period == "day")
    {
        taxiFair = 0.7 * kilometres;
    }
    else
    {
        taxiFair = 0.79 * kilometres;
    }
    if (kilometres >= 20 && kilometres < 100)
    {
        float busFair;
        busFair = 0.09 * kilometres;
        return busFair;
    }
    else if (kilometres >= 100)
    {
        float trainFare = 0.06 * kilometres;
        return trainFare;
    }
    else if (kilometres < 20 && period == "day")
    {
        float taxiFair;

        taxiFair = 0.7 * kilometres;
        return taxiFair;
    }
    else
    {
        taxiFair = 0.79 * kilometres;
        return taxiFair;
    }
    return 0;
}
