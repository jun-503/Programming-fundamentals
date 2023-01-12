#include <iostream>
using namespace std;
void percentage(string ,int , int , int , int , int );
main()
{
string name;
int marks1;
int marks2;
int marks3;
int marks4;
int marks5;
while (true)
{
cout<<" Enter your name:  ";
cin>>name;
cout<<" Enter subject 01 marks:  ";
cin>>marks1;
cout<<" enter subject 02 marks:  ";
cin>>marks2;
cout<<"enter subject 03 marks:   ";
cin>>marks3;
cout<<" Enter subject 04 marks:   ";
cin>>marks4;
cout<<" Enter subject 05 marks:   ";
cin>>marks5;
percentage(name , marks1 , marks2 , marks3 , marks4 , marks5 );
}
}
void percentage(string name ,int marks1 , int marks2 , int marks3 , int marks4 , int marks5)
{
double totalMarks;
totalMarks = marks1 + marks2 + marks3 + marks4 + marks5 ;
float percentage;
percentage = (totalMarks / 500) * 100 ;
cout<<" your percentage:  "<<percentage <<endl;
}
