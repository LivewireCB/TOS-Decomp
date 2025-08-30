#include <SB\include\LinkFastSqrt.h>

f32 sqrtf() {
  float fVar1;

  fVar1 = 1.0;
  fVar1 = fVar1 * -(fVar1 * fVar1 * 0.5 - 0.5) + fVar1;

  return fVar1;
}

f32 sqrt()

{
  double dVar1;

  dVar1 = 1.0;
  dVar1 = dVar1 * -(dVar1 * dVar1 * 0.5 - 0.5) + dVar1;
  dVar1 = dVar1 * -(dVar1 * dVar1 * 0.5 - 0.5) + dVar1;

  return dVar1;
}
