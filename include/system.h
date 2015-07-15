#ifndef SYSTEM_H
#define SYSTEM_H
#include "types.h"
//Wert auslesen an Adresse _port
uint8 inportb (uint16 _port)
{
	uint8 rv;
	__asm__ __volatile__ ("inb %1, %0" : "=a" (rv) : "dN" (_port));
	return rv;
}

//Wert schreiben an Adresse _prt , wert _data
void outportb(uint16 _port, uint8 _data)
{
	__asm__ __volatile__ ("outb %1, %0" : : "dN" (_port), "a" (_data));
}

void halt() 
{
	__asm__ __volatile__ ( "hlt" );
}

#endif

