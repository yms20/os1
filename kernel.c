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

		print("\n strlength: "); print( "int2string: not implemented yet!" ) ;
		print("\n You entered: "); print (ch);
	}
}
