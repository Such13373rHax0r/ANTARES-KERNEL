#include <stddef.h>
#include <stdint.h>
uint16_t *tbuf = (uint16_t *)0xB8000;
uint16_t termX = 0;
uint16_t termY = 0;



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
    
}
void kmain() {
    

    for(;;) {
        kprintC('t');
    }
}
