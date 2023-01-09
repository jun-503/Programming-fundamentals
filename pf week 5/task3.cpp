#include <iostream>
#include <cmath>
using namespace std;

main()
{
   int a;
   cout << " Enter the coefficent of x^2: ";
   cin >> a;
   int b;
   cout << " Enter the coefficent of x:  ";
   cin >> b;
   int c;
   cout << " Enter the coefficent of x^0:   ";
   cin >> c;
   int discriminant = b * b - 4 * a * c;
   float value1;
   value1 = (-b + sqrt(discriminant)) / (2 * a);
   float value2;
   value2 = (-b - sqrt(discriminant)) / (2 * a);

   cout << " the values of x are " << value1 << " and " << value2 << endl;
}
