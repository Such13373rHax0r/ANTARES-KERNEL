#include "io.h"
uint8_t inb(uint16_t port)
{
    uint8_t ret;
    asm volatile ( "inb %1, %0" : "=a"(ret) : "Nd"(port) );
    return ret;
}

void outb( uint8_t val, uint16_t port)
{
    asm volatile ( "outb %0, %1" : : "a"(val), "Nd"(port) );
}

void io_wait () {
    asm volatile ( "outb %%al, $0x80" : : "a"(0) );
}