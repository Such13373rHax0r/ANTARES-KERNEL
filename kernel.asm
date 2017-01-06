.set ALIGN,    1<<0
.set MEMINFO,  1<<1
.set FLAGS,    ALIGN | MEMINFO
.set MAGIC,    0x1BADB002
.set CHECKSUM, -(MAGIC + FLAGS)

.section .multiboot
.align 4
.long MAGIC
.long FLAGS
.long CHECKSUM

.section .bss
.align 16
stack_bottom:
.skip 16384 # 16 KiB
stack_top:

.section .data


.section .text
.global _start
.type _start, @function
_start:
	mov $0x10, %ax
	mov %ax, %ds
	mov %ax, %fs
	mov %ax, %es
	mov %ax, %gs
	mov %ax, %ss
	ljmp $0x8, next
	next:
	mov $stack_top, %esp
	call kmain

	cli
lp:	hlt
	jmp lp

.size _start, . - _start
