#include <iostream>
using namespace std;
int myFunction(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = myFunction(number);
    cout << "The result is: " << result << endl;
}
int myFunction(int number)
{
    return number * 5;
}
