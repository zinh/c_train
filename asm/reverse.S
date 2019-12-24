	section .data
	SYS_EXIT equ 0x02000001
	SYS_WRITE equ 0x02000004
	INPUT db "Hello world!"

	section .bss
	OUTPUT resb 12

	section .text
	global _start
_start:
	
