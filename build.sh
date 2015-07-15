#!/bin/bash
pwd

nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c kernel.c -o kc.o -ffreestanding
ld -m elf_i386 -T link.ld -o kernel.bin kasm.o kc.o

echo "Build Done!"
#qemu-system-i386 -kernel kernel.bin

