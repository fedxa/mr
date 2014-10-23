#include <tt.hpp>
std::complex<long double> tt::m11(size_t nL, size_t nH)
{     
      
      
    std::complex<long double> mtt[66], mttret;

    mtt[1]=pow(CW,-1);
    mtt[2]=pow(MMH,-1);
    mtt[3]=pow(MMZ,-1);
    mtt[4]=pow(MMt,-1);
    mtt[5]=pow(SW,-1);
    mtt[6]=double(nH);
    mtt[7]=Tsil::A(MMt,mu2);
    mtt[8]=Tsil::I2(MMH,MMt,MMt,mu2);
    mtt[9]=Tsil::I2(MMZ,MMt,MMt,mu2);
    mtt[10]=Tsil::I2(0,MMW,MMt,mu2);
    mtt[11]=Tsil::B(MMH,MMt,MMt,mu2);
    mtt[12]=Tsil::A(MMH,mu2);
    mtt[13]=Tsil::B(MMZ,MMt,MMt,mu2);
    mtt[14]=Tsil::A(MMZ,mu2);
    mtt[15]=Tsil::Beps(MMH,MMt,MMt,mu2);
    mtt[16]=Tsil::Beps(MMZ,MMt,MMt,mu2);
    mtt[17]=Tsil::A(MMW,mu2);
    mtt[18]=std::real(Tsil::B(0,MMW,MMt,mu2));
    mtt[19]=Tsil::Aeps(MMH,mu2);
    mtt[20]=Tsil::Aeps(MMZ,mu2);
    mtt[21]=Tsil::Aeps(MMW,mu2);
    mtt[22]=Tsil::Aeps(MMt,mu2);
    mtt[23]=std::real(Tsil::Beps(0,MMW,MMt,mu2));
    mtt[24]=protWt000->M(0);
    mtt[25]=prot0ttHt->M(0);
    mtt[26]=prot0ttZt->M(0);
    mtt[27]=prot0tt0t->M(0);
    mtt[28]=prottH0H->Vxzuv(0);
    mtt[29]=prottZ0Z->Vxzuv(0);
    mtt[30]=protWt000->Uzxyv(0);
    mtt[31]=prot0ttHt->Tuxv(0);
    mtt[32]=prot0ttZt->Tuxv(0);
    mtt[33]=protWt000->Txuv(0);
    mtt[34]=protWt000->Tyzv(0);
    mtt[35]=1/(4*MMt - MMZ);
   mtt[36]=pow(mtt[1],2);
   mtt[37]=pow(mtt[5],2);
   mtt[38]=mtt[36] + mtt[37];
   mtt[39]=mtt[38]*MMH;
   mtt[40]= - 13 + 4*mtt[15];
   mtt[40]=mtt[40]*mtt[39];
   mtt[41]=52*MMt + 14*mtt[7] - 2*mtt[12] - 17*MMH;
   mtt[41]=mtt[11]*mtt[38]*mtt[41];
   mtt[42]=mtt[37] - 224./9. + 65./9.*mtt[36];
   mtt[43]=mtt[20]*mtt[42];
   mtt[40]=mtt[43] + mtt[40] + mtt[41];
   mtt[41]=mtt[19]*mtt[2];
   mtt[41]= - 13*mtt[41] + 29./4. + 8*mtt[15];
   mtt[43]=pow(Pi,2);
   mtt[44]=2*mtt[13];
   mtt[41]= - 5./6.*mtt[43] - 1./3.*mtt[41] - mtt[44] + 5./6.*mtt[33]
    - mtt[32];
   mtt[41]=mtt[38]*mtt[41];
   mtt[45]=mtt[38]*mtt[2];
   mtt[46]=mtt[45]*mtt[7];
   mtt[47]=MMt*mtt[45];
   mtt[47]=32*mtt[47] + 4*mtt[46];
   mtt[47]=mtt[6]*mtt[47];
   mtt[41]=mtt[47] + mtt[41];
   mtt[41]=MMt*mtt[41];
   mtt[47]=mtt[45]*mtt[12];
   mtt[46]=mtt[6]*mtt[46];
   mtt[46]= - 36*mtt[46] + 23./2.*mtt[38] - 13./3.*mtt[47];
   mtt[46]=mtt[7]*mtt[46];
   mtt[48]=mtt[36] + 1;
   mtt[48]=mtt[48]*mtt[36];
   mtt[48]=mtt[48] + mtt[37];
   mtt[49]=mtt[21]*mtt[48];
   mtt[50]= - mtt[20]*mtt[38];
   mtt[49]=mtt[50] + 5./6.*mtt[49];
   mtt[49]=MMt*mtt[49];
   mtt[50]=mtt[38]*mtt[7];
   mtt[51]=mtt[14]*mtt[50];
   mtt[52]= - 1 + mtt[18];
   mtt[52]=MMt*mtt[52];
   mtt[52]=mtt[17] + mtt[52];
   mtt[48]=mtt[17]*mtt[48]*mtt[52];
   mtt[48]=5./6.*mtt[48] + mtt[51] + mtt[49];
   mtt[48]=mtt[3]*mtt[48];
   mtt[47]=7./2.*mtt[38] - 4./3.*mtt[47];
   mtt[47]=mtt[12]*mtt[47];
   mtt[49]=mtt[38]*MMt;
   mtt[51]=5./2.*mtt[18] + 5./2.;
   mtt[51]=mtt[51]*mtt[49];
   mtt[51]=4*mtt[50] + mtt[51];
   mtt[52]=1./3.*mtt[18];
   mtt[51]=mtt[51]*mtt[52];
   mtt[53]= - 2*mtt[39] + 13./3.*mtt[49];
   mtt[53]=mtt[31]*mtt[53];
   mtt[54]= - 4./3.*mtt[39] + 3*mtt[49];
   mtt[54]=mtt[34]*mtt[54];
   mtt[55]=25./9.*mtt[36] + mtt[37] - 64./9.;
   mtt[56]=mtt[14]*mtt[55];
   mtt[57]=3*mtt[37];
   mtt[58]=mtt[57] - 64./3. + 25./3.*mtt[36];
   mtt[59]= - mtt[7]*mtt[58];
   mtt[56]=mtt[56] + mtt[59];
   mtt[56]=mtt[7]*mtt[56];
   mtt[59]=pow(mtt[14],2);
   mtt[60]=mtt[55]*mtt[59];
   mtt[56]=mtt[60] + mtt[56];
   mtt[56]=mtt[35]*mtt[56];
   mtt[60]=mtt[38]*pow(MMH,2);
   mtt[61]=MMt*mtt[39];
   mtt[61]=mtt[60] - 4*mtt[61];
   mtt[61]=mtt[28]*mtt[61];
   mtt[62]=mtt[4]*mtt[39];
   mtt[62]= - 11*mtt[38] + 1./2.*mtt[62];
   mtt[62]=mtt[8]*mtt[62];
   mtt[49]=mtt[39] - 4./3.*mtt[49];
   mtt[49]=MMt*mtt[49];
   mtt[49]= - 1./3.*mtt[60] + 2*mtt[49];
   mtt[49]=mtt[25]*mtt[49];
   mtt[63]=mtt[24]*pow(MMt,2);
   mtt[63]=3*mtt[19] + 17./6.*mtt[21] - 2./3.*mtt[63] + 59./6.*mtt[22]
    - 1./2.*mtt[14];
   mtt[63]=mtt[38]*mtt[63];
   mtt[64]=mtt[38]*mtt[17];
   mtt[65]= - 1./3. + 1./2.*mtt[18];
   mtt[65]=mtt[65]*mtt[64];
   mtt[40]=1./3.*mtt[62] + 2*mtt[49] + mtt[48] + 4./3.*mtt[61] + 5*
   mtt[65] + 4*mtt[56] + mtt[54] + mtt[53] + mtt[51] + mtt[46] + 
   mtt[47] + mtt[41] + mtt[63] + 1./3.*mtt[40];
   mtt[40]=mtt[3]*mtt[40];
   mtt[41]=mtt[23] - mtt[30];
   mtt[41]=5./2.*mtt[43] - 47./6.*mtt[18] - 19./6.*mtt[33] - 2*mtt[41];
   mtt[46]=mtt[37] - 1;
   mtt[41]=mtt[46]*mtt[41];
   mtt[47]=17./9.*mtt[36];
   mtt[48]=mtt[47] + mtt[37] - 32./9.;
   mtt[49]=MMZ*mtt[26];
   mtt[49]= - 2./3.*mtt[49] + 4./3.*mtt[16];
   mtt[49]=mtt[48]*mtt[49];
   mtt[51]=3./2.*mtt[37];
   mtt[53]=59./18.*mtt[36] - 64./9. + mtt[51];
   mtt[53]=mtt[32]*mtt[53];
   mtt[54]=7./2.*mtt[37] - 64./9. + 95./18.*mtt[36];
   mtt[54]=1./3.*mtt[54];
   mtt[56]= - mtt[13]*mtt[54];
   mtt[57]=mtt[36] - 2 + mtt[57];
   mtt[61]=2*mtt[7];
   mtt[57]=mtt[61]*mtt[2]*mtt[57];
   mtt[62]= - 23 + 17*mtt[36];
   mtt[63]=mtt[34]*mtt[62];
   mtt[41]= - 4./27.*mtt[63] + mtt[57] + mtt[56] + mtt[53] - 163./54.*
   mtt[36] + 211./54. - mtt[37] + mtt[49] + mtt[41];
   mtt[41]=MMZ*mtt[41];
   mtt[49]=mtt[7]*mtt[39];
   mtt[49]=mtt[60] - 7*mtt[49];
   mtt[49]=mtt[11]*mtt[49];
   mtt[53]=mtt[31]*mtt[60];
   mtt[49]=mtt[53] + mtt[49];
   mtt[53]= - mtt[12]*mtt[38];
   mtt[53]=mtt[53] + mtt[39];
   mtt[53]=MMH*mtt[53];
   mtt[56]=4*mtt[48];
   mtt[57]= - mtt[59]*mtt[56];
   mtt[53]=mtt[57] + 1./2.*mtt[53];
   mtt[57]= - 35./9.*mtt[36] + 104./9. - mtt[37];
   mtt[57]=mtt[14]*mtt[57];
   mtt[57]=4*mtt[57] - mtt[39];
   mtt[59]=19./3.*mtt[36] - 64./3. + mtt[37];
   mtt[59]=mtt[7]*mtt[59];
   mtt[57]=1./3.*mtt[57] + mtt[59];
   mtt[57]=mtt[7]*mtt[57];
   mtt[50]= - 3./2.*mtt[50] + 5./3.*mtt[64];
   mtt[50]=mtt[17]*mtt[50];
   mtt[59]=mtt[22]*mtt[39];
   mtt[49]=mtt[50] - 5./3.*mtt[59] + 1./3.*mtt[53] + mtt[57] + 1./6.*
   mtt[49];
   mtt[49]=mtt[3]*mtt[49];
   mtt[50]=mtt[18] + mtt[33];
   mtt[53]=mtt[46]*mtt[50];
   mtt[57]= - mtt[13] - mtt[32];
   mtt[57]=mtt[48]*mtt[57];
   mtt[59]=pow(CW,2);
   mtt[50]= - 1 - mtt[50];
   mtt[50]=mtt[50]*mtt[59];
   mtt[50]=mtt[50] - 1./9.*mtt[62] + mtt[57] + mtt[53];
   mtt[50]=MMZ*mtt[50];
   mtt[53]=5*mtt[37];
   mtt[47]=mtt[47] + 22./9. - mtt[53];
   mtt[57]=1./2.*mtt[37];
   mtt[60]=mtt[57] - 16./9. + 17./18.*mtt[36];
   mtt[62]=mtt[13]*mtt[60];
   mtt[47]=2*mtt[47] - 7*mtt[62];
   mtt[47]=mtt[7]*mtt[47];
   mtt[62]= - mtt[18]*mtt[61];
   mtt[62]= - mtt[17] + mtt[62];
   mtt[62]=mtt[46]*mtt[62];
   mtt[63]=mtt[14] - mtt[9];
   mtt[63]=mtt[48]*mtt[63];
   mtt[64]= - 34./9.*mtt[36] + 37./9. + mtt[37];
   mtt[64]=mtt[22]*mtt[64];
   mtt[47]=mtt[50] + mtt[64] + mtt[47] + mtt[63] + mtt[62];
   mtt[47]=MMZ*mtt[47];
   mtt[50]=mtt[14]*mtt[60];
   mtt[60]=mtt[37] + 41./9.*mtt[36];
   mtt[60]=mtt[7]*mtt[60];
   mtt[62]=mtt[37]*mtt[17];
   mtt[50]= - 5./3.*mtt[62] - 5*mtt[50] + mtt[60];
   mtt[50]=mtt[7]*mtt[50];
   mtt[39]=mtt[3]*mtt[39];
   mtt[60]=mtt[48]*mtt[4];
   mtt[63]=MMZ*mtt[60];
   mtt[39]=mtt[63] + mtt[39];
   mtt[39]=mtt[39]*pow(mtt[7],2);
   mtt[59]=mtt[46] - mtt[59];
   mtt[63]=pow(MMZ,2);
   mtt[59]=mtt[59]*mtt[63];
   mtt[43]=mtt[43]*mtt[59];
   mtt[39]= - 5./3.*mtt[43] + 1./3.*mtt[47] + mtt[39] + mtt[50];
   mtt[39]=mtt[4]*mtt[39];
   mtt[43]=mtt[45]*mtt[14];
   mtt[45]= - 7./18.*mtt[36] + 32./9. + mtt[57];
   mtt[45]=mtt[13]*mtt[45];
   mtt[45]=3*mtt[43] + 7./3.*mtt[45] + 119./54.*mtt[36] + 320./27. + 
   mtt[51];
   mtt[45]=mtt[7]*mtt[45];
   mtt[47]=mtt[13]*mtt[48];
   mtt[47]= - 2./3.*mtt[47] + 77./18.*mtt[36] - 64./9. + 5./2.*mtt[37];
   mtt[47]=mtt[14]*mtt[47];
   mtt[48]=mtt[18]*mtt[7];
   mtt[48]=4./3.*mtt[48] - mtt[21];
   mtt[48]=mtt[37]*mtt[48];
   mtt[50]= - mtt[9]*mtt[54];
   mtt[51]= - 23./3.*mtt[36] - 32./3. + 23./2.*mtt[37];
   mtt[51]=mtt[22]*mtt[51];
   mtt[54]=mtt[7]*mtt[2];
   mtt[54]=5./3.*mtt[18] + 11./6. + 6*mtt[54];
   mtt[54]=mtt[54]*mtt[62];
   mtt[59]=mtt[24]*mtt[59];
   mtt[56]=mtt[20]*mtt[56];
   mtt[39]=mtt[39] + mtt[49] + mtt[56] - 4./3.*mtt[59] + mtt[54] + 1./3.
   *mtt[51] + mtt[45] + mtt[50] + mtt[47] + mtt[48] + mtt[41];
   mtt[39]=mtt[4]*mtt[39];
   mtt[41]=mtt[3]*mtt[38];
   mtt[45]=mtt[4]*MMZ*mtt[46];
   mtt[45]= - 13./2.*mtt[37] + mtt[45];
   mtt[45]=mtt[4]*mtt[45];
   mtt[41]= - 13./2.*mtt[41] + mtt[45];
   mtt[41]=mtt[10]*mtt[41];
   mtt[45]=2*mtt[33] - 119./8.;
   mtt[45]=mtt[37]*mtt[45];
   mtt[42]=mtt[32]*mtt[42];
   mtt[47]=1./9.*mtt[36] + 176./9. + mtt[53];
   mtt[47]=mtt[47]*mtt[44];
   mtt[41]=mtt[41] + mtt[47] + mtt[42] - 47./24.*mtt[36] - 704./9. + 
   mtt[45];
   mtt[42]=mtt[55]*mtt[44];
   mtt[44]=25./18.*mtt[36] - 32./9. + mtt[57];
   mtt[45]=mtt[16]*mtt[55];
   mtt[44]= - 2*mtt[45] + 13*mtt[44] + mtt[42];
   mtt[44]=mtt[35]*mtt[44];
   mtt[45]= - 1./3.*mtt[36] + 2./3. - mtt[37];
   mtt[45]=mtt[2]*mtt[45];
   mtt[38]=mtt[26]*mtt[38];
   mtt[46]=mtt[24]*mtt[46];
   mtt[38]=mtt[46] + mtt[45] + mtt[38];
   mtt[38]=mtt[44] + 2*mtt[38];
   mtt[38]=MMZ*mtt[38];
   mtt[42]= - 5*mtt[55] + mtt[42];
   mtt[42]=mtt[14]*mtt[42];
   mtt[44]= - mtt[61] + mtt[9];
   mtt[44]=mtt[58]*mtt[44];
   mtt[45]= - 7*mtt[20] + 2*mtt[22];
   mtt[45]=mtt[55]*mtt[45];
   mtt[42]=mtt[45] + mtt[42] + mtt[44];
   mtt[42]=mtt[35]*mtt[42];
   mtt[44]= - 1 + 5*mtt[18];
   mtt[44]=mtt[52]*mtt[37]*mtt[44];
   mtt[45]= - mtt[37] - 64./9. + 7./9.*mtt[36];
   mtt[46]=MMZ*mtt[45];
   mtt[47]=mtt[63]*mtt[60];
   mtt[46]=mtt[46] + mtt[47];
   mtt[46]=mtt[29]*mtt[46];
   mtt[36]= - 14./27.*mtt[36] - 112./27. + mtt[37];
   mtt[36]=mtt[34]*mtt[36];
   mtt[37]=mtt[2]*mtt[62];
   mtt[36]=mtt[36] - mtt[37];
   mtt[37]=mtt[26]*mtt[45];
   mtt[37]=4./3.*mtt[37] + 256./27.*mtt[27];
   mtt[37]=MMt*mtt[37];
   mtt[45]=mtt[16]*mtt[45];

      mttret = 2*mtt[36] + mtt[37] + mtt[38] + mtt[39] + mtt[40] + 1./3.
      *mtt[41] + mtt[42] - mtt[43] + mtt[44] + 2./3.*mtt[45] + 4./3.*
      mtt[46];
      return mttret;
}
