#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
void erase(int x, int y);
void clear(int x, int y, char previous);
void clear1(int gx, int gy, char previous);
char getCharAtxy(short int x, short int y);
void printPacman(int x, int y);
void printGhost(int x, int y);
void printGhost1(int x, int y);
int main()
{
    int x = 3;
    int y = 3;
    int gx = 4;
    int gy = 4;
    int pacmanX = 5;
    int pacmanY = 5;
    bool gameRunning = true;
    system("cls");
    printMaze();
    string direction = "right";
    char previousChar = ' ';
    printGhost(x, y);
    printGhost1(gx, gy);
    printPacman(pacmanX, pacmanY);
    while (gameRunning)
    {
        if (direction == "right")
        {
            char nextLocation = getCharAtxy(x + 1, y);
            if (nextLocation == '%')
            {
                direction = "left";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(x, y, previousChar);
                x = x + 1;
                previousChar = nextLocation;
                printGhost(x, y);
            }
        }
        if (direction == "left")
        {
            char nextLocation = getCharAtxy(x - 1, y);
            if (nextLocation == '%')
            {
                direction = "right";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(x, y, previousChar);
                x = x - 1;
                previousChar = nextLocation;
                printGhost(x, y);
            }
        }
        if (direction == "up")
        {
            char nextLocation = getCharAtxy(gx, gy - 1);
            if (nextLocation == '%')
            {
                direction = "down";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear1(gx, gy, previousChar);
                gy = gy - 1;
                previousChar = nextLocation;
                printGhost(gx, gy);
            }
        }
        if (direction == "down")
        {
            char nextLocation = getCharAtxy(gx, gy + 1);
            if (nextLocation == '%')
            {
                direction = "up";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear1(gx, gy, previousChar);
                gy = gy + 1;
                previousChar = nextLocation;
                printGhost(gx, gy);
            }
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            {
                if (nextLocation == ' ')
                    erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            {
                if (nextLocation == ' ')
                    erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        Sleep(200);
    }
}
void printMaze()
{
    cout << "%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "%                   %" << endl;
    cout << "%   .          .    %" << endl;
    cout << "%                   %" << endl;
    cout << "%                   %" << endl;
    cout << "%                   %" << endl;
    cout << "%                   %" << endl;
    cout << "%                   %" << endl;
    cout << "%                   %" << endl;
    cout << "%                   %" << endl;
    cout << "%                   %" << endl;
    cout << "%                   %" << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%" << endl;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printGhost(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
void printGhost1(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
void clear(int x, int y, char previous)
{
    gotoxy(x, y);
    cout << previous;
}
void clear1(int x, int y, char previous)
{
    gotoxy(x, y);
    cout << previous;
}
void erase(int x, int y)
{
    gotoxy(x, y);
    cout << ' ';
}
void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
                                                                                            : ' ';
}
