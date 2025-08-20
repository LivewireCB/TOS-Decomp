#ifndef MSGHNDLR_H
#define MSGHNDLR_H

#include "MetroTRK\include\portable\dserror.h"
#include "MetroTRK\include\portable\msgbuf.h"

static int *IsTRKConnected;

DSError TRKDoConnect(MessageBuffer *);
DSError TRKDoDisconnect(MessageBuffer *);
DSError TRKDoReset(MessageBuffer *);
DSError TRKDoVersions(MessageBuffer *);
DSError TRKDoSupportMask(MessageBuffer *);
DSError TRKDoOverride(MessageBuffer *);
DSError TRKDoReadMemory(MessageBuffer *);
DSError TRKDoWriteMemory(MessageBuffer *);
DSError TRKDoReadRegisters(MessageBuffer *);
DSError TRKDoWriteRegisters(MessageBuffer *);
DSError TRKDoContinue(MessageBuffer *);
DSError TRKDoStep(MessageBuffer *);
DSError TRKDoStop(MessageBuffer *);
DSError TRKDoSetOption(MessageBuffer *);

void SetTRKConnected(int);
DSError GetTRKConnected(void);

#endif // MSGHNDLR_H
