iso: link
	grub-mkrescue iso -o ANTARES.iso
link: objects
	echo "On a Mac, this will fail!"
	i686-elf-ld -T link.ld kernelc.o kernela.o -o kernel.bin
objects:
	clang --target=i686-none-elf -ffreestanding -c kernel.c -o kernelc.o
	clang --target=i686-none-elf -ffreestanding -c kernel.asm -o kernela.o
clean:
	rm kernelc.o
	rm kernela.o
	rm kernel.bin
emu:
	qemu-system-i386 -kernel kernel.bin $(emuopt)
measandwich:
	echo "What?, do it yourself"
