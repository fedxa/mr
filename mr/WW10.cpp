#include <WW.hpp>
std::complex<long double> WW::m10(size_t nL, size_t nH, int boson)
{     
      
      
    std::complex<long double> mWW[25], mWWret;

    mWW[1]=double(nL + nH);
    mWW[2]=pow(SW,-1);
    mWW[3]=std::real(Tsil::B(0,0,MMW,mu2));
    mWW[4]=double(nH);
    mWW[5]=pow(CW,-1);
    mWW[6]=pow(MMZ,-1);
    mWW[7]=Tsil::B(0,MMt,MMW,mu2);
    mWW[8]=Tsil::A(MMt,mu2);
    mWW[9]=pow(MMH,-1);
    mWW[10]=double(nL);
    mWW[11]=double(boson);
    mWW[12]=Tsil::B(MMW,MMH,MMW,mu2);
    mWW[13]=Tsil::B(MMW,MMZ,MMW,mu2);
    mWW[14]=Tsil::A(MMH,mu2);
    mWW[15]=Tsil::A(MMZ,mu2);
    mWW[16]=Tsil::A(MMW,mu2);
   mWW[17]=pow(mWW[5],2);
   mWW[18]=mWW[17] + 1;
   mWW[18]=mWW[18]*mWW[17];
   mWW[19]=pow(mWW[2],2);
   mWW[18]=mWW[18] + mWW[19];
   mWW[20]=mWW[16] - mWW[14];
   mWW[20]= - mWW[20]*mWW[18];
   mWW[21]=MMH*mWW[12]*mWW[18];
   mWW[20]=mWW[21] + mWW[20];
   mWW[20]=mWW[6]*mWW[11]*mWW[20];
   mWW[21]=mWW[19] + mWW[17];
   mWW[22]=mWW[12] + 1./2.;
   mWW[22]= - mWW[11]*mWW[22]*mWW[21];
   mWW[20]=1./12.*mWW[20] + 1./3.*mWW[22];
   mWW[20]=MMH*mWW[20];
   mWW[22]=mWW[15] - mWW[16];
   mWW[22]=mWW[22]*mWW[17];
   mWW[23]=3./2.*mWW[15];
   mWW[22]=1./6.*mWW[22] + 35./6.*mWW[16] + mWW[23] + mWW[14];
   mWW[22]=mWW[22]*mWW[17];
   mWW[24]= - 13./6.*mWW[16] - 5./2.*mWW[15] + mWW[14];
   mWW[24]=mWW[24]*mWW[19];
   mWW[22]=mWW[22] + mWW[24];
   mWW[22]=mWW[11]*mWW[22];
   mWW[20]=1./2.*mWW[22] + mWW[20];
   mWW[20]=mWW[6]*mWW[20];
   mWW[22]=MMZ + mWW[23];
   mWW[22]=mWW[9]*mWW[22];
   mWW[22]= - 1./6. + mWW[22];
   mWW[22]=mWW[22]*mWW[17];
   mWW[23]=17 + mWW[17];
   mWW[17]=mWW[23]*mWW[17];
   mWW[17]= - 33./4.*mWW[19] + 4 + 1./12.*mWW[17];
   mWW[17]=mWW[13]*mWW[17];
   mWW[23]= - mWW[9]*MMZ;
   mWW[23]= - 2 + mWW[23];
   mWW[17]=mWW[17] + 2*mWW[23] + mWW[22];
   mWW[17]=mWW[11]*mWW[17];
   mWW[22]= - 1 + 1./2.*mWW[7];
   mWW[22]=mWW[22]*MMt;
   mWW[23]=mWW[9]*MMt;
   mWW[23]= - 1 + 6*mWW[23];
   mWW[23]=mWW[23]*mWW[8];
   mWW[22]=mWW[22] + mWW[23];
   mWW[21]= - mWW[22]*mWW[21];
   mWW[22]=MMt*mWW[7];
   mWW[22]=mWW[22] + mWW[8];
   mWW[18]= - mWW[6]*mWW[18]*mWW[22]*MMt;
   mWW[18]=1./2.*mWW[18] + mWW[21];
   mWW[18]=mWW[6]*mWW[18];
   mWW[21]= - 1./3. + mWW[7];
   mWW[21]=mWW[21]*mWW[19];
   mWW[18]=mWW[21] + mWW[18];
   mWW[18]=mWW[4]*mWW[18];
   mWW[21]=mWW[10] + 1./3.*mWW[1];
   mWW[22]=mWW[3] - 1./3.;
   mWW[21]=mWW[22]*mWW[21];
   mWW[22]=mWW[16] + MMZ + 1./2.*mWW[15];
   mWW[22]=mWW[9]*mWW[22];
   mWW[22]=mWW[12] - 59./18. + 3*mWW[22];
   mWW[22]=mWW[11]*mWW[22];
   mWW[21]=mWW[22] + mWW[21];
   mWW[19]=mWW[21]*mWW[19];

      mWWret = mWW[17] + mWW[18] + mWW[19] + mWW[20];
      return mWWret;
}
