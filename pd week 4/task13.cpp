#include <iostream>
using namespace std;
void sleep(int);
main()
{
      while(true)
{
  int holidays;
  cout<< "Enter number of holidays: ";
  cin>>holidays;
  sleep(holidays);
     }
}

void sleep(int holidays)
{ 
   int workingDays;
   workingDays = 365 - holidays;
   int time;
   time = workingDays*63 + holidays*127 ;
   int normDifference;
   normDifference = 30000 - time;
   if(time<=30000)
   {
                 cout<<" Tom sleeps well" <<endl;
                 cout<<normDifference<<"  minutes less for play"<<endl;
   }
   if(time>30000)
   {
                 cout<<" Tom will run away "<<endl;
                 cout<<-1*normDifference<<"  minutes more for play"<<endl;
   } 
}
                 
