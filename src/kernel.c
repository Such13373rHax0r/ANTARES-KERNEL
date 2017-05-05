#include <stddef.h>
#include <stdint.h>
#include "idt.h"
#include "screen.h"

void kmain() {
create_interruptDescriptorTable();
clearScreen();
kprint("Hello Kernel World\0");
    for(;;) {}
}
