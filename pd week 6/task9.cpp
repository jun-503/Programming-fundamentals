#include <iostream>
using namespace std;
string isPosition(int h, int x, int y);
int main()
{
    int h;
    cout << "enter size of block: ";
    cin >> h;
    int xcord;
    cout << "Enter x co-ordinate: ";
    cin >> xcord;
    int ycord;
    cout << "Enter y co-ordinate: ";
    cin >> ycord;

    string result = isPosition(h, xcord, ycord);
    cout << result;
}
string isPosition(int h, int xcord, int ycord)
{
    string position;
    int base = h * 3;
    int height = h * 4;

    if ((xcord == 0 || xcord == base) && (ycord >= 0 && ycord <= h))
    {
        position = "border";
    }
    if ((ycord == 0) && (xcord >= 0 && xcord <= base))
    {
        position = "border";
    }
    if ((ycord == h) && ((xcord >= 0 && xcord <= h) || (xcord >= h * 2 && xcord <= base)))
    {
        position = "border";
    }
    if ((xcord == h || xcord == h * 2) && (ycord >= h || ycord <= h * 2))
    {
        position = "border";
    }
    if ((ycord == height) && (xcord >= h && xcord <= h * 2))
    {
        position = "border";
    }

    if ((xcord > 0 && xcord < base) && (ycord > 0 && ycord < h))
    {
        position = "inside";
    }
    if ((xcord > h && xcord < h * 2) && (ycord > 0 && ycord < height))
    {
        position = "inside";
    }

    else
    {
        position = "outside";
    }
    return position;
}