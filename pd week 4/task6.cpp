#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x , int y);
main()
{
   system("cls");
   gotoxy(25 , 15);
   cout<< " A "<<endl;
   gotoxy(25,16);
   cout<< " W "<<endl;
   gotoxy(25,17);
   cout<< " A "<<endl;
   gotoxy(25,18);
   cout<< " I "<<endl;
   gotoxy(25,19);
   cout<< " S ";
}
void gotoxy(int x , int y)
{
   COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates) ;
}
  


   
  