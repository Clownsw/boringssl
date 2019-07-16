/********************************************************************************************
* SIDH: an efficient supersingular isogeny cryptography library
*
* Abstract: supersingular isogeny parameters and generation of functions for P434
*********************************************************************************************/

#include "utils.h"

// Parameters for isogeny system "SIKE"
const struct params_t params = {
    .prime = {
        U64_TO_WORDS(0xFFFFFFFFFFFFFFFF), U64_TO_WORDS(0xFFFFFFFFFFFFFFFF),
        U64_TO_WORDS(0xFFFFFFFFFFFFFFFF), U64_TO_WORDS(0xFDC1767AE2FFFFFF),
        U64_TO_WORDS(0x7BC65C783158AEA3), U64_TO_WORDS(0x6CFC5FD681C52056),
        U64_TO_WORDS(0x0002341F27177344)
    },
    .prime_p1 = {
        U64_TO_WORDS(0x0000000000000000), U64_TO_WORDS(0x0000000000000000),
        U64_TO_WORDS(0x0000000000000000), U64_TO_WORDS(0xFDC1767AE3000000),
        U64_TO_WORDS(0x7BC65C783158AEA3), U64_TO_WORDS(0x6CFC5FD681C52056),
        U64_TO_WORDS(0x0002341F27177344)
    },
    .prime_x2 = {
        U64_TO_WORDS(0xFFFFFFFFFFFFFFFE), U64_TO_WORDS(0xFFFFFFFFFFFFFFFF),
        U64_TO_WORDS(0xFFFFFFFFFFFFFFFF), U64_TO_WORDS(0xFB82ECF5C5FFFFFF),
        U64_TO_WORDS(0xF78CB8F062B15D47), U64_TO_WORDS(0xD9F8BFAD038A40AC),
        U64_TO_WORDS(0x0004683E4E2EE688)
    },
    .A_gen = {
        U64_TO_WORDS(0x05ADF455C5C345BF), U64_TO_WORDS(0x91935C5CC767AC2B),
        U64_TO_WORDS(0xAFE4E879951F0257), U64_TO_WORDS(0x70E792DC89FA27B1),
        U64_TO_WORDS(0xF797F526BB48C8CD), U64_TO_WORDS(0x2181DB6131AF621F),
        U64_TO_WORDS(0x00000A1C08B1ECC4), // XPA0
        U64_TO_WORDS(0x74840EB87CDA7788), U64_TO_WORDS(0x2971AA0ECF9F9D0B),
        U64_TO_WORDS(0xCB5732BDF41715D5), U64_TO_WORDS(0x8CD8E51F7AACFFAA),
        U64_TO_WORDS(0xA7F424730D7E419F), U64_TO_WORDS(0xD671EB919A179E8C),
        U64_TO_WORDS(0x0000FFA26C5A924A), // XPA1
        U64_TO_WORDS(0xFEC6E64588B7273B), U64_TO_WORDS(0xD2A626D74CBBF1C6),
        U64_TO_WORDS(0xF8F58F07A78098C7), U64_TO_WORDS(0xE23941F470841B03),
        U64_TO_WORDS(0x1B63EDA2045538DD), U64_TO_WORDS(0x735CFEB0FFD49215),
        U64_TO_WORDS(0x0001C4CB77542876), // XQA0
        U64_TO_WORDS(0xADB0F733C17FFDD6), U64_TO_WORDS(0x6AFFBD037DA0A050),
        U64_TO_WORDS(0x680EC43DB144E02F), U64_TO_WORDS(0x1E2E5D5FF524E374),
        U64_TO_WORDS(0xE2DDA115260E2995), U64_TO_WORDS(0xA6E4B552E2EDE508),
        U64_TO_WORDS(0x00018ECCDDF4B53E), // XQA1
        U64_TO_WORDS(0x01BA4DB518CD6C7D), U64_TO_WORDS(0x2CB0251FE3CC0611),
        U64_TO_WORDS(0x259B0C6949A9121B), U64_TO_WORDS(0x60E17AC16D2F82AD),
        U64_TO_WORDS(0x3AA41F1CE175D92D), U64_TO_WORDS(0x413FBE6A9B9BC4F3),
        U64_TO_WORDS(0x00022A81D8D55643), // XRA0
        U64_TO_WORDS(0xB8ADBC70FC82E54A), U64_TO_WORDS(0xEF9CDDB0D5FADDED),
        U64_TO_WORDS(0x5820C734C80096A0), U64_TO_WORDS(0x7799994BAA96E0E4),
        U64_TO_WORDS(0x044961599E379AF8), U64_TO_WORDS(0xDB2B94FBF09F27E2),
        U64_TO_WORDS(0x0000B87FC716C0C6)  // XRA1
    },
    .B_gen = {
        U64_TO_WORDS(0x6E5497556EDD48A3), U64_TO_WORDS(0x2A61B501546F1C05),
        U64_TO_WORDS(0xEB919446D049887D), U64_TO_WORDS(0x5864A4A69D450C4F),
        U64_TO_WORDS(0xB883F276A6490D2B), U64_TO_WORDS(0x22CC287022D5F5B9),
        U64_TO_WORDS(0x0001BED4772E551F), // XPB0
        U64_TO_WORDS(0x0000000000000000), U64_TO_WORDS(0x0000000000000000),
        U64_TO_WORDS(0x0000000000000000), U64_TO_WORDS(0x0000000000000000),
        U64_TO_WORDS(0x0000000000000000), U64_TO_WORDS(0x0000000000000000),
        U64_TO_WORDS(0x0000000000000000), // XPB1
        U64_TO_WORDS(0xFAE2A3F93D8B6B8E), U64_TO_WORDS(0x494871F51700FE1C),
        U64_TO_WORDS(0xEF1A94228413C27C), U64_TO_WORDS(0x498FF4A4AF60BD62),
        U64_TO_WORDS(0xB00AD2A708267E8A), U64_TO_WORDS(0xF4328294E017837F),
        U64_TO_WORDS(0x000034080181D8AE), // XQB0
        U64_TO_WORDS(0x0000000000000000), U64_TO_WORDS(0x0000000000000000),
        U64_TO_WORDS(0x0000000000000000), U64_TO_WORDS(0x0000000000000000),
        U64_TO_WORDS(0x0000000000000000), U64_TO_WORDS(0x0000000000000000),
        U64_TO_WORDS(0x0000000000000000), // XQB1
        U64_TO_WORDS(0x283B34FAFEFDC8E4), U64_TO_WORDS(0x9208F44977C3E647),
        U64_TO_WORDS(0x7DEAE962816F4E9A), U64_TO_WORDS(0x68A2BA8AA262EC9D),
        U64_TO_WORDS(0x8176F112EA43F45B), U64_TO_WORDS(0x02106D022634F504),
        U64_TO_WORDS(0x00007E8A50F02E37), // XRB0
        U64_TO_WORDS(0xB378B7C1DA22CCB1), U64_TO_WORDS(0x6D089C99AD1D9230),
        U64_TO_WORDS(0xEBE15711813E2369), U64_TO_WORDS(0x2B35A68239D48A53),
        U64_TO_WORDS(0x445F6FD138407C93), U64_TO_WORDS(0xBEF93B29A3F6B54B),
        U64_TO_WORDS(0x000173FA910377D3)  // XRB1
    },
    .mont_R2 = {
        U64_TO_WORDS(0x28E55B65DCD69B30), U64_TO_WORDS(0xACEC7367768798C2),
        U64_TO_WORDS(0xAB27973F8311688D), U64_TO_WORDS(0x175CC6AF8D6C7C0B),
        U64_TO_WORDS(0xABCD92BF2DDE347E), U64_TO_WORDS(0x69E16A61C7686D9A),
        U64_TO_WORDS(0x000025A89BCDD12A)
    },
    .mont_one = {
        U64_TO_WORDS(0x000000000000742C), U64_TO_WORDS(0x0000000000000000),
        U64_TO_WORDS(0x0000000000000000), U64_TO_WORDS(0xB90FF404FC000000),
        U64_TO_WORDS(0xD801A4FB559FACD4), U64_TO_WORDS(0xE93254545F77410C),
        U64_TO_WORDS(0x0000ECEEA7BD2EDA)
    },
    .mont_six = {
        U64_TO_WORDS(0x000000000002B90A), U64_TO_WORDS(0x0000000000000000),
        U64_TO_WORDS(0x0000000000000000), U64_TO_WORDS(0x5ADCCB2822000000),
        U64_TO_WORDS(0x187D24F39F0CAFB4), U64_TO_WORDS(0x9D353A4D394145A0),
        U64_TO_WORDS(0x00012559A0403298)
    },
    .A_strat = {
        0x30, 0x1C, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x01,
        0x01, 0x04, 0x02, 0x01, 0x01, 0x02, 0x01, 0x01, 0x08, 0x04,
        0x02, 0x01, 0x01, 0x02, 0x01, 0x01, 0x04, 0x02, 0x01, 0x01,
        0x02, 0x01, 0x01, 0x0D, 0x07, 0x04, 0x02, 0x01, 0x01, 0x02,
        0x01, 0x01, 0x03, 0x02, 0x01, 0x01, 0x01, 0x01, 0x05, 0x04,
        0x02, 0x01, 0x01, 0x02, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01,
        0x15, 0x0C, 0x07, 0x04, 0x02, 0x01, 0x01, 0x02, 0x01, 0x01,
        0x03, 0x02, 0x01, 0x01, 0x01, 0x01, 0x05, 0x03, 0x02, 0x01,
        0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x09, 0x05, 0x03,
        0x02, 0x01, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x04,
        0x02, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01
    },
    .B_strat = {
        0x42, 0x21, 0x11, 0x09, 0x05, 0x03, 0x02, 0x01, 0x01, 0x01,
        0x01, 0x02, 0x01, 0x01, 0x01, 0x04, 0x02, 0x01, 0x01, 0x01,
        0x02, 0x01, 0x01, 0x08, 0x04, 0x02, 0x01, 0x01, 0x01, 0x02,
        0x01, 0x01, 0x04, 0x02, 0x01, 0x01, 0x02, 0x01, 0x01, 0x10,
        0x08, 0x04, 0x02, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x04,
        0x02, 0x01, 0x01, 0x02, 0x01, 0x01, 0x08, 0x04, 0x02, 0x01,
        0x01, 0x02, 0x01, 0x01, 0x04, 0x02, 0x01, 0x01, 0x02, 0x01,
        0x01, 0x20, 0x10, 0x08, 0x04, 0x03, 0x01, 0x01, 0x01, 0x01,
        0x02, 0x01, 0x01, 0x04, 0x02, 0x01, 0x01, 0x02, 0x01, 0x01,
        0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x01, 0x01, 0x04, 0x02,
        0x01, 0x01, 0x02, 0x01, 0x01, 0x10, 0x08, 0x04, 0x02, 0x01,
        0x01, 0x02, 0x01, 0x01, 0x04, 0x02, 0x01, 0x01, 0x02, 0x01,
        0x01, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02, 0x01, 0x01, 0x04,
        0x02, 0x01, 0x01, 0x02, 0x01, 0x01
    }
};
