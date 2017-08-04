#include "idt.h"
idt_entry_t idtt[256];
idt_pointer_t idtp;
extern void int0handler();
extern void int1handler();
extern void int2handler();
extern void int3handler();
extern void int4handler();
extern void int5handler();
extern void int6handler();
extern void int7handler();
extern void int8handler();
extern void int9handler();
extern void int10handler();
extern void int11handler();
extern void int12handler();
extern void int13handler();
extern void int14handler();
extern void int15handler();
extern void int16handler();
extern void irq0handler();
extern void irq1handler();
extern void irq2handler();
extern void irq3handler();
extern void irq4handler();
extern void irq5handler();
extern void irq6handler();
extern void irq7handler();
extern void irq8handler();
extern void irq9handler();
extern void irq10handler();
extern void irq11handler();
extern void irq12handler();
extern void irq13handler();
extern void irq14handler();
extern void irq15handler();
extern void int0x80handler();

/*
void irq0handler (struct idt_frame_t *frame) {
    sendEOI(0);
}
void irq1handler (struct idt_frame_t *frame) {
    sendEOI(1);
}
void irq2handler (struct idt_frame_t *frame) {
    sendEOI(2);
}
void irq3handler (struct idt_frame_t *frame) {
    sendEOI(3);
}
void irq4handler (struct idt_frame_t *frame) {
    sendEOI(4);
}
void irq5handler (struct idt_frame_t *frame) {
    sendEOI(5);
}
void irq6handler (struct idt_frame_t *frame) {
    sendEOI(6);
}
void irq7handler (struct idt_frame_t *frame) {
    sendEOI(7);
}
void irq8handler (struct idt_frame_t *frame) {
    sendEOI(8);
}
void irq9handler (struct idt_frame_t *frame) {
    sendEOI(9);
}
void irq10handler (struct idt_frame_t *frame) {
    sendEOI(10);
}
void irq11handler (struct idt_frame_t *frame) {
    sendEOI(11);
}
void irq12handler (struct idt_frame_t *frame) {
    sendEOI(12);
}
void irq13handler (struct idt_frame_t *frame) {
    sendEOI(13);
}
void irq14handler (struct idt_frame_t *frame) {
    sendEOI(14);
}
void irq15handler (struct idt_frame_t *frame) {
    sendEOI(15);
}

//Non error code interrupts
void int0handler(struct idt_frame_t *frame) {
    kprint("DivByZero");
}
void int1handler(struct idt_frame_t *frame) {

}
void int2handler(struct idt_frame_t *frame) {

}
void int3handler(struct idt_frame_t *frame) {

}
void int4handler(struct idt_frame_t *frame) {

}
void int5handler(struct idt_frame_t *frame) {

}
void int6handler(struct idt_frame_t *frame) {

}
void int7handler(struct idt_frame_t *frame) {

}
void int9handler(struct idt_frame_t *frame) {

}
void int16handler(struct idt_frame_t *frame) {

}

//Error code interrupts
void int8handler(struct idt_frame_t *frame) {

}
void int10handler(struct idt_frame_t *frame) {

}
void int11handler(struct idt_frame_t *frame) {

}
void int12handler(struct idt_frame_t *frame) {

}
void int13handler(struct idt_frame_t *frame) {

}
void int14handler(struct idt_frame_t *frame) {

}
void int15handler(struct idt_frame_t *frame) {

}

//"Syscalls"
void int0x80handler(struct idt_frame_t *frame) {

}
*/

/*
struct idt_entry_struct
{
    u16int base_lo;             // The lower 16 bits of the address to jump to when this interrupt fires.
    u16int sel;                 // Kernel segment selector.
    u8int  always0;             // This must always be zero.
    u8int  flags;               // More flags. See documentation.
    u16int base_hi;             // The upper 16 bits of the address to jump to.
} __attribute__((packed));

typedef struct idt_entry_struct idt_entry_t;
*/
void create_descriptor(void *offset, uint16_t selector, uint8_t type, uint16_t num) {
    idtt[num].base_lo = ((int)offset) & 0xFFFF;
    idtt[num].sel = selector;
    idtt[num].always0 = 0;
    idtt[num].flags = (type | 128);
    idtt[num].base_hi = (((int)offset) >> 16) & 0xFFFF;

}
void create_interruptDescriptorTable() {
    //Exceptions
    create_descriptor(&int0handler,  0x8, 0xe,  0);
    create_descriptor(&int1handler,  0x8, 0xe,  1);
    create_descriptor(&int2handler,  0x8, 0xe,  2);
    create_descriptor(&int3handler,  0x8, 0xe,  3);
    create_descriptor(&int4handler,  0x8, 0xe,  4);
    create_descriptor(&int5handler,  0x8, 0xe,  5);
    create_descriptor(&int6handler,  0x8, 0xe,  6);
    create_descriptor(&int7handler,  0x8, 0xe,  7);
    create_descriptor(&int8handler,  0x8, 0xe,  8);
    create_descriptor(&int9handler,  0x8, 0xe,  9);
    create_descriptor(&int10handler, 0x8, 0xe, 10);
    create_descriptor(&int11handler, 0x8, 0xe, 11);
    create_descriptor(&int12handler, 0x8, 0xe, 12);
    create_descriptor(&int13handler, 0x8, 0xe, 13);
    create_descriptor(&int14handler, 0x8, 0xe, 14);
    create_descriptor(&int15handler, 0x8, 0xe, 15);
    create_descriptor(&int16handler, 0x8, 0xe, 16);


    //Software
    create_descriptor(&int0x80handler, 0x8, 0xe, 0x80);


    //IRQs
    #define irq1offset 32
    #define irq2offset 40
    create_descriptor(&irq0handler, 0x8, 0xe, 0+irq1offset);
    create_descriptor(&irq1handler, 0x8, 0xe, 1+irq1offset);
    create_descriptor(&irq2handler, 0x8, 0xe, 2+irq1offset);
    create_descriptor(&irq3handler, 0x8, 0xe, 3+irq1offset);
    create_descriptor(&irq4handler, 0x8, 0xe, 4+irq1offset);
    create_descriptor(&irq5handler, 0x8, 0xe, 5+irq1offset);
    create_descriptor(&irq6handler, 0x8, 0xe, 6+irq1offset);
    create_descriptor(&irq7handler, 0x8, 0xe, 7+irq1offset);
    create_descriptor(&irq8handler, 0x8, 0xe, 8+irq2offset);
    create_descriptor(&irq9handler, 0x8, 0xe, 9+irq2offset);
    create_descriptor(&irq10handler, 0x8, 0xe, 10+irq2offset);
    create_descriptor(&irq11handler, 0x8, 0xe, 11+irq2offset);
    create_descriptor(&irq12handler, 0x8, 0xe, 12+irq2offset);
    create_descriptor(&irq13handler, 0x8, 0xe, 13+irq2offset);
    create_descriptor(&irq14handler, 0x8, 0xe, 14+irq2offset);
    create_descriptor(&irq15handler, 0x8, 0xe, 15+irq2offset);



    idtp.size = (sizeof(idt_entry_t)*256)-1;
    idtp.pointer = (int)&idtt;
    asm ( "lidt %0" : : "m"(idtp) );
    uint8_t a1 = inb(0x21);
    uint8_t a2 = inb(0xA1);
    outb(0x11, 0x20);
    io_wait();
    outb(0x11, 0xA0);
    io_wait();
    outb(irq1offset, 0x21);
    io_wait();
    outb(irq2offset, 0xA1);
    io_wait();
    outb(4, 0x21);
    io_wait();
    outb(2, 0xA1);
    io_wait();
    outb(0x1, 0x21);
    io_wait();
    outb(0x1, 0xA1);
    io_wait();

    outb(0xFF, 0x21);
    outb(0xFF, 0xA1);
    asm volatile ("sti");
}

    void sendEOI (uint8_t irq) { 
    if (irq < 8) {
        outb(0x20, 0x20);
    } else {
        outb(0x20, 0x20);
        outb(0x20, 0xa0);
    }
}