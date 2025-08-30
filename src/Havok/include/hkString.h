#ifndef HKSTRING_H
#define HKSTRING_H

#include "MSL_C/include/string.h"
#include "MSL_C/include/strtoul.h"
#include "MSL_C/include/printf.h"
#include "Havok/include/hkThreadMemory.h"

namespace hkString
{
    S32 strCmp(const char* str1, const char* str2);
    S32 strNcmp(const char* str1, const char* str2, int size);
    char* strCpy(char* str1, const char* str2);
    S32 strLen(const char* str);
    S32 atoi(const char* str, int base);
    S32 strChr(const char* str, int chr);
    S32 memCpy(void* dst, const void* src, int n);
    S32 memMove(void* dst, const void* src, int n);
    S32 memSet(void* dst, int c, int n);
} // namespace hkString

#endif
