#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
main()
{
   int num1;
   cout<<" enter first number: ";
   cin>>num1;
   int num2;
   cout<<"enter second number:  ";
   cin>>num2;
   int result1 = min(num1 , num2);
   cout<<result1<<" is minimum"<<endl;
   int result2 = pow(num1 , num2);
   cout<<"result is:  "<<result2<<endl;
   float result3 = cbrt(num1*num2);
   cout<<"result is:  "<<result3<<endl;
   float num3;
   cout<<" enter a number";
   cin>>num3;
   int result4 = ceil(num3);
   cout<<"round off value is:   "<<result4<<endl;
   int result5 = floor(num3);
   cout<<" round off value is:  "<<result5;
  
}

