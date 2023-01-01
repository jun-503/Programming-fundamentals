#include <iostream>
using namespace std;
void printName(string name);
main()
{
   string userName;
   while (true)
   {
      cout << " userName:  ";
      cin >> userName;
      printName(userName);
   }
}

void printName(string userName)
{
   cout << "userName:  " << endl;
}