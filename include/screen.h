#ifndef SCREEN_H
#define SCREEN_H
#include "types.h"
#include "system.h"
#include "string.h"

//Global Variable Definitions

int cursorX   , cursorY ;
//screen width (80 cols)  , heigth (25 lines ) , depth (2 byte)
const uint8 sw, sh, sd  ;

//Prototypes Definiton
void clearLine(uint8 from, uint8 to);
//define fucniton s as "external void updateCursor();"
// put body in screen.c file
void updateCursor();

void clearScreen();

void scrollUp(uint8 lineNumber);

void newLineCheck();

void printch(char c);

void print(string ch);

#endif
