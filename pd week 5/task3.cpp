#include <iostream>
using namespace std;
float taxCalculator(float price, char code);
main()
{
    float price;
    cout << "Enter the price of the vehicle: ";
    cin >> price;
    char code;
    cout << "Enter the vehicle code(M,E,S,V,T): ";
    cin >> code;
    float result = taxCalculator(price, code);
    cout << "The FInal price on the vehicle of type " << code << "  after adding the tax is " << result;
}
float taxCalculator(float price, char code)
{
    float taxAmount;
    float finalPrice;
    if (code == 'M')
    {
        taxAmount = 0.06 * price;
        finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (code == 'E')
    {

        taxAmount = price * (8.00 / 100.00);
        finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (code == 'S')
    {

        taxAmount = price * (10.00 / 100.00);
        finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (code == 'V')
    {

        taxAmount = price * (12.00 / 100.00);
        finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (code == 'T')
    {

        taxAmount = price * (15.00 / 100.00);
        finalPrice = price + taxAmount;
        return finalPrice;
    }
}
