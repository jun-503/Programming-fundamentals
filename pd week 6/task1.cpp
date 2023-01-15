#include <iostream>
using namespace std;
string isActivity(string, string);
int main()
{
    string temp;
    cout << "please enter temperature: ";
    cin >> temp;
    string humidity;
    cout << "enter current humidity: ";
    cin >> humidity;
    cout << isActivity(temp, humidity);
}
string isActivity(string temp, string humidity)
{
    if (temp == "warm" && humidity == "dry")
        return "Play tennis";
    if (temp == "warm" && humidity == "humid")
        return "Swim";

    if (temp == "cold" && humidity == "dry")
    {
        return "Play basketball";
    }
    if (temp == "warm" && humidity == "humid")
    {
        return "Watch TV";
    }
    return 0;
}