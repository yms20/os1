#include "include/screen.h"
#include "include/kb.h"
#include "include/isr.h"
#include "include/idt.h"

kmain()
{
	isr_install();
	clearScreen();
	print("Wellcome to Opperations System: \n");

	while (1)
	{
		print("\nos> ");




		string ch = readStr();

		string lengthstr; 
		int2str ( strlength (ch), lengthstr);
		print("\n strlength: "); print( lengthstr ) ;
		print("\n You entered: "); print (ch);

		if (strEql(ch,"quit"))
		{
			halt();
		}
		if (strEql(ch,"interrupt0"))
		{
			print("\nExecuting a Division By Zero:\n");
			uint16 test = 7 / 0;
		}




	}
}
