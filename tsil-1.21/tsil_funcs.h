/* Prototypes for functions not in the user API */

#ifndef TSIL_FUNCS_H
#define TSIL_FUNCS_H

#include "tsil.h"

/* Setup and initialization functions */
void Construct             (TSIL_DATA *);
void InitialValue          (TSIL_DATA *, TSIL_COMPLEX);
void InitialValueThreshAt0 (TSIL_DATA *, TSIL_COMPLEX);

/* High-level evaluation functions */
int  CaseSpecial (TSIL_DATA *);
void CaseGeneric (TSIL_DATA *);

/* Miscellaneous functions */
TSIL_REAL    MaxAbs    (TSIL_REAL *, int);
TSIL_REAL    MinAbs    (TSIL_REAL *, int);
TSIL_COMPLEX AddIeps   (TSIL_COMPLEX);
TSIL_COMPLEX EtaBranch (TSIL_COMPLEX, TSIL_COMPLEX);
TSIL_REAL    Alpha     (TSIL_REAL, TSIL_REAL); 
TSIL_COMPLEX Delta     (TSIL_COMPLEX, TSIL_COMPLEX, TSIL_COMPLEX); /* Eq. 2.29 */
TSIL_COMPLEX Del       (void);
TSIL_COMPLEX I2        (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX I20xy     (TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX I200x     (TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX I2p       (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX I2p2      (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX xI2p2     (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX I2pp      (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX I2p3      (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX Dilog     (TSIL_COMPLEX);
TSIL_COMPLEX Trilog    (TSIL_COMPLEX);
TSIL_COMPLEX fPT       (TSIL_REAL, TSIL_REAL);
void         Rescale   (TSIL_DATA *);
void         Unscale   (TSIL_DATA *);
void         ScaleData (TSIL_DATA *, TSIL_REAL);
int          NearThreshold (TSIL_DATA *, TSIL_REAL *, TSIL_REAL);
TSIL_REAL    Th2 (TSIL_REAL, TSIL_REAL);
TSIL_REAL    Ps2 (TSIL_REAL, TSIL_REAL);
void         swapR (TSIL_REAL *, TSIL_REAL *);
void         swapC (TSIL_COMPLEX *, TSIL_COMPLEX *);
void         Permuteresults (TSIL_DATA *, int p);
void         CheckConsistent (TSIL_COMPLEX, TSIL_COMPLEX);

/* Analytic special cases */
TSIL_COMPLEX A         (TSIL_REAL, TSIL_REAL); 
TSIL_COMPLEX Ap        (TSIL_REAL, TSIL_REAL); 
TSIL_COMPLEX Aeps      (TSIL_REAL, TSIL_REAL);

TSIL_COMPLEX B    (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX Beps (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX Bp   (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX B0x  (TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX B00  (TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX dBds_analytic (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);

int          Sanalytic (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_COMPLEX,
			TSIL_REAL, TSIL_COMPLEX *);
TSIL_COMPLEX S0xy      (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX S00x      (TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX S000      (TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX SxyyAtx   (TSIL_REAL, TSIL_REAL, TSIL_REAL);

int          Tanalytic (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_COMPLEX,
			TSIL_REAL, TSIL_COMPLEX *);
TSIL_COMPLEX Tx0y      (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX Tx00      (TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX TxyyAtx   (TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX TyyxAtx   (TSIL_REAL, TSIL_REAL, TSIL_REAL);

int          Tbaranalytic (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_COMPLEX,
			   TSIL_REAL, TSIL_COMPLEX *);
TSIL_COMPLEX Tbar0xy      (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX Tbar00x      (TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX Tbar000      (TSIL_COMPLEX, TSIL_REAL);

int          Uanalytic (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL,
			TSIL_COMPLEX, TSIL_REAL, TSIL_COMPLEX *);
void         CorrectUs (TSIL_DATA *foo);
TSIL_COMPLEX U0000     (TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX Ux000     (TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX U0x00     (TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX U000x     (TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX Uxy0y     (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX U0x0y     (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX U00xx     (TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX U00xy     (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX U0xyz     (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX Uxy00     (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX Uxx00     (TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX U0x0y     (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX Ux00y     (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX Ux0yyAtx  (TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX Uy0yxAtx  (TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX Ux0yzAtx  (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_COMPLEX **tptr, TSIL_REAL);

int          Vanalytic (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL,
			TSIL_COMPLEX, TSIL_REAL, TSIL_COMPLEX *);
TSIL_COMPLEX Vxy0y     (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX V0xyz     (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX V0x0y     (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX V0x0x     (TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);
TSIL_COMPLEX V0x00     (TSIL_REAL, TSIL_COMPLEX, TSIL_REAL);

int          Manalytic (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL,
			TSIL_REAL, TSIL_COMPLEX, TSIL_COMPLEX *);
TSIL_COMPLEX Mxxyy0    (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX);
TSIL_COMPLEX M00xx0    (TSIL_REAL, TSIL_COMPLEX);
TSIL_COMPLEX M00xy0    (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX);
TSIL_COMPLEX M000x0    (TSIL_REAL, TSIL_COMPLEX);
TSIL_COMPLEX M0000x    (TSIL_REAL, TSIL_COMPLEX);
TSIL_COMPLEX M0x0xx    (TSIL_REAL, TSIL_COMPLEX);
TSIL_COMPLEX M00000    (TSIL_COMPLEX);
TSIL_COMPLEX M0x0y0    (TSIL_REAL, TSIL_REAL, TSIL_COMPLEX);
TSIL_COMPLEX M0xx00    (TSIL_REAL, TSIL_COMPLEX);
TSIL_COMPLEX M0xxx0    (TSIL_REAL, TSIL_COMPLEX);
TSIL_COMPLEX M0x0x0    (TSIL_REAL, TSIL_COMPLEX);
TSIL_COMPLEX M000xx    (TSIL_REAL, TSIL_COMPLEX);
TSIL_COMPLEX M0xx0xAtx (TSIL_REAL);
TSIL_COMPLEX M0yy0xAtx (TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX M0xy0yAtx (TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX S12FKV    (TSIL_COMPLEX);

/* For setting auxiliary values after other functions are known: */
void SetV    (TSIL_DATA *);
void SetTbar (TSIL_DATA *);
void SetBold (TSIL_DATA *);

/* The Runge-Kutta routines */
int  rk6 (TSIL_DATA *, TSIL_COMPLEX *, TSIL_COMPLEX *, TSIL_REAL, int, TSIL_REAL, int);
void rk5 (TSIL_DATA *, TSIL_COMPLEX *, TSIL_COMPLEX, TSIL_REAL, int);
int  rk6_STU (TSIL_DATA *, TSIL_COMPLEX *, TSIL_COMPLEX *, TSIL_REAL, int, TSIL_REAL, int);
void rk5_STU (TSIL_DATA *, TSIL_COMPLEX *, TSIL_COMPLEX, TSIL_REAL, int);
int  rk6_ST (TSIL_DATA *, TSIL_COMPLEX *, TSIL_COMPLEX *, TSIL_REAL, int, TSIL_REAL, int);
void rk5_ST (TSIL_DATA *, TSIL_COMPLEX *, TSIL_COMPLEX, TSIL_REAL, int);
int  Integrate (TSIL_DATA *, TSIL_COMPLEX, TSIL_COMPLEX, int, int, TSIL_REAL);

/* "Constructors", series expansions, and derivatives of basis functions: */
void         ConstructB   (TSIL_BTYPE *, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX dBds         (TSIL_BTYPE, TSIL_COMPLEX);
TSIL_COMPLEX BAtZero      (TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX BprimeAtZero (TSIL_REAL, TSIL_REAL, TSIL_REAL);

void         ConstructS   (TSIL_STYPE *, int, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX dSds         (TSIL_STYPE, TSIL_COMPLEX);
TSIL_COMPLEX SAtZero      (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX SprimeAtZero (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);

void         ConstructT   (TSIL_TTYPE *, int, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX dTds         (TSIL_TTYPE, TSIL_COMPLEX);
TSIL_COMPLEX TAtZero      (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX TprimeAtZero (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);

void         ConstructU     (TSIL_UTYPE *, int, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX dUds           (TSIL_UTYPE, TSIL_COMPLEX);
TSIL_COMPLEX UAtZero        (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX UprimeAtZero   (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);

void         ConstructV    (TSIL_VTYPE *, int, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);

int          ConstructM    (TSIL_MTYPE *, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX dsMds         (TSIL_MTYPE, TSIL_COMPLEX);
TSIL_COMPLEX sMAtZero      (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);
TSIL_COMPLEX sMprimeAtZero (TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL, TSIL_REAL);

/* Output and status functions */
int  UnnaturalCase (TSIL_DATA *);
void cfprintf      (FILE *, double complex);
void cfprintfM     (FILE *, double complex);

/* Diagnostics */
void PrintDerivs (TSIL_DATA *);
void PrintCoeffs (TSIL_DATA *);

#endif /* TSIL_FUNCS_H */
