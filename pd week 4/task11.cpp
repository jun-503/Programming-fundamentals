#include <iostream>
using namespace std;
void challan(float speed);
main()
{
  while(true)
 {
  float speed;
  cout<< " Enter your speed:  " ;
  cin>>speed;
  challan(speed);
 } 
}
void challan(float speed)
{
  if(speed==100)
  {
      cout<< " Perfect! You're going good" <<endl;
  }
  if(speed>100)
  {
     cout<< " YOU WILL BE CHALLENGED"<<endl;
  }
}

