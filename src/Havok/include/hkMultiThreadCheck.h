#ifndef HKMULTITHREADCHECK_H
#define HKMULTITHREADCHECK_H
#include <types.h>

struct hkMultiThreadCheck
{
    // Unsure if these sizes are correct.
    // DWEX is a pita

    U16 m_threadld;
    U8 m_markCount;
    U8 m_markBitStack;

    void disableChecks();
    void enableChecks();
};

#endif
