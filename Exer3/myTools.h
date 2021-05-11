#include <windows.h>

void gotoxy(int x, int y);

void center(int row, char str[]);
/*
centers text across the screen
-calculate here for the center col using
the formula col=(80-strlen(str))/2;
-then use gotoxy(col,row) to print the value in string
str
*/

void outString(int col,int row,char str[]);
/* outputs the string str at the specified col and row nos. */

void drawSBox(int x1,int y1, int x2, int y2);
/* draws a single-line box */

void drawDBox(int x1,int y1, int x2, int y2);
/* draws a double-line box */
