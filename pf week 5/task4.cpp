#include <iostream>
#include <cmath>
using namespace std;
bool isSymmetrical(int number);

main()
{
  int number;
  cout << " Enter a three digit number:  ";
  cin >> number;
  isSymmetrical(number);
}
bool isSymmetrical(int number)
{
  int mod1;
  mod1 = number % 10;
  int number2;
  number2 = number / 10;
  int mod2;
  mod2 = number2 % 10;
  int number3;
  number3 = number2 / 10;
  int mod3;
  mod3 = number3 % 10;
  if (mod1 == mod3)
  {
    cout << " Given number is symmetrical";
  }
  if (mod1 != mod3)
  {
    cout << "Given number is not symmetrical ";
  }
}
