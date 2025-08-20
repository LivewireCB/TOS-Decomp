#include "revolution/AXFX.h"

BOOL AXFXReverbStdInit(AXFX_REVERBHI *fx) {

  return AXFXReverbHiExpInit(&fx->exp);
}

BOOL AXFXReverbStdShutdown(AXFX_REVERBHI *fx) {
  AXFXReverbStdExpShutdown(&fx->exp);
  return TRUE;
}

void AXFXReverbStdCallback(void *chans, void *context) {
  AXFXReverbStdExpCallback((AXFX_BUFFERUPDATE *)chans,
                           (AXFX_REVERBHI_EXP *)context);
}
