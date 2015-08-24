#include "include/screen.h"
#include "include/kb.h"
#include "include/isr.h"
#include "include/idt.h"

kmain()
{
	isr_install();
	clearScreen();
	print("Wellcome to Opperations System One: \n");

	while (1)
	{
		print("\nos> ");
	
		string ch = readStr();

		if (strEql(ch,"help"))
		{
			print ("\n --------  HELP  -------- ");
			print ("\n Current OS1 commads are :  ");
			print ("\n");
			print ("\n quit       - ends kernel loop");
			print ("\n numbers    - convert integer to char representation and print");
			print ("\n interrupt0 - executes a dvision by Zero");
		}
		if (strEql(ch,"quit"))
		{
			halt();
		}
		if (strEql (ch, "numbers"))
		{

			string lengthstr; 
			int2str ( 1012, lengthstr);
			print("\n int2str (1012) : "); print ( lengthstr);
			int2str ( -2312, lengthstr);
			print("\n int2str (-3212) : "); print ( lengthstr);
			print("\n"); print ( (string) toStr(74123047));
			int2str ( strlength (ch), lengthstr);
			print("\n strlength: "); print( lengthstr ) ;
			print("\n You entered: "); print (ch);


		}
		if (strEql(ch,"interrupt0"))
		{
			print("\nExecuting a Division By Zero:\n");
			uint16 test = 7 / 0;
		}




	}
}
