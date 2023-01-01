#include <iostream>
using namespace std;
void calculateBill(string day , int amount );
main() 
 {  
   float amount ;
   string day  ;
    while(true) 
    {
   cout<< "enter your purchase amount:  ";
   cin>>amount;
   cout<< "enter current day:   ";
   cin>>day;

 
   calculateBill(day , amount ) ;
   }
 }

     void calculateBill(string day , int amount )
     {
      float discount1 , discount2;
      discount1 = amount * 0.9 ;
      discount2 = amount * 0.95 ;

       if (day== "sunday")
        {
          cout<< "your discounted bill is:  " <<discount1<<endl;
        }
      if (day!= "sunday")
         {
            cout<<"your bill is:   "   <<discount2<<endl;
         }
      }
 

  