#ifndef MSGBUF_H
#define MSGBUF_H

#include "MetroTRK\include\TRK_Types.h"
#include "MetroTRK\include\portable\dserror.h"
#include "MetroTRK\include\portable\mutex_TRK.h"
#include <MSL_C/include/size_t.h>

typedef int MessageBufferID;

typedef struct MessageBuffer {
  DSMutex fMutex;
  int fInUse;
  unsigned int fLength;
  unsigned int fPosition;
  unsigned char fData[0x880];
} MessageBuffer;

int TRKReadBuffer(MessageBuffer *, void *, size_t);
void TRKReleaseBuffer(MessageBufferID);
int TRKGetFreeBuffer(MessageBufferID *, MessageBuffer **);
int TRKSetBufferPosition(MessageBuffer *, unsigned int);
MessageBuffer *TRKGetBuffer(MessageBufferID);
int TRKAppendBuffer_ui8(MessageBuffer *, const ui8 *, int);

int TRKAppendBuffer_ui32(MessageBuffer *buffer, const ui32 *data, int count);
int TRKReadBuffer_ui32(MessageBuffer *buffer, ui32 *data, int count);

#endif // MSGBUF_H
