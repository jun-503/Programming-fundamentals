#include <iostream>
using namespace std;
void Eligibility(int age);
main()
{

 int age;
 while (true)
  {
cout<<" Enter your age:  ";
cin>>age;
Eligibility(age);
   }
 }
void Eligibility(int age)
{

if (age>=18)
 {
cout<< "You are eligible to vote "<<endl;
 }
if (age<18)
  {
cout<< " you are not eligible:  "<<endl;
  }
}

