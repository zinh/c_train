	section .data
	msg db "Hello, world!"
	
	section .text
	global _main
_main:
	mov rax, 0x02000004
	mov rdi,	 1
	mov rsi, msg
	mov rdx, 13
	syscall
	mov      rax, 0x02000001
	xor      rdi, rdi
	syscall
