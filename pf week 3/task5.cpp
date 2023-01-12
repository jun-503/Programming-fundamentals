#include <iostream>
using namespace std;
main(){

string name ;
float matric;
float inter;
float ecat;
float aggregate;

cout<<" enter your name:   ";
cin>>name;
cout<<"enter your matric marks:  ";
cin>>matric;
cout<<"enter your inter marks:  ";
cin>>inter;
cout<<"enter your ecat marks:  ";
cin>>ecat;
aggregate = (ecat / 400) * 50 + (matric / 1100) * 10  + (inter / 550) * 40 ;
cout<<"your aggregate is"<<aggregate;
}
