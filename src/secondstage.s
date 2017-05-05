[BITS 32]
ALIGNt equ 1
MEMINFO equ (1<<1)
FLAGS equ (ALIGNt | MEMINFO)
MAGIC equ (0x1BADB002)
CHECKSUM equ (-(MAGIC + FLAGS))


[SECTION .multiboot]
ALIGN 4
dd MAGIC
dd FLAGS
dd CHECKSUM


[SECTION .bss]
ALIGN 16
stack_bottom:
resb 16384
stack_top:

[SECTION .text]
extern kmain
GLOBAL _start:function
_start:
mov esp, stack_top

setGdt:
   MOV   EAX, gdt
   MOV   [gdtr + 2], EAX
   MOV   EAX, gdt_end
   SUB	 EAX, gdt
   MOV   [gdtr], ax
   LGDT  [gdtr]
mov eax, cr0
or eax, 1
mov cr0, eax

 
reloadSegments:
	;;  Reload CS register containing code selector:
	   jmp   0x08:reload_CS
	reload_CS:
	;;  Reload data segment registers:
	   mov   ax, 0x10
	   mov   ds, ax
	   mov   es, ax
	   mov   fs, ax
	   mov   gs, ax
	   mov   ss, ax
	   cli

	checkcpuidsupport:
		pushfd
    	pushfd
    	xor dword [esp],00200000h
    	popfd
    	pushfd
    	pop eax
		xor eax,[esp]
		popfd
	    and eax,00200000h
		jnz begin
		jmp checkcpuidsupport
	begin:





 ;Do nothing loop
main:
call kmain

 loop:
hlt
jmp loop



 gdt:
dq 0x0000000000000000
dq 0x00CF9A000000FFFF
dq 0x00CF92000000FFFF
dq 0x00CFFA000000FFFF
dq 0x00CFF2000000FFFF
 gdt_end:

gdtr:
dw 0
dd 0