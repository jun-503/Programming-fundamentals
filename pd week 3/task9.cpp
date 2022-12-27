#include <iostream>
using namespace std;
main()
{

float vegPriceperKg;
float fruitPriceperKg;
int totalVegkgs;
int totalFruitkgs;
cout<<" Enter vegetable price per kilogram " ;
cin>>vegPriceperKg;
cout<<" Enter fruit price per kilogram " ;
cin>>fruitPriceperKg;
cout<< "Enter total kilograms of vegetables";
cin>>totalVegkgs;
cout<< "Enter total kilograms of fruits ";
cin>>totalFruitkgs ;
float totalEarning ;
totalEarning = (vegPriceperKg * totalVegkgs) + (fruitPriceperKg * totalFruitkgs);
float totalEarninginPkr;
totalEarninginPkr = totalEarning / 1.94 ;
cout<< "The total Earning in PKR is:  " <<totalEarninginPkr;
}



