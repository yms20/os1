#ifndef SYSTEM_H
#define SYSTEM_H
#include "types.h"
//Wert auslesen an Adresse _port
uint8 inportb (uint16 _port);

//Wert schreiben an Adresse _prt , wert _data
void outportb(uint16 _port, uint8 _data);

void halt() ;

#endif

