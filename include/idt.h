// interrupts definition table

#ifndef IDT_H
#define IDT_H

#include "types.h"

#define KERNEL_CS 0x08
#define IDT_ENTRIES 256

typedef struct 
{
	uint16 low_offset;
	uint16 sel; 			// selector
	uint8 always0; 			//ring (wether kernel space or user space
	uint8 flags;
	uint16 high_offset;
} __attribute__((packed)) idt_gate_t ;		

// __attribute__((packed)) - means no extra garbage by compiler!

typedef struct 
{
	uint16 limit ; // size of idt array
	uint32 base ;  // address of the first element of the idt array 
} __attribute__((packed)) idt_register_t ;

//256 gates and a register
idt_gate_t 		idt[IDT_ENTRIES];
idt_register_t 	idt_reg;

// Function Definitions 
void set_idt_gate(int n, uint32 handler);
void set_idt();

#endif
