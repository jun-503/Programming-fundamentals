#include <iostream>
using namespace std;
main(){
string Name;
int Marks1;
int Marks2;
int Marks3;
int Marks4;
int Marks5;
float percentage;
cout<<" Enter your name";
cin>>Name;
cout<<" Enter subject 01 marks:  ";
cin>>Marks1;
cout<<" enter subject 02 marks:  ";
cin>>Marks2;
cout<<"enter subject 03 marks:   ";
cin>>Marks3;
cout<<" Enter subject 04 marks:   ";
cin>>Marks4;
cout<<" Enter subject 05 marks:   ";
cin>>Marks5;
double totalMarks;
totalMarks = Marks1 + Marks2 + Marks3 + Marks4 + Marks5 ;
percentage = (totalMarks / 500) * 100 ;
cout<<" your percentage:  "<<percentage ;
}
