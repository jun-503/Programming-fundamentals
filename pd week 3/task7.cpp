#include <iostream>
using namespace std;
main(){

string name;
int adultPrice ;
int childPrice ;
int soldAdultTicket ;
int soldChildTicket ;
float percentage;

cout<<" Enter Movie Name ";
cin>>name;
cout<<" Enter Adult Ticket Price:   ";
cin>>adultPrice;
cout<<" Enter Child Ticket Price:   ";
cin>>childPrice;
cout<< " enter number of sold adult ticket:   ";
cin>>soldAdultTicket;
cout<< " enter number of sold child ticket:   ";
cin>>soldChildTicket;
int totalAmount;
totalAmount = (adultPrice * soldAdultTicket) + (childPrice * soldChildTicket) ;
cout<< " Total Amount Generated "<<totalAmount<<endl;
cout<< " Enter percentage:   ";
cin>>percentage;
int Charity;
Charity = totalAmount * percentage / 100 ;
int afterDonation ;
afterDonation = totalAmount - Charity ;
cout<< "Amount after Donation:  "<<afterDonation;
}

