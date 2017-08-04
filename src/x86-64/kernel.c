#include <stddef.h>
#include <stdint.h>
#include "screen.h"
/*void init() {
    create_interruptDescriptorTable();
    asm volatile ("mov $0xC0000080, %%ecx;"
                  "rdmsr;"
                  "or $0x100, %%eax;"
                  "wrmsr"
                  :
                  :
                  : "eax", "ecx");
    init_paging();
    clearScreen();

}*/
void kmain() {
    kprint("Saluton, estas via dio\0");
}
