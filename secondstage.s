[BITS 16]
[ORG 0x7E00]
cli
jmp readBootIden
setA20:
mov al, 0xAD
out 0x64, al
mov al, 0xD0
out 0x64, al
in al, 0x60
push eax
mov al, 0xD1
out 0x64, al
pop eax
out 0x60, al
mov al, 0xAE
out 0x64, al
this equ 0x0000:0x7DFE
that equ 0xFFFF:0x7E0E
readBootIden:
xor ax, ax
xor bx, bx
mov ax, [this]
mov bx, [that]
cmp ax, bx
jne exit
mov word [this], 55aah
xor ax, ax
xor bx, bx
mov ax, [this]
mov bx, [that]
cmp ax, bx
je setA20
exit:


setGdt:
   XOR   EAX, EAX
   MOV   AX, DS
   SHL   EAX, 4
   ADD   EAX, gdt
   MOV   [gdtr + 2], eax
   MOV   EAX, gdt_end
   SUB   EAX, gdt
   MOV   [gdtr], AX
   LGDT  [gdtr]
mov eax, cr0
or eax, 1
mov cr0, eax

 
reloadSegments:
	;;  Reload CS register containing code selector:
	   jmp   0x08:0x7E78
	reload_CS:
	[BITS 32]
	;;  Reload data segment registers:
	   mov   ax, 0x10
	   mov   ds, ax
	   mov   es, ax
	   mov   fs, ax
	   mov   gs, ax
	   mov   ss, ax


 ;Do nothing loop
mov [printLoc], 0
mov cl, '-'
call clearScreen
mov cl, ' '
call clearScreen
mov ecx, msg
call print

mov eax, 0deadbeefh
 loop:
hlt
jmp loop

 printLoc equ 0xdead
 printChrAt:
 mov eax, 0xB8000
 
 mov [eax] cl


 print:
 push eax
 push ebx
 mov eax, 0xB8000
 mov ebx, 0xFA0
 printLoop:
 mov byte dl, [ecx]
 mov byte [eax], dl
 inc eax
 mov byte [eax], 0x1F
 inc eax
 inc dl
 cmp byte [ecx], 0
 jne clearScreenLoop
 pop ebx
 pop eax
 ret


 clearScreen:
 push eax
 push ebx
 mov eax, 0xB8000
 mov ebx, 0xFA0
 clearScreenLoop:
 mov byte [eax], cl
 inc eax
 mov byte [eax], 0x1F
 inc eax
 sub ebx, 1
 jnz clearScreenLoop
 pop ebx
 pop eax
 ret

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

msg:
dw 'SK LOADER'
db 0