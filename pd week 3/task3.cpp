#include <iostream>
using namespace std;
void finalVelocity(int , int , int);
main(){

int initialVelocity;
int acceleration;
int time;
cout<<"Enter the initial velocity:  ";
cin>>initialVelocity;
cout<<"Enter the acceleration:  ";
cin>>acceleration;
cout<<" Enter Time:   ";
cin>>time;
finalVelocity(initialVelocity , acceleration, time);
}
void finalVelocity(int initialVelocity , int acceleration ,int time)
{
int finalVelocity;
finalVelocity = (acceleration * time) + initialVelocity ;
cout<<" Final Velocity is:  " <<finalVelocity;
}
