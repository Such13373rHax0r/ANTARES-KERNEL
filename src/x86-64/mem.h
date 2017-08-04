#include <stdint.h>
#include <stddef.h>
#ifndef MEM_H
#define MEM_H
uint64_t *PML4;
uint64_t *PDPT;
uint64_t *PD;
uint64_t *PT;
extern void *start_kernel;
extern void *end_kernel;
//void flush_page_table(uint32_t addr);

void map_pg(uint32_t src, uint32_t dst);

//void init_paging();

uint64_t get_physical(uint64_t virtualaddr);

#endif