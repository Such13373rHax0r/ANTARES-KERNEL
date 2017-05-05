#include <stdint.h>
#include <stddef.h>
#ifndef IO_H
#define IO_H
uint8_t inb(uint16_t port);

void outb(uint8_t dat, uint16_t port);
void io_wait();

#endif