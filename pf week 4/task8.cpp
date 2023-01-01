#include <iostream>
using namespace std;
void disc1(int discount1);
void disc2(int discount2);

main()
{
    float totalPurchase;
    string day;
    cout << " Please enter your total purchase:  ";
    cin >> totalPurchase;
    cout << " Enter current day:  ";
    cin >> day;
    if (day == sunday)
    {
        disc1(discount1);
    }
    if (day != sunday)
    {
        disc2(discount2);
    }
}
void disc1(int discount1)
{
    int discount1;
    discount1 = (10 / 100) * totalPurchase;
    cout << "your total payable is:  " << discount1 << endl;
}
void disc2(discount2)
{
    int discount2;
    discount2 = (5 / 100) * totalPurchase;
    cout << "your total payable is:   " << discount2 << endl;
}
