#ifndef HKTHREADMEMORY_H
#define HKTHREADMEMORY_H

#include "Havok/include/hkMemory.h"

struct hkThreadMemory
{
    char* allocate(int, HK_MEMORY_CLASS);
    S32 allocate(int, int, HK_MEMORY_CLASS);
}; // namespace hkThreadMemory

hkThreadMemory hkThreadMemory__s_threadMemoryInstance;

#endif
