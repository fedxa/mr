#include <ZZ.hpp>
std::complex<long double> ZZ::m11(size_t nL, size_t nH, int boson)
{     
      
      
    std::complex<long double> mZZ[30], mZZret;

    mZZ[1]=double(nH);
    mZZ[2]=pow(CW,-1);
    mZZ[3]=pow(MMH,-1);
    mZZ[4]=pow(MMZ,-1);
    mZZ[5]=pow(SW,-1);
    mZZ[6]=Tsil::B(MMt,MMt,MMZ,mu2);
    mZZ[7]=Tsil::A(MMt,mu2);
    mZZ[8]=Tsil::Beps(MMt,MMt,MMZ,mu2);
    mZZ[9]=Tsil::Aeps(MMt,mu2);
    mZZ[10]=std::real(Tsil::B(0,0,MMZ,mu2));
    mZZ[11]=prottttt0->M(0);
    mZZ[12]=prot00000->M(0);
    mZZ[13]=prottttt0->Vzxyv(0);
    mZZ[14]=prottttt0->Suxv(0);
    mZZ[15]=double(nL);
    mZZ[16]=1/(4*MMt - MMZ);
   mZZ[17]=pow(mZZ[5],2);
   mZZ[18]=pow(mZZ[2],2);
   mZZ[19]= - 7./9.*mZZ[18] + mZZ[17] + 64./9.;
   mZZ[20]=mZZ[19]*mZZ[6];
   mZZ[21]=29./3.*mZZ[18] - 128./3. - mZZ[17];
   mZZ[21]=2*mZZ[21] - mZZ[20];
   mZZ[21]=mZZ[6]*mZZ[21];
   mZZ[22]=mZZ[17] + mZZ[18];
   mZZ[23]=2*mZZ[9] - mZZ[14];
   mZZ[24]=2*mZZ[4];
   mZZ[23]=mZZ[24]*mZZ[22]*mZZ[23];
   mZZ[21]=mZZ[23] + mZZ[21] - 299./9.*mZZ[18] - 64./9. - 35*mZZ[17];
   mZZ[21]=mZZ[4]*mZZ[21];
   mZZ[23]=mZZ[6] + 2;
   mZZ[23]=mZZ[23]*mZZ[22];
   mZZ[25]=mZZ[6]*mZZ[23];
   mZZ[25]=mZZ[25] - mZZ[22];
   mZZ[25]=mZZ[4]*mZZ[25];
   mZZ[26]=mZZ[13]*mZZ[19];
   mZZ[25]=4*mZZ[26] + mZZ[25];
   mZZ[25]=MMt*mZZ[25];
   mZZ[26]=mZZ[8]*mZZ[19];
   mZZ[25]=mZZ[25] + mZZ[26];
   mZZ[24]=mZZ[24]*mZZ[25];
   mZZ[25]=17./9.*mZZ[18] + mZZ[17] - 32./9.;
   mZZ[26]=mZZ[13]*mZZ[25];
   mZZ[23]=mZZ[7]*mZZ[23]*pow(mZZ[4],2);
   mZZ[21]=4*mZZ[23] - 8*mZZ[26] + mZZ[21] + mZZ[24];
   mZZ[23]=2./3.*MMt;
   mZZ[21]=mZZ[21]*mZZ[23];
   mZZ[23]=mZZ[11]*mZZ[25];
   mZZ[24]=5./9.*mZZ[18] + mZZ[17] - 8./9.;
   mZZ[26]=mZZ[12]*mZZ[24];
   mZZ[23]=mZZ[23] + mZZ[26];
   mZZ[26]=25./9.*mZZ[18] + mZZ[17] - 64./9.;
   mZZ[27]=mZZ[26]*mZZ[6];
   mZZ[28]= - mZZ[27] + 25./3.*mZZ[18] - 64./3. + 3*mZZ[17];
   mZZ[28]=mZZ[6]*mZZ[28];
   mZZ[29]=mZZ[26]*mZZ[8];
   mZZ[28]=mZZ[28] - mZZ[29];
   mZZ[28]=mZZ[16]*mZZ[28];
   mZZ[23]=4./3.*mZZ[23] + mZZ[28];
   mZZ[23]=MMZ*mZZ[23];
   mZZ[19]=mZZ[19]*MMt*mZZ[4];
   mZZ[19]=2./3.*mZZ[19] - mZZ[22];
   mZZ[19]=mZZ[11]*MMt*mZZ[19];
   mZZ[28]= - mZZ[6] + 1;
   mZZ[28]=mZZ[7]*mZZ[28];
   mZZ[28]=mZZ[28] - mZZ[9];
   mZZ[26]=mZZ[16]*mZZ[26]*mZZ[28];
   mZZ[19]=mZZ[19] + mZZ[26];
   mZZ[26]=7*mZZ[17];
   mZZ[27]= - mZZ[27] + 143./9.*mZZ[18] - 320./9. + mZZ[26];
   mZZ[27]=mZZ[6]*mZZ[27];
   mZZ[26]=95./9.*mZZ[18] - 128./9. + mZZ[26];
   mZZ[26]=mZZ[9]*mZZ[26];
   mZZ[25]= - mZZ[14]*mZZ[25];
   mZZ[25]=1./3.*mZZ[26] + mZZ[25];
   mZZ[26]=4*mZZ[4];
   mZZ[25]=mZZ[25]*mZZ[26];
   mZZ[20]= - 2*mZZ[20] + 211./9.*mZZ[18] - 448./9. + 11*mZZ[17];
   mZZ[20]=mZZ[7]*mZZ[4]*mZZ[20];
   mZZ[28]=mZZ[4]*pow(mZZ[7],2);
   mZZ[26]=pow(MMt,2)*mZZ[26];
   mZZ[26]= - 3*mZZ[28] + mZZ[26];
   mZZ[22]=mZZ[3]*mZZ[22]*mZZ[26];
   mZZ[26]=937./18.*mZZ[18] - 860./9. + 77./2.*mZZ[17];
   mZZ[24]=mZZ[10]*mZZ[24];
   mZZ[19]=mZZ[23] + 16*mZZ[22] + mZZ[21] - mZZ[29] + 4./3.*mZZ[20] + 2
   *mZZ[24] + mZZ[25] + 1./3.*mZZ[26] + mZZ[27] + 4*mZZ[19];
   mZZ[19]=mZZ[1]*mZZ[19];
   mZZ[17]=11./9.*mZZ[18] + mZZ[17] - 20./9.;
   mZZ[18]=MMZ*mZZ[12];
   mZZ[18]=8./3.*mZZ[18] + 31./3. + 4*mZZ[10];
   mZZ[17]=mZZ[15]*mZZ[17]*mZZ[18];

      mZZret = mZZ[17] + mZZ[19];
      return mZZret;
}
