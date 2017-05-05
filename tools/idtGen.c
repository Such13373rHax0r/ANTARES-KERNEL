#include <stdio.h>
#include <stdint.h>

void create_descriptor(uint32_t offset, uint16_t selector, uint8_t type, uint8_t dpl) {
    uint64_t idt = 0;
    idt |= (offset & 0xFFFF);
    idt |= (selector << 16);
    idt |= ((uint64_t)(type & 0xF) << 40);
    idt |= ((uint64_t)1 << 44);
    idt |= ((uint64_t)(dpl & 3) << 45);
    idt |= ((uint64_t)1 << 47);
    idt |= ((uint64_t)((offset & 0xFFFF0000) >> 16) << 48);
    printf("0x%.16llX\n", idt);
}
int main () {
    create_descriptor(0xBEEFFACE, 0x8, 0xE, 0);
    return 0;
}