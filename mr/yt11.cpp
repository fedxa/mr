#include <tt.hpp>
std::complex<long double> tt::my11(size_t nL, size_t nH)
{     
      
      
    std::complex<long double> myt[77], mytret;

    myt[1]=pow(CW,-1);
    myt[2]=pow(MMZ,-1);
    myt[3]=pow(MMt,-1);
    myt[4]=pow(SW,-1);
    myt[5]=double(nH);
    myt[6]=Tsil::I2(0,0,MMt,mu2);
    myt[7]=Tsil::A(MMt,mu2);
    myt[8]=Tsil::Aeps(MMt,mu2);
    myt[9]=Tsil::I2(MMH,MMt,MMt,mu2);
    myt[10]=Tsil::I2(MMZ,MMt,MMt,mu2);
    myt[11]=Tsil::I2(0,MMW,MMt,mu2);
    myt[12]=Tsil::B(MMH,MMt,MMt,mu2);
    myt[13]=Tsil::A(MMH,mu2);
    myt[14]=Tsil::B(MMZ,MMt,MMt,mu2);
    myt[15]=Tsil::A(MMZ,mu2);
    myt[16]=Tsil::Beps(MMH,MMt,MMt,mu2);
    myt[17]=Tsil::Beps(MMZ,MMt,MMt,mu2);
    myt[18]=pow(MMH,-1);
    myt[19]=Tsil::A(MMW,mu2);
    myt[20]=std::real(Tsil::B(0,MMW,MMt,mu2));
    myt[21]=Tsil::Aeps(MMH,mu2);
    myt[22]=Tsil::Aeps(MMZ,mu2);
    myt[23]=Tsil::Aeps(MMW,mu2);
    myt[24]=std::real(Tsil::Beps(0,MMW,MMt,mu2));
    myt[25]=protWt000->M(0);
    myt[26]=prot0ttHt->M(0);
    myt[27]=prot0ttZt->M(0);
    myt[28]=prot0tt0t->M(0);
    myt[29]=prottH0H->Vxzuv(0);
    myt[30]=prottZ0Z->Vxzuv(0);
    myt[31]=protWt000->Uzxyv(0);
    myt[32]=prot0ttHt->Tuxv(0);
    myt[33]=prot0ttZt->Tuxv(0);
    myt[34]=protWt000->Txuv(0);
    myt[35]=protWt000->Tyzv(0);
    myt[36]=1/(4*MMt - MMZ);
    myt[37]=1/( - MMW + MMH);
   myt[38]=pow(myt[1],2);
   myt[39]=pow(myt[4],2);
   myt[40]=myt[38] + myt[39];
   myt[41]=myt[40]*myt[12];
   myt[42]=myt[41] + myt[40];
   myt[42]=MMH*myt[42];
   myt[43]=5*myt[40];
   myt[44]= - myt[8]*myt[43];
   myt[45]=1./2.*myt[40];
   myt[46]=myt[9]*myt[45];
   myt[42]=1./2.*myt[42] + myt[44] + myt[46];
   myt[42]=MMH*myt[42];
   myt[44]=pow(MMH,2);
   myt[46]=myt[32]*myt[44]*myt[45];
   myt[43]=pow(myt[19],2)*myt[43];
   myt[47]=myt[40]*MMH;
   myt[48]=myt[13]*myt[47];
   myt[49]=17./9.*myt[38];
   myt[50]=myt[49] + myt[39] - 32./9.;
   myt[51]=4*myt[50];
   myt[52]= - pow(myt[15],2)*myt[51];
   myt[42]=myt[52] - 1./2.*myt[48] + myt[43] + myt[42] + myt[46];
   myt[43]= - myt[45] - 7*myt[41];
   myt[45]=1./3.*MMH;
   myt[43]=myt[43]*myt[45];
   myt[46]=1 + myt[39];
   myt[46]=myt[46]*myt[39];
   myt[46]=myt[46] + myt[38];
   myt[46]=myt[19]*myt[46];
   myt[48]=3*myt[40];
   myt[52]= - myt[13]*myt[48];
   myt[43]=myt[52] + myt[43] + 3*myt[46];
   myt[46]=myt[40]*myt[5];
   myt[52]= - 5*myt[46] + 19./3.*myt[38] - 64./3. + myt[39];
   myt[52]=myt[7]*myt[52];
   myt[53]=1./2.*myt[39];
   myt[54]=3*myt[39];
   myt[55]=1./3. - myt[54];
   myt[55]=myt[55]*myt[53];
   myt[55]= - 199./54.*myt[38] + 416./27. + myt[55];
   myt[55]=myt[15]*myt[55];
   myt[43]=myt[52] + 1./2.*myt[43] + myt[55];
   myt[43]=myt[7]*myt[43];
   myt[52]=pow(myt[7],2);
   myt[55]=myt[3]*myt[52]*myt[47];
   myt[42]=myt[55] + 1./3.*myt[42] + myt[43];
   myt[42]=myt[3]*myt[42];
   myt[43]=23*myt[40] - 11*myt[46];
   myt[55]=25./9.*myt[36];
   myt[55]=myt[55]*myt[38];
   myt[56]=myt[39] - 64./9.;
   myt[56]=myt[56]*myt[36];
   myt[55]=myt[56] + myt[55];
   myt[56]=myt[55]*myt[15];
   myt[57]=4*myt[56];
   myt[54]=myt[54] - 64./3.;
   myt[54]=myt[54]*myt[36];
   myt[58]=myt[38]*myt[36];
   myt[54]=myt[54] + 25./3.*myt[58];
   myt[59]=4*myt[7];
   myt[60]= - myt[54]*myt[59];
   myt[43]=myt[60] + myt[57] + 1./2.*myt[43] + 14./3.*myt[41];
   myt[43]=myt[7]*myt[43];
   myt[60]=myt[38] + 1;
   myt[60]=myt[60]*myt[38];
   myt[60]=myt[60] + myt[39];
   myt[61]=myt[60]*MMt;
   myt[62]=myt[23]*myt[61];
   myt[63]= - MMt + myt[19];
   myt[60]=myt[19]*myt[60]*myt[63];
   myt[60]=myt[62] + myt[60];
   myt[62]=myt[40]*MMt;
   myt[63]= - myt[22]*myt[62];
   myt[64]=myt[40]*myt[7];
   myt[65]=myt[15]*myt[64];
   myt[66]=5./6.*myt[20];
   myt[61]=myt[19]*myt[61]*myt[66];
   myt[60]=myt[61] + myt[65] + 5./6.*myt[60] + myt[63];
   myt[60]=myt[2]*myt[60];
   myt[61]=2*myt[62];
   myt[63]=myt[47] - myt[61];
   myt[63]=myt[16]*myt[63];
   myt[44]=myt[40]*myt[44];
   myt[65]=MMH*myt[62];
   myt[65]=myt[44] - 4*myt[65];
   myt[65]=myt[29]*myt[65];
   myt[63]=myt[63] + myt[65];
   myt[65]=myt[47] - 4./3.*myt[62];
   myt[65]=MMt*myt[65];
   myt[44]= - 1./3.*myt[44] + 2*myt[65];
   myt[44]=myt[26]*myt[44];
   myt[65]= - 1./3.*myt[41] + 2*myt[40];
   myt[65]=myt[13]*myt[65];
   myt[44]=myt[44] + myt[65];
   myt[46]= - 29./3.*myt[40] + 39*myt[46];
   myt[65]=pow(Pi,2);
   myt[67]= - 5./6.*myt[65] + 5./6.*myt[34] - myt[33];
   myt[67]=myt[40]*myt[67];
   myt[46]=1./4.*myt[46] + 52./3.*myt[41] + myt[67];
   myt[46]=MMt*myt[46];
   myt[67]=myt[19]*myt[40];
   myt[67]=1./3.*myt[62] + myt[67];
   myt[66]=myt[62]*myt[66];
   myt[66]=myt[66] + 5./2.*myt[67] + 4./3.*myt[64];
   myt[66]=myt[20]*myt[66];
   myt[67]=13./6.*myt[11];
   myt[68]=2*myt[8];
   myt[69]=2*myt[6] - myt[68];
   myt[69]=myt[5]*myt[69];
   myt[70]=myt[25]*pow(MMt,2);
   myt[69]= - 2./3.*myt[70] + 17./6.*myt[23] - 11./3.*myt[9] - myt[67]
    + 59./6.*myt[8] + myt[69];
   myt[69]=myt[40]*myt[69];
   myt[41]= - 53./4.*myt[40] - 17*myt[41];
   myt[41]=myt[41]*myt[45];
   myt[45]=13./3.*myt[62];
   myt[70]= - 2*myt[47] + myt[45];
   myt[70]=myt[32]*myt[70];
   myt[71]= - 1 + myt[53];
   myt[71]=myt[71]*myt[39];
   myt[57]=myt[57] + myt[71] - myt[38];
   myt[57]=myt[15]*myt[57];
   myt[71]=myt[40]*pow(myt[13],2);
   myt[64]=myt[13]*myt[64];
   myt[64]= - 4*myt[71] - 13*myt[64];
   myt[64]=myt[18]*myt[64];
   myt[45]=myt[18]*myt[45];
   myt[45]=myt[48] + myt[45];
   myt[45]=myt[21]*myt[45];
   myt[48]= - 8./3. - myt[53];
   myt[48]=myt[48]*myt[39];
   myt[48]=myt[48] - 8./3.*myt[38];
   myt[48]=myt[19]*myt[48];
   myt[71]=65./9.*myt[38] + myt[39] - 224./9.;
   myt[71]=1./3.*myt[71];
   myt[72]=myt[22]*myt[71];
   myt[41]=myt[60] + myt[45] + myt[66] + myt[42] + 1./3.*myt[64] + 
   myt[43] + myt[57] + myt[72] + myt[48] + myt[70] + myt[41] + myt[46]
    + myt[69] + 2*myt[44] + 4./3.*myt[63];
   myt[41]=myt[2]*myt[41];
   myt[42]= - myt[19] + myt[11];
   myt[43]=myt[39] - 1;
   myt[42]=myt[43]*myt[42];
   myt[44]=myt[50]*myt[15];
   myt[45]= - 34./9.*myt[38] + 37./9. + myt[39];
   myt[45]=myt[8]*myt[45];
   myt[46]= - myt[10]*myt[50];
   myt[48]= - 23 + 17*myt[38];
   myt[57]=MMZ*myt[48];
   myt[42]=myt[44] + myt[46] + myt[42] + myt[45] - 1./9.*myt[57];
   myt[42]=MMZ*myt[42];
   myt[45]=pow(MMZ,2);
   myt[46]=myt[43]*myt[45];
   myt[57]=myt[45]*pow(CW,2);
   myt[46]=myt[46] - myt[57];
   myt[60]=myt[46]*myt[65];
   myt[45]=myt[50]*myt[45];
   myt[63]= - myt[33]*myt[45];
   myt[42]=myt[63] - 5*myt[60] - myt[57] + myt[42];
   myt[57]=5*myt[39];
   myt[49]=myt[49] + 22./9. - myt[57];
   myt[60]=2*MMZ;
   myt[49]=myt[49]*myt[60];
   myt[63]=myt[57]*myt[19];
   myt[49]=myt[49] - myt[63];
   myt[64]=17./18.*myt[38] + myt[53] - 16./9.;
   myt[66]=5*myt[15];
   myt[69]= - myt[64]*myt[66];
   myt[70]=myt[39] + 41./9.*myt[38];
   myt[70]=myt[7]*myt[70];
   myt[49]=myt[70] + 1./3.*myt[49] + myt[69];
   myt[49]=myt[7]*myt[49];
   myt[69]=myt[3]*MMZ;
   myt[50]=myt[50]*myt[69];
   myt[52]=myt[52]*myt[50];
   myt[42]=myt[52] + 1./3.*myt[42] + myt[49];
   myt[42]=myt[3]*myt[42];
   myt[49]=myt[43]*myt[65];
   myt[52]=59./18.*myt[38] - 64./9. + 3./2.*myt[39];
   myt[52]=myt[33]*myt[52];
   myt[49]=myt[52] + 5./2.*myt[49] - 163./54.*myt[38] + 211./54. - 
   myt[39];
   myt[49]=MMZ*myt[49];
   myt[52]= - 23./3.*myt[38] - 32./3. + 23./2.*myt[39];
   myt[52]=myt[8]*myt[52];
   myt[65]=95./18.*myt[38] - 64./9. + 7./2.*myt[39];
   myt[70]=myt[10]*myt[65];
   myt[52]=myt[52] - myt[70];
   myt[60]=myt[43]*myt[60];
   myt[70]= - myt[24] + myt[31];
   myt[70]=myt[60]*myt[70];
   myt[67]=11./6.*myt[19] - myt[23] - myt[67];
   myt[67]=myt[39]*myt[67];
   myt[72]=4./3.*myt[30];
   myt[73]=myt[45]*myt[72];
   myt[74]=myt[25]*myt[46];
   myt[51]=myt[22]*myt[51];
   myt[75]=77./18.*myt[38] - 64./9. + 5./2.*myt[39];
   myt[75]=myt[15]*myt[75];
   myt[76]=265./108.*myt[38] + 320./27. + 9./4.*myt[39];
   myt[76]=myt[7]*myt[76];
   myt[42]=myt[42] + myt[76] + myt[75] + myt[51] - 4./3.*myt[74] + 
   myt[73] + myt[67] + myt[49] + myt[70] + 1./3.*myt[52];
   myt[42]=myt[3]*myt[42];
   myt[40]=MMZ*myt[40];
   myt[49]= - myt[39] - 64./9. + 7./9.*myt[38];
   myt[51]=MMt*myt[49];
   myt[52]=1./3.*myt[3];
   myt[67]= - myt[45]*myt[52];
   myt[40]=myt[67] + myt[40] + 2./3.*myt[51];
   myt[40]=myt[27]*myt[40];
   myt[51]=myt[55]*MMZ;
   myt[50]=2./3.*myt[50] + 1./3.*myt[49] - myt[51];
   myt[50]=myt[17]*myt[50];
   myt[40]=myt[40] + myt[50];
   myt[50]=7*myt[7];
   myt[64]= - MMZ*myt[64]*myt[50];
   myt[45]= - myt[45] + myt[64];
   myt[45]=myt[3]*myt[45];
   myt[64]= - MMZ*myt[65];
   myt[65]= - 7./18.*myt[38] + 32./9. + myt[53];
   myt[50]=myt[65]*myt[50];
   myt[44]=myt[45] + myt[50] + myt[64] - 2*myt[44];
   myt[44]=myt[44]*myt[52];
   myt[45]=1./9.*myt[38] + 176./9. + myt[57];
   myt[45]=myt[56] + 1./3.*myt[45] + myt[51];
   myt[50]= - myt[2]*myt[61];
   myt[44]=myt[50] + 2*myt[45] + myt[44];
   myt[44]=myt[14]*myt[44];
   myt[45]= - myt[7]*myt[60];
   myt[45]=myt[45] + myt[46];
   myt[45]=myt[3]*myt[45];
   myt[50]=myt[39]*myt[59];
   myt[43]=myt[43]*MMZ;
   myt[45]=myt[45] + myt[50] - 47./2.*myt[43] + myt[63];
   myt[45]=myt[3]*myt[45];
   myt[50]=myt[20]*myt[57];
   myt[45]=myt[50] - myt[39] + myt[45];
   myt[45]=myt[20]*myt[45];
   myt[46]=myt[3]*myt[46];
   myt[43]= - 19./2.*myt[43] + myt[46];
   myt[43]=myt[3]*myt[43];
   myt[43]=2*myt[39] + myt[43];
   myt[43]=myt[34]*myt[43];
   myt[43]=myt[43] + myt[45] - 53./24.*myt[38] - 704./9. - 125./8.*
   myt[39];
   myt[45]=myt[48]*myt[69];
   myt[38]= - 2./27.*myt[45] - 14./27.*myt[38] - 112./27. + myt[39];
   myt[45]= - 4./3.*myt[47] + 3*myt[62];
   myt[45]=myt[2]*myt[45];
   myt[38]=2*myt[38] + myt[45];
   myt[38]=myt[35]*myt[38];
   myt[45]= - 32./9. + myt[53];
   myt[45]=myt[36]*myt[45];
   myt[45]=myt[45] + 25./18.*myt[58];
   myt[46]=myt[49]*myt[72];
   myt[45]=myt[46] + 13*myt[45];
   myt[45]=MMZ*myt[45];
   myt[46]= - myt[66] - 7*myt[22] + myt[68];
   myt[46]=myt[55]*myt[46];
   myt[47]=myt[3]*myt[7];
   myt[47]=3*myt[47] - 1;
   myt[48]=myt[13] - myt[19];
   myt[39]=myt[37]*myt[47]*myt[48]*myt[39];
   myt[47]= - 2*myt[7] + myt[10];
   myt[47]=myt[54]*myt[47];
   myt[48]=myt[33]*myt[71];
   myt[49]=myt[25]*myt[60];
   myt[50]=myt[28]*MMt;

      mytret = myt[38] + 1./2.*myt[39] + 2*myt[40] + myt[41] + myt[42]
       + 1./3.*myt[43] + myt[44] + myt[45] + myt[46] + myt[47] + 
      myt[48] + myt[49] + 256./27.*myt[50];
      return mytret;
}
