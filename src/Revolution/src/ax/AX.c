#include <revolution/AX.h>
#include <revolution/OS.h>

const char *__AXVersion =
    "<< RVL_SDK - AX \trelease build: Feb 27 2009 10:01:36 (0x4302_145) >>";

static BOOL __init = FALSE;

// void AXInit(void) { AXInitEx(0); }

void AXInit() {
  if (!__init) {
    OSRegisterVersion(__AXVersion);

    __AXAllocInit();
    __AXVPBInit();
    __AXSPBInit();
    __AXAuxInit();
    __AXClInit();
    __AXOutInit(0);

    __init = TRUE;
  }
}

void AXQuit() {
  if (__init != 0) {

    __AXOutQuit();
    __AXAllocInit();
    __AXVPBQuit();
    __AXAuxInit();
    __AXClInit();
    __AXAuxQuit();

    __init = FALSE;
  }
}

u32 AXIsInit() { return __init; }
