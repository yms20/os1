#include "util.h"

void memory_copy(char* source, char * dest, int nbytes)
{
	int i;
	for (i;i< nbytes; i++)
		*(dest + i ) = *(source + i); // zeigerarithmetik
}

void memory_set(uint8 *dest, uint8 val, uint8 len)
{
	uint8 *temp = (uint8*) dest;
	for ( ; len >= 0 ; len --) *temp++ = val;
}

void int2str(int n,char str[])
{
	int i, sign;
	//merke vorzeichen, mach n positiv
	if ((sign = n) < 0) n = -n;
	i = 0; 
	do {
		str[i++] = n % 10 + '0';
	}while ((n /= 10) > 0);

	if (sign < 0) str[i++] = '-';
	str[i] = '\0';
}
