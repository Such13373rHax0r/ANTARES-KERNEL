x86_64-elf-gcc -c -o bin/kernel64.o src/x86-64/kernel.c -ffreestanding -mcmodel=large -mno-red-zone -mno-mmx -mno-sse -mno-sse2 -std=gnu99
x86_64-elf-gcc -c -o bin/screen64.o src/x86-64/screen.c -ffreestanding -mcmodel=large -mno-red-zone -mno-mmx -mno-sse -mno-sse2 -std=gnu99
x86_64-elf-gcc -c -o bin/idt64.o src/x86-64/idt.c -ffreestanding -mcmodel=large -mno-red-zone -mno-mmx -mno-sse -mno-sse2 -std=gnu99
x86_64-elf-gcc -c -o bin/io64.o src/x86-64/io.c -ffreestanding -mcmodel=large -mno-red-zone -mno-mmx -mno-sse -mno-sse2 -std=gnu99
x86_64-elf-gcc -c -o bin/mem64.o src/x86-64/mem.c -ffreestanding -mcmodel=large -mno-red-zone -mno-mmx -mno-sse -mno-sse2 -std=gnu99

nasm -felf64 src/x86-64/secondstage.s -o /build/bin/boot.o
nasm -felf64 src/x86-64/idt.s -o /build/bin/idts64.o
x86_64-elf-gcc -Wl,--build-id=none -T src/x86-64/link.ld -o /build/iso/boot/ANTARESKERN64.bin -ffreestanding -O2 -nostdlib /build/bin/boot.o /build/bin/kernel64.o /build/bin/screen64.o /build/bin/idt64.o /build/bin/io64.o /build/bin/idts64.o /build/bin/mem64.o
grub-mkrescue --xorriso=/build/tools/xorriso -o /build/antares.iso /build/iso