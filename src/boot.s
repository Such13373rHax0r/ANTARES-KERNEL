[BITS 16]
[ORG 0x7C00]
%define secondStageSize 12
%define secondStageSectorNum (secondStageSize/512) | 1
;Print SK to show that SKLoader is functioning
mov ah, 03h
int 10h
mov ah, 0eh
mov al, 'S'
int 10h
mov al, 'K'
int 10h
 reset:
mov ah, 0
int 13h
jc reset
read:
mov ah, 0x02
mov al, secondStageSectorNum
mov ch, 0x00
mov cl, 0x02
mov dh, 0x00
mov dl, 0x80
mov bx, 0x7E00
 error.readsector:
int 0x13
jc error
 
mov ax, 0x0
mov ds, ax
jmp 0x0000:0x7E00
 error:
 mov ah, 10h
 mov al, 'E'
 int 10h
 mov al, 'r'
 int 10h
 mov al, 'r'
 int 10h
 mov al, 'o'
 int 10h
 mov al, 'r'
 int 10h
jmp .readsector
 
;Do nothing to prevent data from executing
a: hlt
jmp a

 
 
times 510-($-$$) db 0
dw 0aa55h

