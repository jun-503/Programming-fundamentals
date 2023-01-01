#include <iostream>
using namespace std;
void trueOrfalse(int num1 , int num2);
main()
{
  while(true)
 {
  int num1;
  int num2;
  cout<< "Enter 1st integer:  ";
  cin>>num1;
  cout<< " Enter 2nd integer:  ";
  cin>>num2;
  trueOrfalse(num1 , num2);
  }
}

void trueOrfalse(int num1 , int num2)
{
  if(num1==num2)
   {
     cout<<" True" <<endl;
   }
  if(num1!=num2)
  {
    cout<<" False" <<endl;
  }
 }