nasm -f bin -O0 -o boot boot.s && dd if=./boot of=hd.img conv=notrunc
nasm -f bin -O0 -o secondstage secondstage.s && dd if=./secondstage of=hd.img seek=1 conv=notrunc
