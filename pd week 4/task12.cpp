#include <iostream>
using namespace std;
void originalPrice(int,int,int);

main()
{
  while(true)
  {
  int redRoses;
  cout<< " Enter number of red roses:  ";
  cin>>redRoses;
  int whiteRoses;
  cout<< " Enter number of white roses:  ";
  cin>>whiteRoses;
  int tulips;
  cout<< " Enter number of tulips:  ";
  cin>>tulips;
  originalPrice(redRoses,whiteRoses,tulips);
  }
}
void originalPrice(int redRoses,int whiteRoses,int tulips)
{
  float price1;
  price1 = redRoses * 2.00;
  float price2;
  price2 = whiteRoses * 4.10;
  float price3;
  price3 = tulips * 2.50;
  float originalPrice = price1 + price2 + price3;
  cout<< " Original price:  "<<originalPrice<<endl;
  if(originalPrice>200)
  {
    cout<<"Total payable amount is:  "<<originalPrice*0.8<<endl;
  }
}

  
  

  