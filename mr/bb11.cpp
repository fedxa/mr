#include <bb.hpp>
std::complex<long double> bb::m11(size_t nL, size_t nH)
{     
      
      
    std::complex<long double> mbb[30];

    mbb[1]=pow(CW,-1);
    mbb[2]=pow(MMH,-1);
    mbb[3]=pow(MMZ,-1);
    mbb[4]=pow(SW,-1);
    mbb[5]=Tsil::I2(0,MMW,MMt,mu2);
    mbb[6]=Tsil::A(MMH,mu2);
    mbb[7]=Tsil::A(MMb,mu2);
    mbb[8]=pow(MMb,-1);
    mbb[9]=Tsil::A(MMZ,mu2);
    mbb[10]=Tsil::A(MMW,mu2);
    mbb[11]=Tsil::A(MMt,mu2);
    mbb[12]=Tsil::Aeps(MMW,mu2);
    mbb[13]=Tsil::Aeps(MMt,mu2);
    mbb[14]=Tsil::Aeps(MMb,mu2);
    mbb[15]=protb00->Txuv(0);
    mbb[16]=1/(MMt - MMW);
   mbb[17]=MMt*mbb[2];
   mbb[18]=mbb[11]*mbb[2];
   mbb[17]=32*mbb[17] - 103./12. + 4*mbb[18];
   mbb[17]=mbb[17]*MMt;
   mbb[19]=4*mbb[10];
   mbb[20]=mbb[19] + 1./2.*mbb[11];
   mbb[21]=mbb[16]*mbb[11];
   mbb[20]=mbb[20]*mbb[21];
   mbb[22]= - mbb[5] + mbb[13] + mbb[12];
   mbb[23]= - 13./2. + 24*mbb[18];
   mbb[23]=mbb[23]*mbb[11];
   mbb[17]= - mbb[23] - 1./2.*mbb[6] + mbb[17] - mbb[20] + 4*mbb[22];
   mbb[17]=mbb[17]*mbb[3];
   mbb[20]=mbb[2] + 3./2.*mbb[3];
   mbb[20]=mbb[20]*mbb[9];
   mbb[17]=mbb[17] - mbb[20];
   mbb[19]= - mbb[19] - 3./2.*mbb[11];
   mbb[19]=mbb[19]*mbb[21];
   mbb[20]=3*mbb[10];
   mbb[19]=mbb[19] + 9*mbb[11] + 8*mbb[22] + mbb[20];
   mbb[19]=mbb[16]*mbb[19];
   mbb[23]=2*mbb[2];
   mbb[24]=mbb[23]*mbb[10];
   mbb[19]=mbb[19] - 167./8. - mbb[24] + mbb[17];
   mbb[25]=pow(mbb[4],2);
   mbb[19]=mbb[25]*mbb[19];
   mbb[26]=pow(CW,2);
   mbb[27]=mbb[26] + 1;
   mbb[28]=mbb[25] - mbb[27];
   mbb[29]=mbb[22] + mbb[11] + mbb[10];
   mbb[30]=3*mbb[16];
   mbb[29]=mbb[29]*mbb[30];
   mbb[29]=mbb[29] - 17;
   mbb[28]=pow(mbb[16],2)*mbb[29]*mbb[28];
   mbb[26]=mbb[27]*mbb[26];
   mbb[26]= - mbb[25] + 1 + mbb[26];
   mbb[26]=MMZ*mbb[26]*pow(mbb[16],3);
   mbb[26]=6*mbb[26] + mbb[28];
   mbb[26]=MMZ*mbb[26];
   mbb[21]=mbb[21] - 1;
   mbb[20]=mbb[20]*mbb[21];
   mbb[20]= - 7*mbb[22] + mbb[20] - 11*mbb[11];
   mbb[20]=mbb[20]*mbb[16];
   mbb[20]=mbb[20] + 30;
   mbb[20]=mbb[20]*mbb[16];
   mbb[21]= - mbb[23] - mbb[20];
   mbb[21]=mbb[21]*mbb[25];
   mbb[20]=mbb[26] + mbb[21] + 4./3.*mbb[2] + mbb[20];
   mbb[20]=MMZ*mbb[20];
   mbb[21]=MMZ*mbb[2];
   mbb[17]= - 2./3.*mbb[21] - 107./216. + mbb[17];
   mbb[21]=pow(mbb[1],2);
   mbb[17]=mbb[17]*mbb[21];
   mbb[18]= - 1./4. + 12*mbb[18];
   mbb[18]=mbb[18]*MMt;
   mbb[22]=mbb[11] + mbb[6];
   mbb[18]=mbb[18] - 3./2.*mbb[22];
   mbb[18]=mbb[18]*mbb[3];
   mbb[22]=1./2.*mbb[16];
   mbb[26]=mbb[10]*mbb[22];
   mbb[24]=mbb[26] - 1./4. + mbb[24];
   mbb[24]=3*mbb[24] - mbb[18];
   mbb[24]=mbb[24]*mbb[25];
   mbb[26]=MMZ*mbb[23];
   mbb[27]= - 2./3.*mbb[3] + 3*mbb[2];
   mbb[27]=mbb[9]*mbb[27];
   mbb[18]=mbb[27] + mbb[26] - 31./36. - mbb[18];
   mbb[18]=mbb[18]*mbb[21];
   mbb[21]=mbb[11] - mbb[10];
   mbb[21]=mbb[21]*mbb[16];
   mbb[21]=mbb[21] - 1;
   mbb[22]= - mbb[21]*mbb[22];
   mbb[22]=mbb[23] + mbb[22];
   mbb[23]=3*mbb[25];
   mbb[22]=mbb[22]*mbb[23];
   mbb[21]=mbb[16]*mbb[21];
   mbb[21]=mbb[22] - 4*mbb[2] + 3./2.*mbb[21];
   mbb[21]=MMZ*mbb[21];
   mbb[22]=mbb[2]*mbb[23];
   mbb[22]= - 4./3.*mbb[3] + mbb[22];
   mbb[22]=mbb[9]*mbb[22];
   mbb[18]=mbb[18] + mbb[22] + mbb[21] + 34./9. + mbb[24];
   mbb[18]=mbb[8]*mbb[18];
   mbb[21]=mbb[7]*pow(mbb[8],2);
   mbb[18]=32./9.*mbb[21] + mbb[18];
   mbb[18]=mbb[7]*mbb[18];
   mbb[21]= - 77./3. - 20*mbb[15];
   mbb[22]=mbb[8]*mbb[14];

      return mbb[17] + mbb[18] + mbb[19] + mbb[20] + 2./9.*mbb[21] - 40.
      /9.*mbb[22];
}
