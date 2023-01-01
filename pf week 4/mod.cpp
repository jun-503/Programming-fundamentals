#include <iostream>
using namespace std;
main(){
int number;
cout<<"enter a four digit number ";
cin>>number;
int mod1;
mod1 = number % 10 ;
int num2;
num2 = number / 10 ;
int mod2 ;
mod2 = num2 % 10;
int num3;
num3 = num2 / 10 ;
int mod3;
mod3 = num3 % 10 ;
int num4;
num4 = num3 / 10 ;
int mod4;
mod4 = num4 % 10 ;
int sum;
sum = mod4 + mod2 ;
int multiply;
multiply = mod3 * mod1;
int sum2 ;
sum2 = sum + multiply ;
cout<< "the result is:  "<<sum2<<endl;
}  
