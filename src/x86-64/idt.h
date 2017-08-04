#include <stdint.h>
#include <stddef.h>
#include "io.h"
#ifndef IDT_H
#define IDT_H
struct idt_entry_struct
{
    uint16_t base_lo;
    uint16_t sel;
    uint8_t  always0;
    uint8_t  flags;
    uint16_t base_hi;
} __attribute__((packed));
struct idt_pointer_struct
{
    uint16_t size;
    uint32_t pointer;
} __attribute__((packed));
struct interrupt_frame
{
    uint16_t ip;
    uint16_t cs;
    uint16_t flags;
    uint16_t sp;
    uint16_t ss;
};

typedef struct idt_entry_struct idt_entry_t;
typedef struct idt_pointer_struct idt_pointer_t;
typedef struct interrupt_frame idt_frame_t;

void create_descriptor(void *offset, uint16_t selector, uint8_t type, uint16_t num);
void create_interruptDescriptorTable();
void sendEOI (uint8_t irq);






#endif