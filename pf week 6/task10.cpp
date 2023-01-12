#include <iostream>
using namespace std;
float isBudget(double budget, string category, int people);
int main()
{
    double budget;
    cout << "Enter your budget: ";
    cin >> budget;
    string category;
    cout << "Enter your category: ";
    cin >> category;
    int people;
    cout << "Enter number of people in the group: ";
    cin >> people;
    float result;
    result = isBudget(budget, category, people);
    if (result >= 0)
        cout << "Yes! You have  " << result << " riyal left";
    if (result < 0)
        cout << "Not enough money! you need " << -result << " riyal";
}
float isBudget(double budget, string category, int people)
{
    float travelCost;
    float ticketCost;
    float totalCost;
    float result;
    if (category == "VIP" && people <= 4)
    {
        travelCost = (budget * 75) / 100;
        ticketCost = people * 499.99;
        totalCost = travelCost + ticketCost;
        result = budget - totalCost;
    }
    else if (category == "VIP" && (people > 4 && people <= 9))
    {
        travelCost = (budget * 60) / 100;
        ticketCost = people * 499.99;
        totalCost = travelCost + ticketCost;
        result = budget - totalCost;
    }
    else if (category == "VIP" && (people > 9 && people <= 24))
    {
        travelCost = (budget * 50) / 100;
        ticketCost = people * 499.99;
        totalCost = travelCost + ticketCost;
        result = budget - totalCost;
    }
    else if (category == "VIP" && (people > 24 && people <= 49))
    {
        travelCost = (budget * 40) / 100;
        ticketCost = people * 499.99;
        totalCost = travelCost + ticketCost;
        result = budget - totalCost;
    }
    else if (category == "VIP" && people > 50)
    {
        travelCost = (budget * 25) / 100;
        ticketCost = people * 499.99;
        totalCost = travelCost + ticketCost;
        result = budget - totalCost;
    }
    else if (category == "normal" && people <= 4)
    {
        travelCost = (budget * 75) / 100;
        ticketCost = people * 249.99;
        totalCost = travelCost + ticketCost;
        result = budget - totalCost;
    }
    else if (category == "normal" && (people > 4 && people <= 9))
    {
        travelCost = (budget * 60) / 100;
        ticketCost = people * 249.99;
        totalCost = travelCost + ticketCost;
        result = budget - totalCost;
    }
    else if (category == "normal" && (people > 9 && people <= 24))
    {
        travelCost = (budget * 50) / 100;
        ticketCost = people * 249.99;
        totalCost = travelCost + ticketCost;
        result = budget - totalCost;
    }
    else if (category == "normal" && (people > 24 && people <= 49))
    {
        travelCost = (budget * 40) / 100;
        ticketCost = people * 249.99;
        totalCost = travelCost + ticketCost;
        result = budget - totalCost;
    }
    else if (category == "normal" && people > 50)
    {
        travelCost = (budget * 25) / 100;
        ticketCost = people * 249.99;
        totalCost = travelCost + ticketCost;
        result = budget - totalCost;
    }
    return result;
}