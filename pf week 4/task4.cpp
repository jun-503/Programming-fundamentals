#include <iostream>
using namespace std;
void checkResult(int marks);
main()
{
       int marks;
       cout << "enter your marks:  ";
       cin >> marks;
       checkResult(marks);
}
void checkResult(int marks)
{

       if (marks <= 50)
       {
              cout << "fail" << endl;
       }
       if (marks >= 50)
       {
              cout << "pass" << endl;
       }
}
