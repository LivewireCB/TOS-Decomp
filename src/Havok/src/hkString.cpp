#include "Havok\include\hkString.h"

namespace hkString
{
    S32 vsnprintf(char* s, int n, const char* format, void* unk)
    {
        __va_list_struct list[1];

        hkString::memCpy(list, unk, 0xc);
        return ::vsnprintf(s, n, format, list);
    }

    S32 snprintf(char* s, int n, const char* format, ...)
    {
        __va_list_struct list[2];

        return ::vsnprintf(s, n, format, list);
    }

    S32 strCmp(const char* str1, const char* str2)
    {
        return strcmp(str1, str2);
    }

    S32 strNcmp(const char* str1, const char* str2, int size)
    {
        return strncmp(str1, str2, size);
    }

    char* strCpy(char* str1, const char* str2)
    {
        return strcpy(str1, str2);
    }

    S32 strLen(const char* str)
    {
        return strlen(str);
    }

    S32 atoi(const char* str, int base)
    {
        char** end = 0;
        return strtoul(str, end, base);
    }

    S32 strChr(const char* str, int chr)
    {
        strchr(str, chr);
    }

    char* strDup(const char* str1)
    {
        S32 sVar1;
        char* __dest;

        sVar1 = (U32)strlen(str1);
        // allocate param1 is S32, param2 is the enum. Objdiff says the sVar + 1 arg shouldnt exist
        __dest = hkThreadMemory__s_threadMemoryInstance.allocate(sVar1 + 1, HK_MEMORY_CLASS_STRING);
        strcpy(__dest, (str1));
        return __dest;
    }

    S32 memCpy(void* dst, const void* src, int n)
    {
        memcpy(dst, src, n);
    }

    S32 memMove(void* dst, const void* src, int n)
    {
        memmove(dst, src, n);
    }

    S32 memSet(void* dst, int c, int n)
    {
        memset(dst, c, n);
    }

} // namespace hkString
