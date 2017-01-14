#if !defined(__cplusplus)
#include <stdbool.h>
#endif
#include <stddef.h>
#include <stdint.h>

//TAKE FOREGROUND COLOR AND BACKGROUND COLOR, THEN CONVERT TO VGA COLOR
uint8_t colorizer(uint8_t bg, uint8_t fg) {
	return fg | bg << 4;
}

//TAKE CHARACTER AND COLOR AND CONVERT TO VGA ENTRY
uint16_t vgaformat(unsigned char c, uint8_t color) {
	return (uint16_t) c | (uint16_t) color << 8;
}

//WIDTH OF VGA SCREEN
static const size_t VGA_WIDTH = 80;
//HEIGHT OF VGA SCREEN
static const size_t VGA_HEIGHT = 25;

//CURRENT ROW TO BE WRITTEN TO
size_t trow = 0;
//CURRENT COLUMN TO BE WRITTEN TO
size_t tcolumn = 0;
//CURRENT COLOR OF TERMINAL
uint8_t tcolor = 0;
//EVERYTHING ON THE TERMINAL
uint16_t *tbuffer = (uint16_t *)0xB8000;

//CLEAR THE SCREEN
void clearscreen() {
	int index = 0;
	for (int y = 0; y < VGA_HEIGHT; y++){
		for (int x = 0; x < VGA_WIDTH; x++) {
			index = y * VGA_WIDTH + x;
			tbuffer[index] = vgaformat(' ', tcolor);
		}
	}
}
// PUT CHARACTER AT SPECIFIC LOCATION
void putCharAt(uint16_t x, uint16_t y, unsigned char c) {
	tbuffer[y * VGA_WIDTH + x] = vgaformat(c, tcolor);
}
//LENGTH OF STRING
size_t strlen (const char *str) {
	size_t i = 0;
	while (str[i]) i++;
	return i;
}
//CONVERT INTEGER TO ASCII REPRESENTATION
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
//PRINT TO SCREEN
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

//WRITE BYTE TO PORT
void outb(uint8_t btw, uint16_t port) {
	asm volatile ("outb %0, %1" : : "a"(btw), "Nd"(port));
}
//READ BYTE FROM PORT
uint8_t inb(uint16_t port) {
	uint8_t btw = 0;
	asm volatile ("inb %1, %0" : "=a"(btw) : "Nd"(port));
	return btw;
}

//WRITE TO MEMORY
void memW(uint32_t addr, uint8_t data) {
	*(uint8_t *)addr = data;
}
//READ FROM MEMORY
uint8_t memR(uint32_t addr) {
	uint8_t *pa = (uint8_t *)addr;
	return pa[0];
}

/*
*  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄        ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄
* ▐░░░░░░░░░░░▌▐░░▌      ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌
* ▐░█▀▀▀▀▀▀▀█░▌▐░▌░▌     ▐░▌ ▀▀▀▀█░█▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀▀▀
* ▐░▌       ▐░▌▐░▌▐░▌    ▐░▌     ▐░▌     ▐░▌       ▐░▌▐░▌       ▐░▌▐░▌          ▐░▌
* ▐░█▄▄▄▄▄▄▄█░▌▐░▌ ▐░▌   ▐░▌     ▐░▌     ▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄
* ▐░░░░░░░░░░░▌▐░▌  ▐░▌  ▐░▌     ▐░▌     ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌
* ▐░█▀▀▀▀▀▀▀█░▌▐░▌   ▐░▌ ▐░▌     ▐░▌     ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀█░█▀▀ ▐░█▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀█░▌
* ▐░▌       ▐░▌▐░▌    ▐░▌▐░▌     ▐░▌     ▐░▌       ▐░▌▐░▌     ▐░▌  ▐░▌                    ▐░▌
* ▐░▌       ▐░▌▐░▌     ▐░▐░▌     ▐░▌     ▐░▌       ▐░▌▐░▌      ▐░▌ ▐░█▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄█░▌
* ▐░▌       ▐░▌▐░▌      ▐░░▌     ▐░▌     ▐░▌       ▐░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌
*  ▀         ▀  ▀        ▀▀       ▀       ▀         ▀  ▀         ▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀
*/
int kmain() {
	tcolor = colorizer(0, 10);
	clearscreen();
	kprints("Welcome to ANTARES DEV KERNEL\n");
	kprints("YOU ARE WELCOME TO READ THE SOURCE CODE, FELLOW HUMAN, IT IS QUITE \"QUITE WELL\" DOCUMENTED");
	while (true) {

		//MAINLOOP
	}
}
