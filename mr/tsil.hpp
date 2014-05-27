#ifndef __TSIL_HPP__
#define __TSIL_HPP__
// #include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <complex>


#ifdef __cplusplus
extern "C"{
#endif  

#include "tsil.h"  

#ifdef __cplusplus
}
#endif

// workaround for using C99 complex with C++ std::complex
#ifdef complex                 
#undef complex
#endif

class TsilST
{
protected:
  TSIL_DATA    result;
  bool      evaluated;
  TSIL_REAL     scale;
  TSIL_REAL         s;
public:
  
  TsilST()
  {
    evaluated = false;
  }

  TsilST(TSIL_REAL x, TSIL_REAL y, TSIL_REAL z, TSIL_REAL qq)
  {
    TSIL_SetParametersST (&result, x, y, z, qq); 
    evaluated = false;
  }

  TsilST(TSIL_REAL x, TSIL_REAL y, TSIL_REAL z, TSIL_REAL qq, TSIL_REAL s_): scale(qq), s(s_)
  {
    TSIL_SetParametersST (&result, x, y, z, qq); 
    this->evaluate(s); 
  }

  void evaluate(TSIL_REAL s)
  {
    TSIL_Evaluate (&result, s);
    evaluated = true;
  }

  static std::complex<long double> A(TSIL_REAL m, TSIL_REAL qq)
  {
    return TSIL_A(m,qq);
  }

  static std::complex<long double> Aeps(TSIL_REAL m, TSIL_REAL qq)
  {
    return TSIL_Aeps(m,qq);
  }

  static std::complex<long double> B(TSIL_REAL m1, TSIL_REAL m2,TSIL_REAL s,TSIL_REAL qq)
  {
    return TSIL_B(m1, m2, s, qq);
  }

  static std::complex<long double> Beps(TSIL_REAL m1, TSIL_REAL m2,TSIL_REAL s,TSIL_REAL qq)
  {
    return TSIL_Beps(m1, m2, s, qq);
  }

  static std::complex<long double> I2(TSIL_REAL x, TSIL_REAL y,TSIL_REAL z,TSIL_REAL qq)
  {
    return TSIL_Aeps(x, qq) + TSIL_Aeps(y, qq) + TSIL_Aeps(z, qq) + TSIL_I2(x, y, z, qq);
  }

  // 
  // S-type
  // 
  inline std::complex<long double> Svyz(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Svyz", -epsord);
  }

  inline std::complex<long double> Suxv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Suxv", -epsord);
  }

  // 
  // T-type
  // 
  inline std::complex<long double> Tvyz(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Tvyz", -epsord);
  }

  inline std::complex<long double> Tuxv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Tuxv", -epsord);
  }

  inline std::complex<long double> Tyzv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Tyzv", -epsord);
  }
 
  inline std::complex<long double> Txuv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Txuv", -epsord);
  }
  
  inline std::complex<long double> Tzyv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Tzyv", -epsord);
  }

  inline std::complex<long double> Tvxu(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Tvxu", -epsord);
  }

  void print()
  {
    if(evaluated) TSIL_PrintData (&result);
    else std::cout << "Integral unevaluated!!!" <<  std::endl;
  }

};


class TsilSTU : public TsilST 
{
  public:

  TsilSTU()
  {
    evaluated = false;
  }

  TsilSTU(TSIL_REAL x, TSIL_REAL z, TSIL_REAL u, TSIL_REAL v, TSIL_REAL qq)
  {
    TSIL_SetParametersSTU (&result, x, z, u, v, qq); 
    evaluated = false;
  }

  TsilSTU(TSIL_REAL x, TSIL_REAL z, TSIL_REAL u, TSIL_REAL v, TSIL_REAL qq, TSIL_REAL s_)
  {
    scale = qq;
    s = s_;
    TSIL_SetParametersSTU (&result, x, z, u, v, qq); 
    this->evaluate(s); 
  }

  // 
  // U-type
  // 
  inline std::complex<long double> Uzxyv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Uzxyv", -epsord);
  }

  inline std::complex<long double> Uuyxv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Uuyxv", -epsord);
  }

  inline std::complex<long double> Uxzuv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Uxzuv", -epsord);
  }

  inline std::complex<long double> Uyuzv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Uyuzv", -epsord);
  }

  
  // 
  // V-type
  // 
  inline std::complex<long double> Vzxyv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Vzxyv", -epsord);
  }

  inline std::complex<long double> Vuyxv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Vuyxv", -epsord);
  }

  inline std::complex<long double> Vxzuv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Vxzuv", -epsord);
  }

  inline std::complex<long double> Vyuzv(int epsord)
  {
    return TSIL_GetBoldFunction(&result, "Vyuzv", -epsord);
  }


};

class Tsil : public TsilSTU
{

public:
  Tsil(TSIL_REAL x, TSIL_REAL y, TSIL_REAL z, TSIL_REAL u, TSIL_REAL v, TSIL_REAL qq)
  {
    TSIL_SetParameters (&result, x, y, z, u, v, qq); 
    evaluated = false;
  }

  Tsil(TSIL_REAL x, TSIL_REAL y, TSIL_REAL z, TSIL_REAL u, TSIL_REAL v, TSIL_REAL qq, TSIL_REAL s_)
  {
    scale = qq;
    s = s_;  
    TSIL_SetParameters (&result, x, y, z, u, v, qq); 
    this->evaluate(s); 
  }

  void evaluate(TSIL_REAL s)
  {
    TSIL_Evaluate (&result, s);
    evaluated = true;
  }

  // 
  // M-type
  // 
  inline std::complex<long double> M(int epsord=0)
  {
    return TSIL_GetFunction(&result, "M");
  }



  void print()
  {
    if(evaluated) TSIL_PrintData (&result);
    else std::cout << "Integral unevaluated!!!" <<  std::endl;
  }

};



std::complex<long double> csqrt(long double);
std::complex<long double> Li2(std::complex<long double>);
std::complex<long double> Li3(std::complex<long double>);

std::complex<long double> acc(std::complex<long double>);
std::complex<long double> inv(std::complex<long double>);



#endif  // __TSIL_HPP__