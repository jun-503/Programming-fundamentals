#include <iostream>
using namespace std;
main(){

int num ;
cout<< "Enter a four digit number:  ";
cin>>num;
int mod1;
mod1 = num % 10 ;
int num2;
num2 = num / 10 ;
int mod2;
mod2 = num2 % 10 ;
int num3;
num3 = num2 / 10 ;
int mod3;
mod3 = num3 % 10;
int num4 ;
num4 = num3 / 10 ;
int mod4;
mod4 = num4 % 10;
int sum;
sum = mod1 + mod2 + mod3 + mod4 ;
cout<< " sum is : "<<sum ;
} 



