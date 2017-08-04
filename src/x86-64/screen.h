#ifndef SCREEN_H
#include <stdint.h>
#include <stddef.h>
#define SCREEN_H
uint16_t *tbuf;
uint16_t termX;
uint16_t termY;


size_t strlen (char *str);
void kcharAt(uint16_t x, uint16_t y, unsigned char c);
void kprintC(char c);
void kprint(char *str);
void clearScreen();

#endif