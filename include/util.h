#ifndef UTIL_H
#define UTIL_H

#include "types.h"

void memory_copy(char* source, char * dest, int nbytes);
void memory_set(uint8 *dest, uint8 val, uint8 len);
void int2str(int n,char str[]);
string toStr(int n);
#endif