#include <iostream>
using namespace std;
void letterCase(string letter);
main()
{
    string letter;
    cout << "Enter a or A: ";
    cin >> letter;
    letterCase(letter);
}
void letterCase(string letter)
{
    if (letter == "a")
    {
        cout << " you have entered small a" << endl;
    }
    if (letter == "A")
    {
        cout << "you have enterd capital A" << endl;
    }
}