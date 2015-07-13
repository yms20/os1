kmain()
{
	char * vidmem = (char*) 0xb8000;
	vidmem[0] = 'K';
	vidmem[1] = 0x21;
}
