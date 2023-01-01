#include <iostream>
using namespace std;
void price(string,float);
main()
{
  while(true)
 {
  string name;
  cout<< " Enter the country name: ";
  cin>>name;
  float dollars;
  cout<< "Enter the ticket price in dollars: ";
  cin>>dollars;
  price(name , dollars);
 }
}

void price(string name , float dollars)
{
  float discount1;
  discount1 = dollars * 0.95;
  float discount2;
  discount2 = dollars * 0.9 ;
  float discount3;
  discount3 = dollars * 0.8 ;
  float discount4;
  discount4 = dollars * 0.7 ;
  float discount5;
  discount5 = dollars * 0.55 ;
  if(name=="pakistan")
  {
    cout<< "your payable is:  "<<discount1<<endl;
  }
     if(name=="ireland")
  {
    cout<< "your payable is:  "<<discount2<<endl;
  }
  if(name=="india")
  {
    cout<< "your payable is:  "<<discount3<<endl;
  }
  if(name=="england")
  {
    cout<< "your payable is:  "<<discount4<<endl;
  }
  if(name=="canada")
  {
    cout<< "your payable is:  "<<discount5<<endl;
  }
}
   
   
   
   