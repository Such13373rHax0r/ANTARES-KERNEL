#include <stdint.h>
#include <stddef.h>
#include "screen.h"
#include "io.h"
#ifndef IDT_H
#define IDT_H
struct interrupt_frame
{
    uint16_t ip;
    uint16_t cs;
    uint16_t flags;
    uint16_t sp;
    uint16_t ss;
};
void int0(struct interrupt_frame* frame);
void int1(struct interrupt_frame* frame);
void int2(struct interrupt_frame* frame);
void int3(struct interrupt_frame* frame);
void int4(struct interrupt_frame* frame);
void int5(struct interrupt_frame* frame);
void int6(struct interrupt_frame* frame);
void int7(struct interrupt_frame* frame);
void int8(struct interrupt_frame* frame);
void int9(struct interrupt_frame* frame);
void int10(struct interrupt_frame* frame);
void int11(struct interrupt_frame* frame);
void int12(struct interrupt_frame* frame);
void int13(struct interrupt_frame* frame);
void int14(struct interrupt_frame* frame);
void int15(struct interrupt_frame* frame);
void int16(struct interrupt_frame* frame);
void int17(struct interrupt_frame* frame);
void int18(struct interrupt_frame* frame);
void int19(struct interrupt_frame* frame);
void int20(struct interrupt_frame* frame);
void int21(struct interrupt_frame* frame);
void int22(struct interrupt_frame* frame);
void int23(struct interrupt_frame* frame);
void int24(struct interrupt_frame* frame);
void int25(struct interrupt_frame* frame);
void int26(struct interrupt_frame* frame);
void int27(struct interrupt_frame* frame);
void int28(struct interrupt_frame* frame);
void int29(struct interrupt_frame* frame);
void int30(struct interrupt_frame* frame);
void int31(struct interrupt_frame* frame);
void int32(struct interrupt_frame* frame);
void int33(struct interrupt_frame* frame);
void int34(struct interrupt_frame* frame);
void int35(struct interrupt_frame* frame);
void int36(struct interrupt_frame* frame);
void int37(struct interrupt_frame* frame);
void int38(struct interrupt_frame* frame);
void int39(struct interrupt_frame* frame);
void int40(struct interrupt_frame* frame);
void int41(struct interrupt_frame* frame);
void int42(struct interrupt_frame* frame);
void int43(struct interrupt_frame* frame);
void int44(struct interrupt_frame* frame);
void int45(struct interrupt_frame* frame);
void int46(struct interrupt_frame* frame);
void int47(struct interrupt_frame* frame);
void int48(struct interrupt_frame* frame);
void int49(struct interrupt_frame* frame);
void int50(struct interrupt_frame* frame);
void int51(struct interrupt_frame* frame);
void int52(struct interrupt_frame* frame);
void int53(struct interrupt_frame* frame);
void int54(struct interrupt_frame* frame);
void int55(struct interrupt_frame* frame);
void int56(struct interrupt_frame* frame);
void int57(struct interrupt_frame* frame);
void int58(struct interrupt_frame* frame);
void int59(struct interrupt_frame* frame);
void int60(struct interrupt_frame* frame);
void int61(struct interrupt_frame* frame);
void int62(struct interrupt_frame* frame);
void int63(struct interrupt_frame* frame);
void int64(struct interrupt_frame* frame);
void int65(struct interrupt_frame* frame);
void int66(struct interrupt_frame* frame);
void int67(struct interrupt_frame* frame);
void int68(struct interrupt_frame* frame);
void int69(struct interrupt_frame* frame);
void int70(struct interrupt_frame* frame);
void int71(struct interrupt_frame* frame);
void int72(struct interrupt_frame* frame);
void int73(struct interrupt_frame* frame);
void int74(struct interrupt_frame* frame);
void int75(struct interrupt_frame* frame);
void int76(struct interrupt_frame* frame);
void int77(struct interrupt_frame* frame);
void int78(struct interrupt_frame* frame);
void int79(struct interrupt_frame* frame);
void int80(struct interrupt_frame* frame);
void int81(struct interrupt_frame* frame);
void int82(struct interrupt_frame* frame);
void int83(struct interrupt_frame* frame);
void int84(struct interrupt_frame* frame);
void int85(struct interrupt_frame* frame);
void int86(struct interrupt_frame* frame);
void int87(struct interrupt_frame* frame);
void int88(struct interrupt_frame* frame);
void int89(struct interrupt_frame* frame);
void int90(struct interrupt_frame* frame);
void int91(struct interrupt_frame* frame);
void int92(struct interrupt_frame* frame);
void int93(struct interrupt_frame* frame);
void int94(struct interrupt_frame* frame);
void int95(struct interrupt_frame* frame);
void int96(struct interrupt_frame* frame);
void int97(struct interrupt_frame* frame);
void int98(struct interrupt_frame* frame);
void int99(struct interrupt_frame* frame);
void int100(struct interrupt_frame* frame);
void int101(struct interrupt_frame* frame);
void int102(struct interrupt_frame* frame);
void int103(struct interrupt_frame* frame);
void int104(struct interrupt_frame* frame);
void int105(struct interrupt_frame* frame);
void int106(struct interrupt_frame* frame);
void int107(struct interrupt_frame* frame);
void int108(struct interrupt_frame* frame);
void int109(struct interrupt_frame* frame);
void int110(struct interrupt_frame* frame);
void int111(struct interrupt_frame* frame);
void int112(struct interrupt_frame* frame);
void int113(struct interrupt_frame* frame);
void int114(struct interrupt_frame* frame);
void int115(struct interrupt_frame* frame);
void int116(struct interrupt_frame* frame);
void int117(struct interrupt_frame* frame);
void int118(struct interrupt_frame* frame);
void int119(struct interrupt_frame* frame);
void int120(struct interrupt_frame* frame);
void int121(struct interrupt_frame* frame);
void int122(struct interrupt_frame* frame);
void int123(struct interrupt_frame* frame);
void int124(struct interrupt_frame* frame);
void int125(struct interrupt_frame* frame);
void int126(struct interrupt_frame* frame);
void int127(struct interrupt_frame* frame);
void int128(struct interrupt_frame* frame);
void int129(struct interrupt_frame* frame);
void int130(struct interrupt_frame* frame);
void int131(struct interrupt_frame* frame);
void int132(struct interrupt_frame* frame);
void int133(struct interrupt_frame* frame);
void int134(struct interrupt_frame* frame);
void int135(struct interrupt_frame* frame);
void int136(struct interrupt_frame* frame);
void int137(struct interrupt_frame* frame);
void int138(struct interrupt_frame* frame);
void int139(struct interrupt_frame* frame);
void int140(struct interrupt_frame* frame);
void int141(struct interrupt_frame* frame);
void int142(struct interrupt_frame* frame);
void int143(struct interrupt_frame* frame);
void int144(struct interrupt_frame* frame);
void int145(struct interrupt_frame* frame);
void int146(struct interrupt_frame* frame);
void int147(struct interrupt_frame* frame);
void int148(struct interrupt_frame* frame);
void int149(struct interrupt_frame* frame);
void int150(struct interrupt_frame* frame);
void int151(struct interrupt_frame* frame);
void int152(struct interrupt_frame* frame);
void int153(struct interrupt_frame* frame);
void int154(struct interrupt_frame* frame);
void int155(struct interrupt_frame* frame);
void int156(struct interrupt_frame* frame);
void int157(struct interrupt_frame* frame);
void int158(struct interrupt_frame* frame);
void int159(struct interrupt_frame* frame);
void int160(struct interrupt_frame* frame);
void int161(struct interrupt_frame* frame);
void int162(struct interrupt_frame* frame);
void int163(struct interrupt_frame* frame);
void int164(struct interrupt_frame* frame);
void int165(struct interrupt_frame* frame);
void int166(struct interrupt_frame* frame);
void int167(struct interrupt_frame* frame);
void int168(struct interrupt_frame* frame);
void int169(struct interrupt_frame* frame);
void int170(struct interrupt_frame* frame);
void int171(struct interrupt_frame* frame);
void int172(struct interrupt_frame* frame);
void int173(struct interrupt_frame* frame);
void int174(struct interrupt_frame* frame);
void int175(struct interrupt_frame* frame);
void int176(struct interrupt_frame* frame);
void int177(struct interrupt_frame* frame);
void int178(struct interrupt_frame* frame);
void int179(struct interrupt_frame* frame);
void int180(struct interrupt_frame* frame);
void int181(struct interrupt_frame* frame);
void int182(struct interrupt_frame* frame);
void int183(struct interrupt_frame* frame);
void int184(struct interrupt_frame* frame);
void int185(struct interrupt_frame* frame);
void int186(struct interrupt_frame* frame);
void int187(struct interrupt_frame* frame);
void int188(struct interrupt_frame* frame);
void int189(struct interrupt_frame* frame);
void int190(struct interrupt_frame* frame);
void int191(struct interrupt_frame* frame);
void int192(struct interrupt_frame* frame);
void int193(struct interrupt_frame* frame);
void int194(struct interrupt_frame* frame);
void int195(struct interrupt_frame* frame);
void int196(struct interrupt_frame* frame);
void int197(struct interrupt_frame* frame);
void int198(struct interrupt_frame* frame);
void int199(struct interrupt_frame* frame);
void int200(struct interrupt_frame* frame);
void int201(struct interrupt_frame* frame);
void int202(struct interrupt_frame* frame);
void int203(struct interrupt_frame* frame);
void int204(struct interrupt_frame* frame);
void int205(struct interrupt_frame* frame);
void int206(struct interrupt_frame* frame);
void int207(struct interrupt_frame* frame);
void int208(struct interrupt_frame* frame);
void int209(struct interrupt_frame* frame);
void int210(struct interrupt_frame* frame);
void int211(struct interrupt_frame* frame);
void int212(struct interrupt_frame* frame);
void int213(struct interrupt_frame* frame);
void int214(struct interrupt_frame* frame);
void int215(struct interrupt_frame* frame);
void int216(struct interrupt_frame* frame);
void int217(struct interrupt_frame* frame);
void int218(struct interrupt_frame* frame);
void int219(struct interrupt_frame* frame);
void int220(struct interrupt_frame* frame);
void int221(struct interrupt_frame* frame);
void int222(struct interrupt_frame* frame);
void int223(struct interrupt_frame* frame);
void int224(struct interrupt_frame* frame);
void int225(struct interrupt_frame* frame);
void int226(struct interrupt_frame* frame);
void int227(struct interrupt_frame* frame);
void int228(struct interrupt_frame* frame);
void int229(struct interrupt_frame* frame);
void int230(struct interrupt_frame* frame);
void int231(struct interrupt_frame* frame);
void int232(struct interrupt_frame* frame);
void int233(struct interrupt_frame* frame);
void int234(struct interrupt_frame* frame);
void int235(struct interrupt_frame* frame);
void int236(struct interrupt_frame* frame);
void int237(struct interrupt_frame* frame);
void int238(struct interrupt_frame* frame);
void int239(struct interrupt_frame* frame);
void int240(struct interrupt_frame* frame);
void int241(struct interrupt_frame* frame);
void int242(struct interrupt_frame* frame);
void int243(struct interrupt_frame* frame);
void int244(struct interrupt_frame* frame);
void int245(struct interrupt_frame* frame);
void int246(struct interrupt_frame* frame);
void int247(struct interrupt_frame* frame);
void int248(struct interrupt_frame* frame);
void int249(struct interrupt_frame* frame);
void int250(struct interrupt_frame* frame);
void int251(struct interrupt_frame* frame);
void int252(struct interrupt_frame* frame);
void int253(struct interrupt_frame* frame);
void int254(struct interrupt_frame* frame);
void int255(struct interrupt_frame* frame);

uint64_t create_descriptor(uint32_t offset, uint16_t selector, uint8_t type, uint8_t dpl);
void create_interruptDescriptorTable();
void sendEOI (uint8_t irq);






#endif