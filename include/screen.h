#ifndef SCREEN_H
#define SCREEN_H
#include "types.h"
#include "system.h"
#include "string.h"

int cursorX = 0 , cursorY = 0;
//screen width (80 cols)  , heigth (25 lines ) , depth (2 byte)
const uint8 sw = 80 , sh = 25 , sd = 2;

void clearLine(uint8 from, uint8 to)
{	//start wert im screen buffer
	uint16 i = sw * from * sd;
	string vidmem = (string) 0xb8000;
	for (i; i < (sw*(to+1)*sd); i++)
	{
		vidmem[i] = 0x0;
	}
}
//define fucniton s as "external void updateCursor();"
// put body in screen.c file
void updateCursor()
{
	unsigned temp;
	temp = cursorY * sw + cursorX;
	outportb(0x3D4, 14);			//CRT Control Register: Select Cursor Location
	outportb(0x3D5, temp >> 8);		// Send highbyte
	outportb(0x3D4, 15);			//CRT Control Register: Select Send Low Byte
	outportb(0x3D4, temp);			// Send lowbyte of the Cursor Location
}

void clearScreen()
{
	clearLine(0,sh-1);
	cursorX = 0;
	cursorY = 0;
	updateCursor();

}

void scrollUp(uint8 lineNumber)
{
	string vidmem = (string) 0xb8000;
	uint16 i = 0;
	for(i;i<sw*(sh-1)*sd; i++)
		vidmem[i] = vidmem[i+sw*sd*lineNumber];
	clearLine(sh-1-lineNumber,sh-1);
	if ((cursorY - lineNumber) < 0 )
	{
		cursorY = 0;
		cursorX = 0;
	}
	else
	{
		cursorY -= lineNumber;		
	}
	updateCursor();

}

void newLineCheck()
{
	if ( cursorY >= sh-1)
		scrollUp(1);
}


void printch(char c)
{
	string vidmem = (string) 0xb8000;
	switch (c)
	{
		case (0x08): 			//Backsapce Key entered
			if ( cursorX > 0 )
			{
				cursorX --;
				vidmem[(cursorY *sw + cursorX) * sd] = 0x00;

			}
			break;
		case (0x09):			// TAB Key
			cursorX = cursorX + 8 & ~(8 - 1) ;
			break;
		case ('\r'):
			cursorX = 0;
			break;
		case ('\n'):
			cursorX = 0;
			cursorY ++;
			break;
		default:
			vidmem[(cursorY *sw + cursorX) * sd] = c;
			vidmem[(cursorY *sw + cursorX) * sd + 1] = 0x07;
			cursorX ++;
			break;
	} // end switch (c)
	if (cursorX >= sw) 
	{
		cursorX = 0;
		cursorY ++;
	}
	newLineCheck();
	updateCursor();
}


void print(string ch) 
{
	uint16 i = 0; 
	uint16 length = strlength(ch); 
	for (i; i<length; i ++)
	{
		printch(ch[i]);
	}
}



#endif
