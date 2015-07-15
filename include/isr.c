#include "isr.h"
#include "idt.h"
#include "system.h"
#include "screen.h"
#include "util.h"

void isr_install()
{
	set_idt_gate(0 , (uint32)isr0 );
	set_idt_gate(1 , (uint32)isr1 );
	set_idt_gate(2 , (uint32)isr2 );
	set_idt_gate(3 , (uint32)isr3 );
	set_idt_gate(4 , (uint32)isr4 );
	set_idt_gate(5 , (uint32)isr5 );
	set_idt_gate(6 , (uint32)isr6 );
	set_idt_gate(7 , (uint32)isr7 );
	set_idt_gate(8 , (uint32)isr8 );
	set_idt_gate(9 , (uint32)isr9 );

	set_idt_gate(10 , (uint32)isr10 );
	set_idt_gate(11 , (uint32)isr11 );
	set_idt_gate(12 , (uint32)isr12 );
	set_idt_gate(13 , (uint32)isr13 );
	set_idt_gate(14 , (uint32)isr14 );
	set_idt_gate(15 , (uint32)isr15 );
	set_idt_gate(16 , (uint32)isr16 );
	set_idt_gate(17 , (uint32)isr17 );
	set_idt_gate(18 , (uint32)isr18 );
	set_idt_gate(19 , (uint32)isr19 );

	set_idt_gate(20 , (uint32)isr20 );
	set_idt_gate(21 , (uint32)isr21 );
	set_idt_gate(22 , (uint32)isr22 );
	set_idt_gate(23 , (uint32)isr23 );
	set_idt_gate(24 , (uint32)isr24 );
	set_idt_gate(25 , (uint32)isr25 );
	set_idt_gate(26 , (uint32)isr26 );
	set_idt_gate(27 , (uint32)isr27 );
	set_idt_gate(28 , (uint32)isr28 );
	set_idt_gate(29 , (uint32)isr29 );

	set_idt_gate(30 , (uint32)isr30 );
	set_idt_gate(31 , (uint32)isr31 );

	set_idt();
}

void isr0()
{
	print(exception_messages[0]);
	halt();
}
void isr1()
{
	print(exception_messages[1]);
	halt();
}
void isr2()
{
	print(exception_messages[2]);
	halt();
}
void isr3()
{
	print(exception_messages[3]);
	halt();
}
void isr4()
{
	print(exception_messages[4]);
	halt();
}
void isr5()
{
	print(exception_messages[5]);
	halt();
}
void isr6()
{
	print(exception_messages[6]);
	halt();
}
void isr7()
{
	print(exception_messages[7]);
	halt();
}
void isr8()
{
	print(exception_messages[8]);
	halt();
}
void isr9()
{
	print(exception_messages[9]);
	halt();
}
void isr10()
{
	print(exception_messages[10]);
	halt();
}
void isr11()
{
	print(exception_messages[11]);
	halt();
}
void isr12()
{
	print(exception_messages[12]);
	halt();
}
void isr13()
{
	print(exception_messages[13]);
	halt();
}
void isr14()
{
	print(exception_messages[14]);
	halt();
}
void isr15()
{
	print(exception_messages[15]);
	halt();
}
void isr16()
{
	print(exception_messages[16]);
	halt();
}
void isr17()
{
	print(exception_messages[17]);
	halt();
}
void isr18()
{
	print(exception_messages[18]);
	halt();
}
void isr19()
{
	print(exception_messages[19]);
	halt();
}
void isr20()
{
	print(exception_messages[20]);
	halt();
}
void isr21()
{
	print(exception_messages[21]);
	halt();
}
void isr22()
{
	print(exception_messages[22]);
	halt();
}
void isr23()
{
	print(exception_messages[23]);
	halt();
}
void isr24()
{
	print(exception_messages[24]);
	halt();
}
void isr25()
{
	print(exception_messages[25]);
	halt();
}
void isr26()
{
	print(exception_messages[26]);
	halt();
}
void isr27()
{
	print(exception_messages[27]);
	halt();
}
void isr28()
{
	print(exception_messages[28]);
	halt();
}
void isr29()
{
	print(exception_messages[29]);
	halt();
}
void isr30()
{
	print(exception_messages[30]);
	halt();
}
void isr31()
{
	print(exception_messages[31]);
	halt();
}


string exception_messages[] = {
	"Division by Zero",
	"Debug",
	"Non Maskable Interrupt",
	"Breakpoint",
	"Into Detected Overflow",
	"Out of Bounds",
	"Invalid Opcode",
	"No Coprocessor",

	"Double Fault",
	"Coprocessor Segment Overrun",
	"Bad TSS",
	"Segment Not Present",
	"Stack Fault",
	"General Protection Fault",
	"Page Pault",
	"Unknown Interrupt",

	"Coprocessor Fault",
	"Alignment Check",
	"Machine Check",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",

	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved"};
