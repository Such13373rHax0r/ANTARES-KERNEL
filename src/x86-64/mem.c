#include "mem.h"

uint64_t *PML4 = (uint64_t *)0x1000;
uint64_t *PDPT = (uint64_t *)0x2000;
uint64_t *PD  =  (uint64_t *)0x3000;
uint64_t *PT  =  (uint64_t *)0x4000;
extern void *start_kernel;
extern void *end_kernel;

/*
void flush_page_table(uint32_t addr) {
    asm volatile ("mov %0, %%cr3"
                  :
                  : "r" (addr) 
                  : );
}

void init_paging() {
    PML4[0] = ((int)PDPT|3);
    PDPT[0]  =  ((int)PD|3);
    PD[0]   =   ((int)PT|3);
    int addr = 0;
    for (int x = 0; x < 512; x++) {
        PT[x] = (addr|3);
        addr += 0x1000;
    }
    flush_page_table(0x1000);
    asm volatile ("mov %%cr4, %%eax;"
                  "or $32, %%eax;"
                  "mov %%eax, %%cr4;"
                  "mov %%cr0, %%eax;"
                  "or $0x80000000, %%eax;"
                  "mov %%eax, %%cr0"
                  :
                  :
                  : "eax");
}
*/

uint64_t get_physical(uint64_t virtualaddr) {
    return ((virtualaddr/4096));
}

void map_pg(uint32_t src, uint32_t dst) {

}