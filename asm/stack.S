	section .data
	msg db "Hello, world!"
	SYS_EXIT equ 0x02000001
	SYS_WRITE equ 0x02000004
	
	section .text
	global _main
_main:
	mov rax, 1
	call incRax
	cmp rax, 2
	je printf1
	
incRax:
	inc rax
	ret
	
exit:
	mov      rax, SYS_EXIT
	xor rdi, rdi
	syscall

printf2:
	mov rax, SYS_WRITE
	mov rdi, 1
	mov rsi, msg
	mov rdx, 13
	syscall
	jmp exit

printf1:
	push msg
	call printf
