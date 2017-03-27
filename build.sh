nasm -f bin -o boot boot.s && dd if=./boot of=hd.img conv=notrunc
nasm -f bin -o secondstage secondstage.s && dd if=./secondstage of=hd.img seek=1 conv=notrunc
