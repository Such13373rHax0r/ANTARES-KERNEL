ENTRY(_start)

SECTIONS
{
    . = 1M;
    .multboot : ALIGN(4K)
    {
    *(.multiboot)
    }
    .bootstrap BLOCK(4K) : ALIGN(4K)
    {
        /build/bin/boot.o (.text)
    }
    .text : ALIGN (4K)
    {
        _code = .;
        *(.text)
        *(.rodata*)
        . = ALIGN(4096);
    }
   .data : 
   {
        _data = .;
        *(.data)
        . = ALIGN(4096);
   }
   .eh_frame : 
   {
       _ehframe = .;
       *(.eh_frame)
        . = ALIGN(4096);
   }
   .bss : 
   {
       _bss = .;
       *(.bss)

       /*
        * You usually need to include generated COMMON symbols
        * under kernel BSS section or use gcc's -fno-common
        */

        *(COMMON)
       . = ALIGN(4096);
   }

   _end = .;
}