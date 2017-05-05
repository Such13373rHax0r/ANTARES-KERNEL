clang -target i686-elf -c -o bin/kernel.o src/kernel.c -std=gnu99 -ffreestanding -O2 -Wall -Wextra
clang -target i686-elf -c -o bin/screen.o src/screen.c -std=gnu99 -ffreestanding -O2 -Wall -Wextra
clang -target i686-elf -c -o bin/idt.o src/idt.c -std=gnu99 -ffreestanding -O2 -Wall -Wextra
clang -target i686-elf -c -o bin/io.o src/io.c -std=gnu99 -ffreestanding -O2 -Wall -Wextra
docker exec antaresbuild nasm -felf32 /build/src/secondstage.s -o /build/bin/boot.o
docker exec antaresbuild i686-elf-gcc -T /build/src/link.ld -o /build/iso/boot/ANTARESKERN.bin -ffreestanding -O2 -nostdlib /build/bin/kernel.o /build/bin/boot.o /build/bin/screen.o /build/bin/idt.o /build/bin/io.o
docker exec antaresbuild grub-mkrescue --xorriso=/build/tools/xorriso -o /build/antares.iso /build/iso
