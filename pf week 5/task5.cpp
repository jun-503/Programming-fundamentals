#include <iostream>
#include <cmath>
using namespace std;
string isEvenish(int number);
main()
{
  int number;
  cout << " enter a five digit number ";
  cin >> number;
  string result1;
  result1 = isEvenish(number);
  cout << "Result is:  " << result1;
}
string isEvenish(int number)
{
  int mod1;
  mod1 = number % 10;
  int num2;
  num2 = number / 10;
  int mod2;
  mod2 = num2 % 10;
  int num3;
  num3 = num2 / 10;
  int mod3 = num3 % 10;
  int num4 = num3 / 10;
  int mod4 = num3 % 10;
  int mod = mod1 + mod2 + mod3 + mod4;
  int odd;
  odd = mod % 2;
  if (odd == 1)
  {
    return " The sum of five digit number is oddish  ";
  }
  if (odd != 1)
  {
    return "The sum of five digit number is evenish : ";
  }
}
