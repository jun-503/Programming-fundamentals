
#include <iostream>
using namespace std;
void add(float number1, float number2);
void multiply(float number1, float number2);
void divide(float number1, float number2);
void subtract(float number1, float number2);
main()
{
     while(true)
    {
     float number1;
     float number2;
     char operation;
     cout << " Enter first number:  ";
     cin >> number1;
     cout << "enter second number:  ";
     cin >> number2;
     cout << " Enter an operation(+,-,*,/) ";
     cin >> operation;
     if (operation== '+')
     {
          add(number1, number2);
     }
     if (operation== '*')
     {
          multiply(number1, number2);
     }
     if (operation== '/')
     {
          divide(number1, number2);
     }
     if (operation== '-')
     {
          subtract(number1, number2);
     }
     }
}
void add(float number1, float number2)
{

     float sum = number1 + number2;
     cout << "sum is: " << sum << endl;
}
void multiply(float number1, float number2)
{
     float multiply = number1 * number2;
     cout << "multiplication is: " << multiply << endl;
}
void divide(float number1, float number2)
{
     float divide = number1 / number2;
     cout << "division is:" << divide << endl;
}
void subtract(float number1, float number2)
{
     float subtract = number1 - number2;
     cout << "subtraction is:" << subtract;
}
