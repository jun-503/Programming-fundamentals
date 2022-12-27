#include <iostream>
using namespace std;
main(){

int pounds;
int cost;
float area;

cout<<" Enter Bag size in ponds:   ";
cin>>pounds;
cout<<" Enter cost of the bag:   " ;
cin>>cost;
cout<<" Enter area covered by each bag in square feet:  " ;
cin>>area;
float costPerpound;
costPerpound = cost / pounds ;
float costPersquareFeet ;
costPersquareFeet = cost / area ;
cout<< " cost of the fertilizer per pound "<<costPerpound <<endl;
cout<< " cost of the fertilizing area per square feet "<<costPersquareFeet;
}
