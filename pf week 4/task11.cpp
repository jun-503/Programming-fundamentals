#include <iostream>
using namespace std;
void evenOrodd(int number , int mod);
main()
{
int number;
 while(true)
  {
   cout<<" Please enter a number:  ";
   cin>>number;
   int mod ;
   mod = number  % 2 ;
   evenOrodd(number , mod);
  }
}
void evenOrodd(int number , int mod)
{
  if (mod==0)
   {
    cout<< " given number is even" <<endl;
   }
  if (mod==1)
   {
    cout<< " given number is odd "<<endl;
   }
}