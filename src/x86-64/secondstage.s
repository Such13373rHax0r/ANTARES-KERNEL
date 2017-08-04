[bits 32]


[SECTION .multiboot]
header_start:
    dd 0xe85250d6                ; magic number
    dd 0                         ; protected mode code
    dd header_end - header_start ; header length

    ; checksum
    dd 0x100000000 - (0xe85250d6 + 0 + (header_end - header_start))
header_end:


[SECTION .bss]
ALIGN 16
stack_bottom:
resb 16384
stack_top:

[SECTION .text]
extern kmain
extern create_interruptDescriptorTable
extern init_paging
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
;xchg bx, bx
mov eax, 0x80000001
cpuid
and edx, 0x20000000
jz loop
xor eax, eax
mov eax, cr4
or eax, 0x20
mov cr4, eax
call create_interruptDescriptorTable
mov edi, 0x1000
mov cr3, edi
xor eax, eax
mov ecx, 4096
rep stosd
mov edi, cr3
mov DWORD [edi], 0x2003
add edi, 0x1000
mov DWORD [edi], 0x3003
add edi, 0x1000
mov DWORD [edi], 0x4003
add edi, 0x1000
mov ebx, 0x00000003
mov ecx, 512
.SetEntry:
    mov DWORD [edi], ebx
    add ebx, 0x1000
    add edi, 8
    loop .SetEntry
mov eax, cr4
or eax, 1 << 5
mov cr4, eax
mov eax, 0xC0000080
rdmsr
or eax, 0x100
wrmsr
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