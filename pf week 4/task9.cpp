#include <iostream>
using namespace std;
void evenOrodd(int number, int mod);
main()
{
  int number;
  cout << " Enter a number:   ";
  cin >> number;
  int mod;
  mod = number % 2;
  evenOrodd(number, mod);
}

void evenOrodd(int number, int mod)
{
  if (mod == 0)
  {
    cout << " number is even";
  }
  if (mod == 1)
  {
    cout << "your number is odd";
  }
}
