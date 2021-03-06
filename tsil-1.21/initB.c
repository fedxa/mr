/* Routines for setup and initialization of B-type functions */

#include "internal.h"

/* **************************************************************** */

void ConstructB (TSIL_BTYPE *b, TSIL_REAL x, TSIL_REAL y, TSIL_REAL qq)
{
  TSIL_REAL sqrtx, sqrty, alphax, alphay;

  b->arg[0] = x;
  b->arg[1] = y;

  b->B_den[0] = Th2 (x, y);
  b->B_den[1] = Ps2 (x, y);

  b->B_cB[0] = 0.5L * b->B_den[0];
  b->B_cB[1] = 0.5L * b->B_den[1];

  sqrtx = TSIL_SQRT(x);
  sqrty = TSIL_SQRT(y);

  alphax = Alpha(x,qq);
  alphay = Alpha(y,qq);

  b->B_c[0] = 0.5L*(sqrtx + sqrty)*(alphax + alphay);
  b->B_c[1] = 0.5L*(sqrtx - sqrty)*(alphax - alphay);
}

