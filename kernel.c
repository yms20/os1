#include "include/screen.h"
#include "include/kb.h"
kmain()
{
	clearScreen();
	print("Wellcome to Opperations System: \n");

	while (1)
	{
		print("\nos> ");




		string ch = readStr();

		if (strEql(ch,"quit"))
		{
			halt();
		}
		string lengthstr; 
		int2str ( strlength (ch), lengthstr);
		print("\n strlength: "); print( lengthstr ) ;
		print("\n You entered: "); print (ch);
	}
}
