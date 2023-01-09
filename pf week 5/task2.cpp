#include <iostream>
#include <cmath>
using namespace std;
float calculateHeight(int base , float degrees );

main()
{
  int base;
  float height;
  float degrees;
  cout<< " enter base:  ";
  cin>>base;
  cout<< " enter angle of elevation:  " ;
  cin>>degrees;
  float result;
  result = calculateHeight(base , degrees);
  cout<<" height is:  "<<result;
}
float calculateHeight(int base , float degrees )
{

  float radians;
  radians = degrees / 57.298;
  float height;
  height = tan(radians) * base ;
  return height;
  
}
  
  
  