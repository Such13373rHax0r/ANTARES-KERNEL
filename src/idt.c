#include "idt.h"
uint64_t *idtt = (uint64_t *)0x7E00;
uint16_t *idts = (uint16_t *)0xBE10;
uint32_t *idto = (uint32_t *)0xBE20;

/*struct interrupt_frame
{
    uint16_t ip;
    uint16_t cs;
    uint16_t flags;
    uint16_t sp;
    uint16_t ss;
};*/
__attribute__((interrupt)) void int0(struct interrupt_frame* frame) {
    clearScreen();
    kprint("DivByZero");

}
__attribute__((interrupt)) void int1(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Debug");

}
__attribute__((interrupt)) void int2(struct interrupt_frame* frame) {
    clearScreen();
    kprint("NMI");

}
__attribute__((interrupt)) void int3(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Breakpoint");

}
__attribute__((interrupt)) void int4(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Overflow");

}
__attribute__((interrupt)) void int5(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Bound Range Exceeded");

}
__attribute__((interrupt)) void int6(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Invalid Opcode");

}
__attribute__((interrupt)) void int7(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Device Not Available");

}
__attribute__((interrupt)) void int8(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Double Fault");

}
__attribute__((interrupt)) void int9(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Coprocessor Segment Overrun");

}
__attribute__((interrupt)) void int10(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Invalid TSS");

}
__attribute__((interrupt)) void int11(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Segment Not Present");

}
__attribute__((interrupt)) void int12(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Stack-Segment Fault");

}
__attribute__((interrupt)) void int13(struct interrupt_frame* frame) {
    clearScreen();
    kprint("General Protection Fault");

}
__attribute__((interrupt)) void int14(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Page Fault");

}
__attribute__((interrupt)) void int15(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Reserved #15");

}
__attribute__((interrupt)) void int16(struct interrupt_frame* frame) {
    clearScreen();
    kprint("x87 Floating Point Exception");

}
__attribute__((interrupt)) void int17(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Alignment Check");

}
__attribute__((interrupt)) void int18(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Machine Check");

}
__attribute__((interrupt)) void int19(struct interrupt_frame* frame) {
    clearScreen();
    kprint("SIMD Floating Point Exception");

}
__attribute__((interrupt)) void int20(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Virtualization Exception");

}
__attribute__((interrupt)) void int21(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Reserved #21");

}
__attribute__((interrupt)) void int22(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Reserved #22");

}
__attribute__((interrupt)) void int23(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Reserved #23");

}
__attribute__((interrupt)) void int24(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Reserved #24");

}
__attribute__((interrupt)) void int25(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Reserved #25");

}
__attribute__((interrupt)) void int26(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Reserved #26");

}
__attribute__((interrupt)) void int27(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Reserved #27");

}
__attribute__((interrupt)) void int28(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Reserved #28");

}
__attribute__((interrupt)) void int29(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Reserved #29");

}
__attribute__((interrupt)) void int30(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Security Exception");

}
__attribute__((interrupt)) void int31(struct interrupt_frame* frame) {
    clearScreen();
    kprint("Reserved #31");

}
__attribute__((interrupt)) void int32(struct interrupt_frame* frame) {
    //PIT
    sendEOI(0);

}
__attribute__((interrupt)) void int33(struct interrupt_frame* frame) {
    //Keyboard Handler
    sendEOI(1);

}
__attribute__((interrupt)) void int34(struct interrupt_frame* frame) {
    //Ignored
    sendEOI(2);

}
__attribute__((interrupt)) void int35(struct interrupt_frame* frame) {
    //COM2
    sendEOI(3);

}
__attribute__((interrupt)) void int36(struct interrupt_frame* frame) {
    //COM1
    sendEOI(4);

}
__attribute__((interrupt)) void int37(struct interrupt_frame* frame) {
    //LPT2
    sendEOI(5);

}
__attribute__((interrupt)) void int38(struct interrupt_frame* frame) {
    //Floppy Disk
    sendEOI(6);

}
__attribute__((interrupt)) void int39(struct interrupt_frame* frame) {
    //LPT1
    sendEOI(7);

}
__attribute__((interrupt)) void int40(struct interrupt_frame* frame) {
    //CMOS Clock
    sendEOI(8);

}
__attribute__((interrupt)) void int41(struct interrupt_frame* frame) {
    //Free
    sendEOI(9);

}
__attribute__((interrupt)) void int42(struct interrupt_frame* frame) {
    //Free
    sendEOI(10);

}
__attribute__((interrupt)) void int43(struct interrupt_frame* frame) {
    //Free
    sendEOI(11);

}
__attribute__((interrupt)) void int44(struct interrupt_frame* frame) {
    //PS2 Mouse
    sendEOI(12);

}
__attribute__((interrupt)) void int45(struct interrupt_frame* frame) {
    //FPU
    sendEOI(13);

}
__attribute__((interrupt)) void int46(struct interrupt_frame* frame) {
    //Primary ATA
    sendEOI(14);

}
__attribute__((interrupt)) void int47(struct interrupt_frame* frame) {
    //Secondary ATA
    sendEOI(15);

}
__attribute__((interrupt)) void int48(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int49(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int50(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int51(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int52(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int53(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int54(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int55(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int56(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int57(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int58(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int59(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int60(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int61(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int62(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int63(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int64(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int65(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int66(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int67(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int68(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int69(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int70(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int71(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int72(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int73(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int74(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int75(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int76(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int77(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int78(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int79(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int80(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int81(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int82(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int83(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int84(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int85(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int86(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int87(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int88(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int89(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int90(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int91(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int92(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int93(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int94(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int95(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int96(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int97(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int98(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int99(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int100(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int101(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int102(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int103(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int104(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int105(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int106(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int107(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int108(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int109(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int110(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int111(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int112(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int113(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int114(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int115(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int116(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int117(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int118(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int119(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int120(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int121(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int122(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int123(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int124(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int125(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int126(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int127(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int128(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int129(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int130(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int131(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int132(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int133(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int134(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int135(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int136(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int137(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int138(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int139(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int140(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int141(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int142(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int143(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int144(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int145(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int146(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int147(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int148(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int149(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int150(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int151(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int152(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int153(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int154(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int155(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int156(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int157(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int158(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int159(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int160(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int161(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int162(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int163(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int164(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int165(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int166(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int167(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int168(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int169(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int170(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int171(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int172(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int173(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int174(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int175(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int176(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int177(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int178(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int179(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int180(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int181(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int182(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int183(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int184(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int185(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int186(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int187(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int188(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int189(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int190(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int191(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int192(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int193(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int194(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int195(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int196(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int197(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int198(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int199(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int200(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int201(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int202(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int203(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int204(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int205(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int206(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int207(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int208(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int209(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int210(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int211(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int212(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int213(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int214(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int215(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int216(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int217(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int218(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int219(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int220(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int221(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int222(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int223(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int224(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int225(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int226(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int227(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int228(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int229(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int230(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int231(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int232(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int233(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int234(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int235(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int236(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int237(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int238(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int239(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int240(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int241(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int242(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int243(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int244(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int245(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int246(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int247(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int248(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int249(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int250(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int251(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int252(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int253(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int254(struct interrupt_frame* frame) {


}
__attribute__((interrupt)) void int255(struct interrupt_frame* frame) {


}



uint64_t create_descriptor(uint32_t offset, uint16_t selector, uint8_t type, uint8_t dpl) {
    uint64_t idt = 0;
    idt |= (offset & 0xFFFF);
    idt |= (selector << 16);
    idt |= ((uint64_t)(type & 0xF) << 40);
    idt |= ((uint64_t)1 << 44);
    idt |= ((uint64_t)(dpl & 3) << 45);
    idt |= ((uint64_t)1 << 47);
    idt |= ((uint64_t)((offset & 0xFFFF0000) >> 16) << 48);
    return idt;
}
void create_interruptDescriptorTable() {
    
*(uint64_t *)0x7e00 = create_descriptor(&int0, 0x8, 0xE, 0);
*(uint64_t *)0x7e40 = create_descriptor(&int1, 0x8, 0xE, 0);
*(uint64_t *)0x7e80 = create_descriptor(&int2, 0x8, 0xE, 0);
*(uint64_t *)0x7ec0 = create_descriptor(&int3, 0x8, 0xE, 0);
*(uint64_t *)0x7f00 = create_descriptor(&int4, 0x8, 0xE, 0);
*(uint64_t *)0x7f40 = create_descriptor(&int5, 0x8, 0xE, 0);
*(uint64_t *)0x7f80 = create_descriptor(&int6, 0x8, 0xE, 0);
*(uint64_t *)0x7fc0 = create_descriptor(&int7, 0x8, 0xE, 0);
*(uint64_t *)0x8000 = create_descriptor(&int8, 0x8, 0xE, 0);
*(uint64_t *)0x8040 = create_descriptor(&int9, 0x8, 0xE, 0);
*(uint64_t *)0x8080 = create_descriptor(&int10, 0x8, 0xE, 0);
*(uint64_t *)0x80c0 = create_descriptor(&int11, 0x8, 0xE, 0);
*(uint64_t *)0x8100 = create_descriptor(&int12, 0x8, 0xE, 0);
*(uint64_t *)0x8140 = create_descriptor(&int13, 0x8, 0xE, 0);
*(uint64_t *)0x8180 = create_descriptor(&int14, 0x8, 0xE, 0);
*(uint64_t *)0x81c0 = create_descriptor(&int15, 0x8, 0xE, 0);
*(uint64_t *)0x8200 = create_descriptor(&int16, 0x8, 0xE, 0);
*(uint64_t *)0x8240 = create_descriptor(&int17, 0x8, 0xE, 0);
*(uint64_t *)0x8280 = create_descriptor(&int18, 0x8, 0xE, 0);
*(uint64_t *)0x82c0 = create_descriptor(&int19, 0x8, 0xE, 0);
*(uint64_t *)0x8300 = create_descriptor(&int20, 0x8, 0xE, 0);
*(uint64_t *)0x8340 = create_descriptor(&int21, 0x8, 0xE, 0);
*(uint64_t *)0x8380 = create_descriptor(&int22, 0x8, 0xE, 0);
*(uint64_t *)0x83c0 = create_descriptor(&int23, 0x8, 0xE, 0);
*(uint64_t *)0x8400 = create_descriptor(&int24, 0x8, 0xE, 0);
*(uint64_t *)0x8440 = create_descriptor(&int25, 0x8, 0xE, 0);
*(uint64_t *)0x8480 = create_descriptor(&int26, 0x8, 0xE, 0);
*(uint64_t *)0x84c0 = create_descriptor(&int27, 0x8, 0xE, 0);
*(uint64_t *)0x8500 = create_descriptor(&int28, 0x8, 0xE, 0);
*(uint64_t *)0x8540 = create_descriptor(&int29, 0x8, 0xE, 0);
*(uint64_t *)0x8580 = create_descriptor(&int30, 0x8, 0xE, 0);
*(uint64_t *)0x85c0 = create_descriptor(&int31, 0x8, 0xE, 0);
*(uint64_t *)0x8600 = create_descriptor(&int32, 0x8, 0xE, 0);
*(uint64_t *)0x8640 = create_descriptor(&int33, 0x8, 0xE, 0);
*(uint64_t *)0x8680 = create_descriptor(&int34, 0x8, 0xE, 0);
*(uint64_t *)0x86c0 = create_descriptor(&int35, 0x8, 0xE, 0);
*(uint64_t *)0x8700 = create_descriptor(&int36, 0x8, 0xE, 0);
*(uint64_t *)0x8740 = create_descriptor(&int37, 0x8, 0xE, 0);
*(uint64_t *)0x8780 = create_descriptor(&int38, 0x8, 0xE, 0);
*(uint64_t *)0x87c0 = create_descriptor(&int39, 0x8, 0xE, 0);
*(uint64_t *)0x8800 = create_descriptor(&int40, 0x8, 0xE, 0);
*(uint64_t *)0x8840 = create_descriptor(&int41, 0x8, 0xE, 0);
*(uint64_t *)0x8880 = create_descriptor(&int42, 0x8, 0xE, 0);
*(uint64_t *)0x88c0 = create_descriptor(&int43, 0x8, 0xE, 0);
*(uint64_t *)0x8900 = create_descriptor(&int44, 0x8, 0xE, 0);
*(uint64_t *)0x8940 = create_descriptor(&int45, 0x8, 0xE, 0);
*(uint64_t *)0x8980 = create_descriptor(&int46, 0x8, 0xE, 0);
*(uint64_t *)0x89c0 = create_descriptor(&int47, 0x8, 0xE, 0);
*(uint64_t *)0x8a00 = create_descriptor(&int48, 0x8, 0xE, 0);
*(uint64_t *)0x8a40 = create_descriptor(&int49, 0x8, 0xE, 0);
*(uint64_t *)0x8a80 = create_descriptor(&int50, 0x8, 0xE, 0);
*(uint64_t *)0x8ac0 = create_descriptor(&int51, 0x8, 0xE, 0);
*(uint64_t *)0x8b00 = create_descriptor(&int52, 0x8, 0xE, 0);
*(uint64_t *)0x8b40 = create_descriptor(&int53, 0x8, 0xE, 0);
*(uint64_t *)0x8b80 = create_descriptor(&int54, 0x8, 0xE, 0);
*(uint64_t *)0x8bc0 = create_descriptor(&int55, 0x8, 0xE, 0);
*(uint64_t *)0x8c00 = create_descriptor(&int56, 0x8, 0xE, 0);
*(uint64_t *)0x8c40 = create_descriptor(&int57, 0x8, 0xE, 0);
*(uint64_t *)0x8c80 = create_descriptor(&int58, 0x8, 0xE, 0);
*(uint64_t *)0x8cc0 = create_descriptor(&int59, 0x8, 0xE, 0);
*(uint64_t *)0x8d00 = create_descriptor(&int60, 0x8, 0xE, 0);
*(uint64_t *)0x8d40 = create_descriptor(&int61, 0x8, 0xE, 0);
*(uint64_t *)0x8d80 = create_descriptor(&int62, 0x8, 0xE, 0);
*(uint64_t *)0x8dc0 = create_descriptor(&int63, 0x8, 0xE, 0);
*(uint64_t *)0x8e00 = create_descriptor(&int64, 0x8, 0xE, 0);
*(uint64_t *)0x8e40 = create_descriptor(&int65, 0x8, 0xE, 0);
*(uint64_t *)0x8e80 = create_descriptor(&int66, 0x8, 0xE, 0);
*(uint64_t *)0x8ec0 = create_descriptor(&int67, 0x8, 0xE, 0);
*(uint64_t *)0x8f00 = create_descriptor(&int68, 0x8, 0xE, 0);
*(uint64_t *)0x8f40 = create_descriptor(&int69, 0x8, 0xE, 0);
*(uint64_t *)0x8f80 = create_descriptor(&int70, 0x8, 0xE, 0);
*(uint64_t *)0x8fc0 = create_descriptor(&int71, 0x8, 0xE, 0);
*(uint64_t *)0x9000 = create_descriptor(&int72, 0x8, 0xE, 0);
*(uint64_t *)0x9040 = create_descriptor(&int73, 0x8, 0xE, 0);
*(uint64_t *)0x9080 = create_descriptor(&int74, 0x8, 0xE, 0);
*(uint64_t *)0x90c0 = create_descriptor(&int75, 0x8, 0xE, 0);
*(uint64_t *)0x9100 = create_descriptor(&int76, 0x8, 0xE, 0);
*(uint64_t *)0x9140 = create_descriptor(&int77, 0x8, 0xE, 0);
*(uint64_t *)0x9180 = create_descriptor(&int78, 0x8, 0xE, 0);
*(uint64_t *)0x91c0 = create_descriptor(&int79, 0x8, 0xE, 0);
*(uint64_t *)0x9200 = create_descriptor(&int80, 0x8, 0xE, 0);
*(uint64_t *)0x9240 = create_descriptor(&int81, 0x8, 0xE, 0);
*(uint64_t *)0x9280 = create_descriptor(&int82, 0x8, 0xE, 0);
*(uint64_t *)0x92c0 = create_descriptor(&int83, 0x8, 0xE, 0);
*(uint64_t *)0x9300 = create_descriptor(&int84, 0x8, 0xE, 0);
*(uint64_t *)0x9340 = create_descriptor(&int85, 0x8, 0xE, 0);
*(uint64_t *)0x9380 = create_descriptor(&int86, 0x8, 0xE, 0);
*(uint64_t *)0x93c0 = create_descriptor(&int87, 0x8, 0xE, 0);
*(uint64_t *)0x9400 = create_descriptor(&int88, 0x8, 0xE, 0);
*(uint64_t *)0x9440 = create_descriptor(&int89, 0x8, 0xE, 0);
*(uint64_t *)0x9480 = create_descriptor(&int90, 0x8, 0xE, 0);
*(uint64_t *)0x94c0 = create_descriptor(&int91, 0x8, 0xE, 0);
*(uint64_t *)0x9500 = create_descriptor(&int92, 0x8, 0xE, 0);
*(uint64_t *)0x9540 = create_descriptor(&int93, 0x8, 0xE, 0);
*(uint64_t *)0x9580 = create_descriptor(&int94, 0x8, 0xE, 0);
*(uint64_t *)0x95c0 = create_descriptor(&int95, 0x8, 0xE, 0);
*(uint64_t *)0x9600 = create_descriptor(&int96, 0x8, 0xE, 0);
*(uint64_t *)0x9640 = create_descriptor(&int97, 0x8, 0xE, 0);
*(uint64_t *)0x9680 = create_descriptor(&int98, 0x8, 0xE, 0);
*(uint64_t *)0x96c0 = create_descriptor(&int99, 0x8, 0xE, 0);
*(uint64_t *)0x9700 = create_descriptor(&int100, 0x8, 0xE, 0);
*(uint64_t *)0x9740 = create_descriptor(&int101, 0x8, 0xE, 0);
*(uint64_t *)0x9780 = create_descriptor(&int102, 0x8, 0xE, 0);
*(uint64_t *)0x97c0 = create_descriptor(&int103, 0x8, 0xE, 0);
*(uint64_t *)0x9800 = create_descriptor(&int104, 0x8, 0xE, 0);
*(uint64_t *)0x9840 = create_descriptor(&int105, 0x8, 0xE, 0);
*(uint64_t *)0x9880 = create_descriptor(&int106, 0x8, 0xE, 0);
*(uint64_t *)0x98c0 = create_descriptor(&int107, 0x8, 0xE, 0);
*(uint64_t *)0x9900 = create_descriptor(&int108, 0x8, 0xE, 0);
*(uint64_t *)0x9940 = create_descriptor(&int109, 0x8, 0xE, 0);
*(uint64_t *)0x9980 = create_descriptor(&int110, 0x8, 0xE, 0);
*(uint64_t *)0x99c0 = create_descriptor(&int111, 0x8, 0xE, 0);
*(uint64_t *)0x9a00 = create_descriptor(&int112, 0x8, 0xE, 0);
*(uint64_t *)0x9a40 = create_descriptor(&int113, 0x8, 0xE, 0);
*(uint64_t *)0x9a80 = create_descriptor(&int114, 0x8, 0xE, 0);
*(uint64_t *)0x9ac0 = create_descriptor(&int115, 0x8, 0xE, 0);
*(uint64_t *)0x9b00 = create_descriptor(&int116, 0x8, 0xE, 0);
*(uint64_t *)0x9b40 = create_descriptor(&int117, 0x8, 0xE, 0);
*(uint64_t *)0x9b80 = create_descriptor(&int118, 0x8, 0xE, 0);
*(uint64_t *)0x9bc0 = create_descriptor(&int119, 0x8, 0xE, 0);
*(uint64_t *)0x9c00 = create_descriptor(&int120, 0x8, 0xE, 0);
*(uint64_t *)0x9c40 = create_descriptor(&int121, 0x8, 0xE, 0);
*(uint64_t *)0x9c80 = create_descriptor(&int122, 0x8, 0xE, 0);
*(uint64_t *)0x9cc0 = create_descriptor(&int123, 0x8, 0xE, 0);
*(uint64_t *)0x9d00 = create_descriptor(&int124, 0x8, 0xE, 0);
*(uint64_t *)0x9d40 = create_descriptor(&int125, 0x8, 0xE, 0);
*(uint64_t *)0x9d80 = create_descriptor(&int126, 0x8, 0xE, 0);
*(uint64_t *)0x9dc0 = create_descriptor(&int127, 0x8, 0xE, 0);
*(uint64_t *)0x9e00 = create_descriptor(&int128, 0x8, 0xE, 0);
*(uint64_t *)0x9e40 = create_descriptor(&int129, 0x8, 0xE, 0);
*(uint64_t *)0x9e80 = create_descriptor(&int130, 0x8, 0xE, 0);
*(uint64_t *)0x9ec0 = create_descriptor(&int131, 0x8, 0xE, 0);
*(uint64_t *)0x9f00 = create_descriptor(&int132, 0x8, 0xE, 0);
*(uint64_t *)0x9f40 = create_descriptor(&int133, 0x8, 0xE, 0);
*(uint64_t *)0x9f80 = create_descriptor(&int134, 0x8, 0xE, 0);
*(uint64_t *)0x9fc0 = create_descriptor(&int135, 0x8, 0xE, 0);
*(uint64_t *)0xa000 = create_descriptor(&int136, 0x8, 0xE, 0);
*(uint64_t *)0xa040 = create_descriptor(&int137, 0x8, 0xE, 0);
*(uint64_t *)0xa080 = create_descriptor(&int138, 0x8, 0xE, 0);
*(uint64_t *)0xa0c0 = create_descriptor(&int139, 0x8, 0xE, 0);
*(uint64_t *)0xa100 = create_descriptor(&int140, 0x8, 0xE, 0);
*(uint64_t *)0xa140 = create_descriptor(&int141, 0x8, 0xE, 0);
*(uint64_t *)0xa180 = create_descriptor(&int142, 0x8, 0xE, 0);
*(uint64_t *)0xa1c0 = create_descriptor(&int143, 0x8, 0xE, 0);
*(uint64_t *)0xa200 = create_descriptor(&int144, 0x8, 0xE, 0);
*(uint64_t *)0xa240 = create_descriptor(&int145, 0x8, 0xE, 0);
*(uint64_t *)0xa280 = create_descriptor(&int146, 0x8, 0xE, 0);
*(uint64_t *)0xa2c0 = create_descriptor(&int147, 0x8, 0xE, 0);
*(uint64_t *)0xa300 = create_descriptor(&int148, 0x8, 0xE, 0);
*(uint64_t *)0xa340 = create_descriptor(&int149, 0x8, 0xE, 0);
*(uint64_t *)0xa380 = create_descriptor(&int150, 0x8, 0xE, 0);
*(uint64_t *)0xa3c0 = create_descriptor(&int151, 0x8, 0xE, 0);
*(uint64_t *)0xa400 = create_descriptor(&int152, 0x8, 0xE, 0);
*(uint64_t *)0xa440 = create_descriptor(&int153, 0x8, 0xE, 0);
*(uint64_t *)0xa480 = create_descriptor(&int154, 0x8, 0xE, 0);
*(uint64_t *)0xa4c0 = create_descriptor(&int155, 0x8, 0xE, 0);
*(uint64_t *)0xa500 = create_descriptor(&int156, 0x8, 0xE, 0);
*(uint64_t *)0xa540 = create_descriptor(&int157, 0x8, 0xE, 0);
*(uint64_t *)0xa580 = create_descriptor(&int158, 0x8, 0xE, 0);
*(uint64_t *)0xa5c0 = create_descriptor(&int159, 0x8, 0xE, 0);
*(uint64_t *)0xa600 = create_descriptor(&int160, 0x8, 0xE, 0);
*(uint64_t *)0xa640 = create_descriptor(&int161, 0x8, 0xE, 0);
*(uint64_t *)0xa680 = create_descriptor(&int162, 0x8, 0xE, 0);
*(uint64_t *)0xa6c0 = create_descriptor(&int163, 0x8, 0xE, 0);
*(uint64_t *)0xa700 = create_descriptor(&int164, 0x8, 0xE, 0);
*(uint64_t *)0xa740 = create_descriptor(&int165, 0x8, 0xE, 0);
*(uint64_t *)0xa780 = create_descriptor(&int166, 0x8, 0xE, 0);
*(uint64_t *)0xa7c0 = create_descriptor(&int167, 0x8, 0xE, 0);
*(uint64_t *)0xa800 = create_descriptor(&int168, 0x8, 0xE, 0);
*(uint64_t *)0xa840 = create_descriptor(&int169, 0x8, 0xE, 0);
*(uint64_t *)0xa880 = create_descriptor(&int170, 0x8, 0xE, 0);
*(uint64_t *)0xa8c0 = create_descriptor(&int171, 0x8, 0xE, 0);
*(uint64_t *)0xa900 = create_descriptor(&int172, 0x8, 0xE, 0);
*(uint64_t *)0xa940 = create_descriptor(&int173, 0x8, 0xE, 0);
*(uint64_t *)0xa980 = create_descriptor(&int174, 0x8, 0xE, 0);
*(uint64_t *)0xa9c0 = create_descriptor(&int175, 0x8, 0xE, 0);
*(uint64_t *)0xaa00 = create_descriptor(&int176, 0x8, 0xE, 0);
*(uint64_t *)0xaa40 = create_descriptor(&int177, 0x8, 0xE, 0);
*(uint64_t *)0xaa80 = create_descriptor(&int178, 0x8, 0xE, 0);
*(uint64_t *)0xaac0 = create_descriptor(&int179, 0x8, 0xE, 0);
*(uint64_t *)0xab00 = create_descriptor(&int180, 0x8, 0xE, 0);
*(uint64_t *)0xab40 = create_descriptor(&int181, 0x8, 0xE, 0);
*(uint64_t *)0xab80 = create_descriptor(&int182, 0x8, 0xE, 0);
*(uint64_t *)0xabc0 = create_descriptor(&int183, 0x8, 0xE, 0);
*(uint64_t *)0xac00 = create_descriptor(&int184, 0x8, 0xE, 0);
*(uint64_t *)0xac40 = create_descriptor(&int185, 0x8, 0xE, 0);
*(uint64_t *)0xac80 = create_descriptor(&int186, 0x8, 0xE, 0);
*(uint64_t *)0xacc0 = create_descriptor(&int187, 0x8, 0xE, 0);
*(uint64_t *)0xad00 = create_descriptor(&int188, 0x8, 0xE, 0);
*(uint64_t *)0xad40 = create_descriptor(&int189, 0x8, 0xE, 0);
*(uint64_t *)0xad80 = create_descriptor(&int190, 0x8, 0xE, 0);
*(uint64_t *)0xadc0 = create_descriptor(&int191, 0x8, 0xE, 0);
*(uint64_t *)0xae00 = create_descriptor(&int192, 0x8, 0xE, 0);
*(uint64_t *)0xae40 = create_descriptor(&int193, 0x8, 0xE, 0);
*(uint64_t *)0xae80 = create_descriptor(&int194, 0x8, 0xE, 0);
*(uint64_t *)0xaec0 = create_descriptor(&int195, 0x8, 0xE, 0);
*(uint64_t *)0xaf00 = create_descriptor(&int196, 0x8, 0xE, 0);
*(uint64_t *)0xaf40 = create_descriptor(&int197, 0x8, 0xE, 0);
*(uint64_t *)0xaf80 = create_descriptor(&int198, 0x8, 0xE, 0);
*(uint64_t *)0xafc0 = create_descriptor(&int199, 0x8, 0xE, 0);
*(uint64_t *)0xb000 = create_descriptor(&int200, 0x8, 0xE, 0);
*(uint64_t *)0xb040 = create_descriptor(&int201, 0x8, 0xE, 0);
*(uint64_t *)0xb080 = create_descriptor(&int202, 0x8, 0xE, 0);
*(uint64_t *)0xb0c0 = create_descriptor(&int203, 0x8, 0xE, 0);
*(uint64_t *)0xb100 = create_descriptor(&int204, 0x8, 0xE, 0);
*(uint64_t *)0xb140 = create_descriptor(&int205, 0x8, 0xE, 0);
*(uint64_t *)0xb180 = create_descriptor(&int206, 0x8, 0xE, 0);
*(uint64_t *)0xb1c0 = create_descriptor(&int207, 0x8, 0xE, 0);
*(uint64_t *)0xb200 = create_descriptor(&int208, 0x8, 0xE, 0);
*(uint64_t *)0xb240 = create_descriptor(&int209, 0x8, 0xE, 0);
*(uint64_t *)0xb280 = create_descriptor(&int210, 0x8, 0xE, 0);
*(uint64_t *)0xb2c0 = create_descriptor(&int211, 0x8, 0xE, 0);
*(uint64_t *)0xb300 = create_descriptor(&int212, 0x8, 0xE, 0);
*(uint64_t *)0xb340 = create_descriptor(&int213, 0x8, 0xE, 0);
*(uint64_t *)0xb380 = create_descriptor(&int214, 0x8, 0xE, 0);
*(uint64_t *)0xb3c0 = create_descriptor(&int215, 0x8, 0xE, 0);
*(uint64_t *)0xb400 = create_descriptor(&int216, 0x8, 0xE, 0);
*(uint64_t *)0xb440 = create_descriptor(&int217, 0x8, 0xE, 0);
*(uint64_t *)0xb480 = create_descriptor(&int218, 0x8, 0xE, 0);
*(uint64_t *)0xb4c0 = create_descriptor(&int219, 0x8, 0xE, 0);
*(uint64_t *)0xb500 = create_descriptor(&int220, 0x8, 0xE, 0);
*(uint64_t *)0xb540 = create_descriptor(&int221, 0x8, 0xE, 0);
*(uint64_t *)0xb580 = create_descriptor(&int222, 0x8, 0xE, 0);
*(uint64_t *)0xb5c0 = create_descriptor(&int223, 0x8, 0xE, 0);
*(uint64_t *)0xb600 = create_descriptor(&int224, 0x8, 0xE, 0);
*(uint64_t *)0xb640 = create_descriptor(&int225, 0x8, 0xE, 0);
*(uint64_t *)0xb680 = create_descriptor(&int226, 0x8, 0xE, 0);
*(uint64_t *)0xb6c0 = create_descriptor(&int227, 0x8, 0xE, 0);
*(uint64_t *)0xb700 = create_descriptor(&int228, 0x8, 0xE, 0);
*(uint64_t *)0xb740 = create_descriptor(&int229, 0x8, 0xE, 0);
*(uint64_t *)0xb780 = create_descriptor(&int230, 0x8, 0xE, 0);
*(uint64_t *)0xb7c0 = create_descriptor(&int231, 0x8, 0xE, 0);
*(uint64_t *)0xb800 = create_descriptor(&int232, 0x8, 0xE, 0);
*(uint64_t *)0xb840 = create_descriptor(&int233, 0x8, 0xE, 0);
*(uint64_t *)0xb880 = create_descriptor(&int234, 0x8, 0xE, 0);
*(uint64_t *)0xb8c0 = create_descriptor(&int235, 0x8, 0xE, 0);
*(uint64_t *)0xb900 = create_descriptor(&int236, 0x8, 0xE, 0);
*(uint64_t *)0xb940 = create_descriptor(&int237, 0x8, 0xE, 0);
*(uint64_t *)0xb980 = create_descriptor(&int238, 0x8, 0xE, 0);
*(uint64_t *)0xb9c0 = create_descriptor(&int239, 0x8, 0xE, 0);
*(uint64_t *)0xba00 = create_descriptor(&int240, 0x8, 0xE, 0);
*(uint64_t *)0xba40 = create_descriptor(&int241, 0x8, 0xE, 0);
*(uint64_t *)0xba80 = create_descriptor(&int242, 0x8, 0xE, 0);
*(uint64_t *)0xbac0 = create_descriptor(&int243, 0x8, 0xE, 0);
*(uint64_t *)0xbb00 = create_descriptor(&int244, 0x8, 0xE, 0);
*(uint64_t *)0xbb40 = create_descriptor(&int245, 0x8, 0xE, 0);
*(uint64_t *)0xbb80 = create_descriptor(&int246, 0x8, 0xE, 0);
*(uint64_t *)0xbbc0 = create_descriptor(&int247, 0x8, 0xE, 0);
*(uint64_t *)0xbc00 = create_descriptor(&int248, 0x8, 0xE, 0);
*(uint64_t *)0xbc40 = create_descriptor(&int249, 0x8, 0xE, 0);
*(uint64_t *)0xbc80 = create_descriptor(&int250, 0x8, 0xE, 0);
*(uint64_t *)0xbcc0 = create_descriptor(&int251, 0x8, 0xE, 0);
*(uint64_t *)0xbd00 = create_descriptor(&int252, 0x8, 0xE, 0);
*(uint64_t *)0xbd40 = create_descriptor(&int253, 0x8, 0xE, 0);
*(uint64_t *)0xbd80 = create_descriptor(&int254, 0x8, 0xE, 0);
*(uint64_t *)0xbdc0 = create_descriptor(&int255, 0x8, 0xE, 0);











    
    idts[0] = 0x7FF;
    idto[0] = 0x7e00;
    asm ( "lidt %0" : : "m"(idts) );
    uint8_t a1 = inb(0x21);
    uint8_t a2 = inb(0xA1);
    outb(0x11, 0x20);
    io_wait();
    outb(0x11, 0xA0);
    io_wait();
    outb(32, 0x21);
    io_wait();
    outb(40, 0xA1);
    io_wait();
    outb(4, 0x21);
    io_wait();
    outb(2, 0xA1);
    io_wait();
    outb(0x1, 0x21);
    io_wait();
    outb(0x1, 0xA1);
    io_wait();

    outb(a1, 0x21);
    outb(a2, 0xA1);
    asm volatile ("sti");
}

    void sendEOI (uint8_t irq) { 
    if (irq < 8) {
        outb(0x20, 0x20);
    } else {
        outb(0x20, 0x20);
        outb(0x20, 0xa0);
    }
}