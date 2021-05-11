#include <windows.h>

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void center(int rot, char str[])
{

}


void outString(int col, int row, char str[])
{

}

void drawSBox(int x1, int y1, int x2, int y2)
{

}

void drawDBox(int x1, int y1, int x2, int y2)
{
    
}