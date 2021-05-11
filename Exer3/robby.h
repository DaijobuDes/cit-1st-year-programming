#pragma once

char printCommand(void); //- displays the menu of commands and accepts and returns the choice.
void initialize(int *x,int *y); // - initializes the two points back to the point of origin, 0,0.
void printLocation(int x,int y); // - prints the current location of Robby.
void move(int *x, int *y); // - reads and displays the direction and the distance, computes the current location of  Robby.
void Exit(void); // - prints a message of termination.

