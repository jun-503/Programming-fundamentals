#include <iostream>
using namespace std;
void reverse(string);
main()
{
  while(true)
  {
  string trueOrfalse;
  cout<< " Enter true or False:  ";
  cin>>trueOrfalse;
  reverse(trueOrfalse);
  }
}

void reverse(string trueOrfalse)
{
  if(trueOrfalse=="true")
  {
     cout<< "false"<<endl;
   }
  if(trueOrfalse=="false")
  {
     cout<< "true" <<endl;
  }
}

  