
#include "havok/include/hkMultiThreadCheck.h"

void hkMultiThreadCheck::disableChecks()
{
    // this is interesting
    *(U32*)(this) = 0xffffffd1;
}

void hkMultiThreadCheck::enableChecks()
{
    if (*(U32*)(this) != -0x2f)
    {
        return;
    }
    *(U32*)(this) = 0xfffffff1;
    *(U16*)(this + 1) = 0;
}
