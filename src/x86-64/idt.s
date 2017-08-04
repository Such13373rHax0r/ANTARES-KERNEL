[BITS 32]
[SECTION .text]
extern sendEOI
GLOBAL int0handler:function
int0handler:
pushad
mov eax, 0xB8000
mov byte [eax], 'A'
;CODE HERE
popad
iret
GLOBAL int1handler:function
int1handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int2handler:function
int2handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int3handler:function
int3handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int4handler:function
int4handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int5handler:function
int5handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int6handler:function
int6handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int7handler:function
int7handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int8handler:function
int8handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int9handler:function
int9handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int10handler:function
int10handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int11handler:function
int11handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int12handler:function
int12handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int13handler:function
int13handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int14handler:function
int14handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int15handler:function
int15handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL int16handler:function
int16handler:
pushad
mov eax, 0Ah
;CODE HERE
popad
iret

GLOBAL irq0handler:function
irq0handler:
pushad
mov eax, 0Bh
;CODE HERE
push 0
call sendEOI
popad
iret

GLOBAL irq1handler:function
irq1handler:
pushad
mov eax, 0Bh
;CODE HERE
push 1
call sendEOI
popad
iret

GLOBAL irq2handler:function
irq2handler:
pushad
mov eax, 0Bh
;CODE HERE
push 2
call sendEOI
popad
iret

GLOBAL irq3handler:function
irq3handler:
pushad
mov eax, 0Bh
;CODE HERE
push 3
call sendEOI
popad
iret

GLOBAL irq4handler:function
irq4handler:
pushad
mov eax, 0Bh
;CODE HERE
push 4
call sendEOI
popad
iret

GLOBAL irq5handler:function
irq5handler:
pushad
mov eax, 0Bh
;CODE HERE
push 5
call sendEOI
popad
iret

GLOBAL irq6handler:function
irq6handler:
pushad
mov eax, 0Bh
;CODE HERE
push 6
call sendEOI
popad
iret

GLOBAL irq7handler:function
irq7handler:
pushad
mov eax, 0Bh
;CODE HERE
push 7
call sendEOI
popad
iret

GLOBAL irq8handler:function
irq8handler:
pushad
mov eax, 0Bh
;CODE HERE
push 8
call sendEOI
popad
iret

GLOBAL irq9handler:function
irq9handler:
pushad
mov eax, 0Bh
;CODE HERE
push 9
call sendEOI
popad
iret

GLOBAL irq10handler:function
irq10handler:
pushad
mov eax, 0Bh
;CODE HERE
push 10
call sendEOI
popad
iret

GLOBAL irq11handler:function
irq11handler:
pushad
mov eax, 0Bh
;CODE HERE
push 11
call sendEOI
popad
iret

GLOBAL irq12handler:function
irq12handler:
pushad
mov eax, 0Bh
;CODE HERE
push 12
call sendEOI
popad
iret

GLOBAL irq13handler:function
irq13handler:
pushad
mov eax, 0Bh
;CODE HERE
push 13
call sendEOI
popad
iret

GLOBAL irq14handler:function
irq14handler:
pushad
mov eax, 0Bh
;CODE HERE
push 14
call sendEOI
popad
iret

GLOBAL irq15handler:function
irq15handler:
pushad
mov eax, 0Bh
;CODE HERE
push 15
call sendEOI
popad
iret

GLOBAL int0x80handler:function
int0x80handler:
pushad
mov eax, 0Ch
;CODE HERE
popad
iret

