#!/bin/bash
pwd

nasm -f elf32 kernel.asm -o obj/kasm.o

gcc -m32 -c kernel.c -o obj/kc.o -ffreestanding
gcc -m32 -c include/system.c -o obj/system.o -ffreestanding
gcc -m32 -c include/string.c -o obj/string.o -ffreestanding
gcc -m32 -c include/screen.c -o obj/screen.o -ffreestanding
gcc -m32 -c include/kb.c     -o obj/kb.o 	 -ffreestanding
gcc -m32 -c include/util.c     -o obj/util.o 	 -ffreestanding
gcc -m32 -c include/idt.c     -o obj/idt.o 	 -ffreestanding

ld -m elf_i386 -T link.ld -o bin/kernel.bin obj/kasm.o obj/kc.o obj/system.o obj/string.o obj/screen.o obj/kb.o obj/util.o obj/idt.o

echo "Build Done!"
#qemu-system-i386 -kernel kernel.bin
#grub-mkrescue -o os1.iso bin/
