#include <iostream>
using namespace std;
void printMenu()
{
  cout << "                      UNIVERSITY ADMISSION MANAGEMENT SYSTEM                    "<<endl;
  cout<<" press 1 to enter details of first student...  " <<endl; 
  cout<<" press 2 to enter details of second student...  " <<endl;
  cout<<" press 3 to calculate aggregate of first student... " <<endl;
  cout<<" press 4 to calculate aggregate of second student... " <<endl;
  cout<<" press 5 to decide their roll numbers... " <<endl;
}
void calculateAggregate(string name, float matricMarks,float interMarks,float ecatMarks);
void compareMarks(string namestd1,float ecatMarksstd1,string namestd2,float ecatMarksstd2);

main()
{ 
      while(true)
      {
      printMenu();
      int number;
      cin>>number;
      
      if(number==1)

{ 
      string name;
  cout << "Enter your name: ";
  cin>>name;
  float matricMarks;
  cout<< "Enter your matric marks:  ";
  cin>>matricMarks;
  float interMarks;
  cout<< "Enter your inter marks:  ";
  cin>>interMarks;
  float ecatMarks;
  cout<< "Enter your ecat marks:  ";
  cin>>ecatMarks;
  
}
      if(number==2)

{ 
      string name;
  cout << "Enter your name: ";
  cin>>name;
  float matricMarks;
  cout<< "Enter your matric marks:  ";
  cin>>matricMarks;
  float interMarks;
  cout<< "Enter your inter marks:  ";
  cin>>interMarks;
  float ecatMarks;
  cout<< "Enter your ecat marks:  ";
  cin>>ecatMarks;
  
}
  if(number==3)
{
                       string name;
  cout << "Enter your name: ";
  cin>>name;
  float matricMarks;
  cout<< "Enter your matric marks:  ";
  cin>>matricMarks;
  float interMarks;
  cout<< "Enter your inter marks:  ";
  cin>>interMarks;
  float ecatMarks;
  cout<< "Enter your ecat marks:  ";
  cin>>ecatMarks;
  calculateAggregate(name,matricMarks,interMarks,ecatMarks);
}
  if(number==4)
{
                       string name;
  cout << "Enter your name: ";
  cin>>name;
  float matricMarks;
  cout<< "Enter your matric marks:  ";
  cin>>matricMarks;
  float interMarks;
  cout<< "Enter your inter marks:  ";
  cin>>interMarks;
  float ecatMarks;
  cout<< "Enter your ecat marks:  ";
  cin>>ecatMarks;
  calculateAggregate(name,matricMarks,interMarks,ecatMarks);
}
  if(number==5)
  {
       string namestd1;
     cout<<"Enter your name:  ";
     cin>>namestd1;
     float ecatMarksstd1;
     cout<<"Enter your ecat marks:  ";
     cin>>ecatMarksstd1;
     string namestd2;
     cout<<"Enter your name:  ";
     cin>>namestd2;
     float ecatMarksstd2;
     cout<< "Enter your ecat marks:  ";
     cin>>ecatMarksstd2;
     compareMarks( namestd1, ecatMarksstd1, namestd2, ecatMarksstd2);
  }
}
     
  
}
void calculateAggregate(string name, float matricMarks,float interMarks,float ecatMarks)
{
     
     float aggregate ;
     aggregate = (matricMarks / 1100) * 30 + (interMarks / 550) * 30 + (ecatMarks / 400) * 40 ;
     cout<< "Your aggregate is:  "<<aggregate<<endl;
}
void compareMarks(string namestd1,float ecatMarksstd1,string namestd2,float ecatMarksstd2)
{
     if(ecatMarksstd1>ecatMarksstd2)
     {
                                    cout<<" Roll no 1 =  "<<namestd1<<endl;
                                    cout<<" Roll no 2 =  "<<namestd2<<endl;
     }
     if(ecatMarksstd2>ecatMarksstd1)
     {
                                    cout<<" Roll no 1 =  "<<namestd2<<endl;
                                    cout<<" Roll no 2 =  "<<namestd1<<endl;
     }
}
     
     



  
  
  
  
  
 
