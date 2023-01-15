#include <iostream>
using namespace std;
float isPrice(string fruit, string day, float quantity);
int main()
{
    string fruit;
    cout << "Enter name of the fruit: ";
    cin >> fruit;
    string day;
    cout << "Enter name of the day: ";
    cin >> day;
    float quantity;
    cout << " enter quantity: ";
    cin >> quantity;
    cout << isPrice(fruit, day, quantity);
}
float isPrice(string fruit, string day, float quantity)
{
    float price;
    if ((fruit == "banana") && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = 2.50 * quantity;
        return price;
    }
    else if ((fruit == "banana") && (day == "saturday" || day == "sunday"))
    {
        price = 2.70 * quantity;
        return price;
    }

    else if ((fruit == "apple") && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = 1.20 * quantity;
        return price;
    }
    else if ((fruit == "apple") && (day == "saturday" || day == "sunday"))
    {
        price = 1.25 * quantity;
        return price;
    }

    else if ((fruit == "orange") && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = 0.85 * quantity;
        return price;
    }
    else if ((fruit == "orange") && (day == "saturday" || day == "sunday"))
    {
        price = 0.90 * quantity;
        return price;
    }

    else if ((fruit == "grapefruit") && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = 1.45 * quantity;
        return price;
    }

    else if ((fruit == "grapefruit") && (day == "saturday" || day == "sunday"))
    {
        price = 1.60 * quantity;
        return price;
    }

    else if ((fruit == "kiwi") && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = 2.70 * quantity;
        return price;
    }
    else if ((fruit == "kiwi") && (day == "saturday" || day == "sunday"))
    {
        price = 3.00 * quantity;
        return price;
    }
    else if ((fruit == "grapes") && (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"))
    {
        price = 3.85 * quantity;
        return price;
    }
    else if ((fruit == "grapes") && (day == "saturday" || day == "sunday"))
    {
        price = 4.20 * quantity;
        return price;
    }
    else
        return 0;
}
