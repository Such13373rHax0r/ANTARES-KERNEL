#include <stddef.h>
#include <stdint.h>

uint16_t *tbuf = (uint16_t *)0xB8000;
uint16_t termX = 0;
uint16_t termY = 0;
uint64_t *idtt = (uint64_t *)0x80000

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
    for (int c = 0; c < strlen(str); c++) {
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
void __attribute__((interrupt)) int0 () {
    
}
void __attribute__((interrupt)) int1 () {
    
}
void __attribute__((interrupt)) int2 () {
    
}
void __attribute__((interrupt)) int3 () {
    
}
void __attribute__((interrupt)) int4 () {
    
}
uint64_t create_descriptor(uint32_t offset, uint16_t selector, uint8_t type, uint8_t dpl) {
    uint64_t idt = 0;
    idt |= (offset & 0xFFFF);
    idt |= (selector << 16);
    idt |= ((uint64_t)(type & 0xF) << 40);
    idt |= ((uint64_t)1 << 44);
    idt |= ((uint64_t)(dpl & 3) << 45);
    idt |= ((uint64_t)1 << 47);
    idt |= ((uint64_t)((offset & 0xFFFF0000) >> 16) << 48);
    return idt;
}
void create_interruptDescriptorTable() {
    
}
void kmain() {
    for (int x = 0; x < 256; x++) {
        idtt[x] = create_descriptor(&int0);
    }
clearScreen();
kprint("Hello Kernel World\0");
    for(;;) {}
}
