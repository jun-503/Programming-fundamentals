#include <iostream>
using namespace std;
float isPrice(string month, int stays);
int main()
{
    string month;
    cout << "Enter the current month: ";
    cin >> month;
    int stays;
    cout << "Enter number of stays: ";
    cin >> stays;
    float totalPrice;
    float studioPrice;
    float totalStudioprice;
    float apartmentPrice;
    float totalApartmentPrice;
    if ((month == "may" || month == "october") && (stays <= 7))
    {
        studioPrice = 50.0 * stays;
        cout << "Studio: " << studioPrice << "$" << endl;
        apartmentPrice = 65.0 * stays;
        cout << "apartment: " << apartmentPrice << "$" << endl;
    }
    else if ((month == "may" || month == "october") && (stays > 7 && stays <= 14))
    {
        studioPrice = 50.0 * stays;
        totalStudioprice = studioPrice - (studioPrice * 5.0) / 100.00;
        cout << "Studio: " << totalStudioprice << "$" << endl;
        apartmentPrice = 65.0 * stays;
        cout << "apartment: " << apartmentPrice << "$" << endl;
    }
    else if ((month == "may" || month == "october") && (stays > 14))
    {
        studioPrice = 50.0 * stays;
        totalStudioprice = studioPrice - (studioPrice * 30.00) / 100.00;
        cout << "Studio: " << totalStudioprice << "$" << endl;
        apartmentPrice = 65.0 * stays;
        totalApartmentPrice = apartmentPrice - (apartmentPrice * 10.00) / 100.00;
        cout << "Apartment: " << totalApartmentPrice << "$";
    }

    else if ((month == "june" || month == "september") && (stays <= 14))
    {
        studioPrice = 75.20 * stays;
        cout << "Studio: " << studioPrice << "$" << endl;
        apartmentPrice = 68.70 * stays;
        cout << "apartment: " << apartmentPrice << "$" << endl;
    }
    else if ((month == "june" || month == "september") && (stays > 14))
    {
        studioPrice = 75.20 * stays;
        totalStudioprice = studioPrice - (studioPrice * 0.2);
        cout << "Studio: " << totalStudioprice << "$" << endl;
        apartmentPrice = 68.70 * stays;
        totalApartmentPrice = apartmentPrice - (apartmentPrice * 0.1);

        cout << "apartment: " << totalApartmentPrice << "$" << endl;
    }

    else if ((month == "july" || month == "august") && (stays <= 14))
    {
        studioPrice = 76.00 * stays;
        cout << "Studio: " << studioPrice << "$" << endl;
        apartmentPrice = 77.00 * stays;
        cout << "apartment: " << apartmentPrice << "$" << endl;
    }
    else if ((month == "july" || month == "august") && (stays > 14))
    {
        studioPrice = 76.00 * stays;
        cout << "Studio: " << studioPrice << "$" << endl;
        apartmentPrice = 77.00 * stays;
        totalApartmentPrice = apartmentPrice - (apartmentPrice * 0.1);
        cout << "apartment: " << totalApartmentPrice << "$" << endl;
    }
}
