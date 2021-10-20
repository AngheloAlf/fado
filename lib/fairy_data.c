#include "fairy.h"
#include <elf.h>

#define FAIRY_DEF_STRING(prefix, x) \
    { prefix##_##x, #x }

// clang-format off
static const FairyDefineString stTypes[] = {
    FAIRY_DEF_STRING(STT, NOTYPE),
    FAIRY_DEF_STRING(STT, OBJECT),
    FAIRY_DEF_STRING(STT, FUNC),
    FAIRY_DEF_STRING(STT, SECTION),
    FAIRY_DEF_STRING(STT, FILE),
    FAIRY_DEF_STRING(STT, COMMON),
    FAIRY_DEF_STRING(STT, TLS),
    FAIRY_DEF_STRING(STT, NUM),
    FAIRY_DEF_STRING(STT, LOOS),
    FAIRY_DEF_STRING(STT, GNU_IFUNC),
    FAIRY_DEF_STRING(STT, HIOS),
    FAIRY_DEF_STRING(STT, LOPROC),
    FAIRY_DEF_STRING(STT, HIPROC),
    { 0 },
};

static const FairyDefineString stBinds[] = {
    FAIRY_DEF_STRING(STB, LOCAL),
    FAIRY_DEF_STRING(STB, GLOBAL),
    FAIRY_DEF_STRING(STB, WEAK),
    FAIRY_DEF_STRING(STB, NUM),
    FAIRY_DEF_STRING(STB, LOOS),
    FAIRY_DEF_STRING(STB, GNU_UNIQUE),
    FAIRY_DEF_STRING(STB, HIOS),
    FAIRY_DEF_STRING(STB, LOPROC),
    FAIRY_DEF_STRING(STB, HIPROC),
    { 0 },
};
static const FairyDefineString stVisibilities[] = {
    FAIRY_DEF_STRING(STV, DEFAULT),
    FAIRY_DEF_STRING(STV, INTERNAL),
    FAIRY_DEF_STRING(STV, HIDDEN),
    FAIRY_DEF_STRING(STV, PROTECTED),
    { 0 },
};
// clang-format on
