#include <iostream>
using  namespace std;
void minimum(int number1 , int number2);
void equal(int number1 , int number2);
void maximum(int number1 , int number2);

main()
{
int number1;
 while(true)
  {
cout<< "Enter first number:  ";
cin>>number1;
int number2;
cout<< "Enter second number:  ";
cin>>number2;
int choice;
cout<< "enter your choice (1-3):  ";
cin>>choice;
 if (choice==1)
    { maximum(number1 , number2);
    }
     if (choice==2)
      {
         minimum(number1 , number2);
      }
        if (choice==3)
         {
          equal(number1 , number2);
         } 
  }

}

 void minimum(int number1 , int number2)
 {
   if (number1<number2)
   {
     cout<<" minimum number is  " <<number1<<endl;
   }

  if (number2<number1)
   {
     cout<<" minimum number is   " <<number2<<endl;
   }
}
       void maximum(int number1 , int number2)
       { 
          if (number1>number2)
   {
     cout<<" maximum number is  " <<number1<<endl;
   }

  if (number2>number1)
   {
     cout<<" maximum number is" <<number2<<endl;
   }
}
  
 void equal(int number1 , int number2)
{
  if (number1==number2){
  cout<< " numbers are equal" <<endl;
  }
}
