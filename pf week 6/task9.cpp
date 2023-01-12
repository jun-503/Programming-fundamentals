#include <iostream>
using namespace std;
float checkCost(string city, string product, int quantity);
int main()
{
    string city;
    cout << "Enter the name of city: ";
    cin >> city;
    string product;
    cout << "Enter name of product: ";
    cin >> product;
    int quantity;
    cout << "Enter the quantity of product: ";
    cin >> quantity;
    cout << checkCost(city, product, quantity);
}
float checkCost(string city, string product, int quantity)
{
    float cost;
    if (product == "coffee" && city == "sofia")
    {
        cost = 0.50 * quantity;
        return cost;
    }
    else if (product == "coffee" && city == "plovdiv")
    {
        cost = 0.40 * quantity;
        return cost;
    }
    else if (product == "coffee" && city == "varna")
    {
        cost = 0.45 * quantity;
        return cost;
    }
    else if (product == "water" && city == "sofia")
    {
        cost = 0.80 * quantity;
        return cost;
    }
    else if (product == "water" && city == "plovdiv")
    {
        cost = 0.70 * quantity;
        return cost;
    }
    else if (product == "water" && city == "varna")
    {
        cost = 0.70 * quantity;
        return cost;
    }
    else if (product == "beer" && city == "sofia")
    {
        cost = 1.20 * quantity;
        return cost;
    }
    else if (product == "beer" && city == "plovdiv")
    {
        cost = 1.15 * quantity;
        return cost;
    }
    else if (product == "beer" && city == "varna")
    {
        cost = 1.10 * quantity;
        return cost;
    }
    else if (product == "sweets" && city == "sofia")
    {
        cost = 1.45 * quantity;
        return cost;
    }
    else if (product == "sweets" && city == "plovdiv")
    {
        cost = 1.30 * quantity;
        return cost;
    }
    else if (product == "sweets" && city == "verna")
    {
        cost = 1.35 * quantity;
        return cost;
    }
    else if (product == "peanuts" && city == "sofia")
    {
        cost = 1.60 * quantity;
        return cost;
    }
    else if (product == "peanuts" && city == "plovdiv")
    {
        cost = 1.50 * quantity;
        return cost;
    }
    else if (product == "peanuts" && city == "verna")
    {
        cost = 1.55 * quantity;
        return cost;
    }
    return 0;
}