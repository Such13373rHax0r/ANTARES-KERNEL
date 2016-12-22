#if !defined(__cplusplus)
#include <stdbool.h>
#endif
#include <stddef.h>
#include <stdint.h>
uint8_t colorizer(uint8_t bg, uint8_t fg) {
	return fg | bg << 4;
}
uint16_t vgaformat(unsigned char c, uint8_t color) {
	return (uint16_t) c | (uint16_t) color << 8;
}
static const size_t VGA_WIDTH = 80;
static const size_t VGA_HEIGHT = 25;

size_t trow = 0;
size_t tcolumn = 0;
uint8_t tcolor = 0;
uint16_t *tbuffer = (uint16_t *)0xB8000;

void clearscreen() {
	int index = 0;
	for (int y = 0; y < VGA_HEIGHT; y++){
		for (int x = 0; x < VGA_WIDTH; x++) {
			index = y * VGA_WIDTH + x;
			tbuffer[index] = vgaformat(' ', tcolor);
		}
	}
}
void putCharAt(uint16_t x, uint16_t y, unsigned char c) {
	tbuffer[y * VGA_WIDTH + x] = vgaformat(c, tcolor);
}
size_t strlen (const char *str) {
	size_t i = 0;
	while (str[i]) i++;
	return i;
}
char* itoa(uint32_t num, char* str, int base)
{
    int i = 0;
    bool isNegative = false;
    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }
    if (num < 0 && base == 10)
    {
        isNegative = true;
        num = -num;
    }
    while (num != 0)
    {
        uint32_t rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/base;
    }
    str[i] = '\0';
    return str;
}
void kprints(const char *str) {
	for(int i = 0; str[i]; i++) {
		if (tcolumn > VGA_WIDTH || str[i] == '\n') 
		{
			trow++;
			tcolumn = 0;
		} else {
			putCharAt(tcolumn++, trow, str[i]);
		}
	}
}
void memW(uint32_t addr, uint8_t data) {
	*(uint8_t *)addr = data;
}
uint8_t memR(uint32_t addr) {
	uint8_t *pa = (uint8_t *)addr;
	return pa[0];
}


void setupRubbish() {
        
	}




int kmain() {
	tcolor = colorizer(0, 10);
	clearscreen();
	trow = 0;
	tcolumn = 0;
	kprints("Welcome to ANTARES DEV KERNEL\n");
	kprints("Remember: Expect bugs, it's a dev kernel");
	while (true) {

	}
}
