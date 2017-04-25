docker exec antaresbuild i686-elf-gcc -c -o /build/bin/kernel.o /build/kernel.c -std=gnu99 -ffreestanding -O2 -Wall -Wextra
docker exec antaresbuild nasm -felf32 /build/secondstage.s -o /build/bin/boot.o
docker exec antaresbuild i686-elf-gcc -T link.ld -o /build/iso/boot/ANTARESKERN.bin -ffreestanding -O2 -nostdlib /build/bin/kernel.o /build/bin/boot.o
docker exec antaresbuild grub-mkrescue --xorriso=/build/xorriso -o /build/antares.iso /build/iso
