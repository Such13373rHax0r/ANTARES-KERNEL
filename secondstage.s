[BITS 16]
cli


xor eax, eax
mov ax, ds
shl eax, 4
add eax, gdt
mov [gdtr + 2], eax
mov eax, gdt_end
sub eax, gdt
mov [gdtr], ax
lgdt [gdtr]
mov eax, cr0
or eax, 1
mov cr0, eax

 
reloadSegments:
	;;  Reload CS register containing code selector:
	   JMP   0x08:0x7E00 ; 0x08 points at the new code selector
	reload_CS:
	[BITS 32]
	;;  Reload data segment registers:
	   MOV   AX, 0x10 	; 0x10 points at the new data selector
	   MOV   DS, AX
	   MOV   ES, AX
	   MOV   FS, AX
	   MOV   GS, AX
	   MOV   SS, AX

 ;Do nothing loop
 loop:
 mov eax, 0deadbeefh
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
