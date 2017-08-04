#include "screen.h"
uint16_t *tbuf = (uint16_t *)0xB8000;
uint16_t termX = 0;
uint16_t termY = 0;


size_t strlen (char *str) {
	size_t val;
	for (val = 0; str[val] != 0; val++) {}
	return val;
}
void kcharAt(uint16_t x, uint16_t y, unsigned char c) {
    int offset = y*80+x;
    tbuf[offset] = (c | (uint16_t) 0x1F << 8);

}
void kprintC(char c) {
	if (termX < 80) {
		kcharAt(termX, termY, c);
		termX++;
	} else if (termY != 24) {
		termX = 0;
		termY++;
	} else {
		return;
	}
}
void kprint(char *str) {
	for (unsigned int c = 0; c < strlen(str); c++) {
		kprintC(str[c]);
	}
}
void clearScreen() {
	for (int x = 0; x < 20000; x++) {
		kprintC(' ');
	}
	termX = 0;
	termY = 0;
}
