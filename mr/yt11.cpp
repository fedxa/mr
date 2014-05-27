#include <tt.hpp>
std::complex<long double> tt::my11(size_t nL, size_t nH)
{     
      
      
    std::complex<long double> ymtt[77];

    ymtt[1]=pow(CW,-1);
    ymtt[2]=pow(MMZ,-1);
    ymtt[3]=pow(MMt,-1);
    ymtt[4]=pow(SW,-1);
    ymtt[5]=Tsil::I2(MMH,MMt,MMt,mu2);
    ymtt[6]=Tsil::I2(MMZ,MMt,MMt,mu2);
    ymtt[7]=Tsil::I2(0,MMW,MMt,mu2);
    ymtt[8]=Tsil::I2(0,0,MMt,mu2);
    ymtt[9]=Tsil::B(MMH,MMt,MMt,mu2);
    ymtt[10]=Tsil::A(MMH,mu2);
    ymtt[11]=Tsil::A(MMt,mu2);
    ymtt[12]=Tsil::B(MMZ,MMt,MMt,mu2);
    ymtt[13]=Tsil::A(MMZ,mu2);
    ymtt[14]=Tsil::B(0,MMW,MMt,mu2);
    ymtt[15]=Tsil::A(MMW,mu2);
    ymtt[16]=Tsil::Beps(MMH,MMt,MMt,mu2);
    ymtt[17]=Tsil::Beps(MMZ,MMt,MMt,mu2);
    ymtt[18]=Tsil::Beps(0,MMW,MMt,mu2);
    ymtt[19]=pow(MMH,-1);
    ymtt[20]=Tsil::Aeps(MMH,mu2);
    ymtt[21]=Tsil::Aeps(MMZ,mu2);
    ymtt[22]=Tsil::Aeps(MMW,mu2);
    ymtt[23]=Tsil::Aeps(MMt,mu2);
    ymtt[24]=protWt000->M(0);
    ymtt[25]=prot0ttHt->M(0);
    ymtt[26]=prot0ttZt->M(0);
    ymtt[27]=prot0tt0t->M(0);
    ymtt[28]=prottH0H->Vxzuv(0);
    ymtt[29]=prottZ0Z->Vxzuv(0);
    ymtt[30]=protWt000->Uzxyv(0);
    ymtt[31]=prot0ttHt->Tuxv(0);
    ymtt[32]=prot0ttZt->Tuxv(0);
    ymtt[33]=protWt000->Txuv(0);
    ymtt[34]=protWt000->Tyzv(0);
    ymtt[35]=1/(4*MMt - MMZ);
    ymtt[36]=1/( - MMW + MMH);
   ymtt[37]=pow(ymtt[1],2);
   ymtt[38]=pow(ymtt[4],2);
   ymtt[39]=ymtt[37] + ymtt[38];
   ymtt[40]=ymtt[10]*ymtt[39];
   ymtt[41]=ymtt[40]*ymtt[3];
   ymtt[42]=ymtt[39]*MMH*ymtt[3];
   ymtt[43]=ymtt[9] + 1;
   ymtt[43]=ymtt[43]*ymtt[42];
   ymtt[43]=ymtt[41] - ymtt[43];
   ymtt[44]=4*ymtt[16];
   ymtt[45]= - 17*ymtt[9] + ymtt[44] - 53./4.;
   ymtt[45]=ymtt[45]*ymtt[39];
   ymtt[43]=ymtt[45] - 1./2.*ymtt[43];
   ymtt[43]=MMH*ymtt[43];
   ymtt[45]= - 11*ymtt[39] + 1./2.*ymtt[42];
   ymtt[45]=ymtt[5]*ymtt[45];
   ymtt[43]=ymtt[43] + ymtt[45];
   ymtt[45]=ymtt[14]*ymtt[15];
   ymtt[45]=ymtt[22] + ymtt[45];
   ymtt[45]=MMt*ymtt[45];
   ymtt[46]= - MMt + ymtt[15];
   ymtt[46]=ymtt[15]*ymtt[46];
   ymtt[45]=ymtt[46] + ymtt[45];
   ymtt[46]=ymtt[37] + 1;
   ymtt[46]=ymtt[46]*ymtt[37];
   ymtt[46]=ymtt[46] + ymtt[38];
   ymtt[45]=ymtt[2]*ymtt[46]*ymtt[45];
   ymtt[46]=ymtt[39]*MMt;
   ymtt[47]=ymtt[33]*ymtt[46];
   ymtt[45]=ymtt[47] + ymtt[45];
   ymtt[47]=ymtt[39]*MMH;
   ymtt[48]= - 4*ymtt[46] + ymtt[47];
   ymtt[48]=ymtt[28]*MMH*ymtt[48];
   ymtt[49]= - ymtt[19]*ymtt[39]*pow(ymtt[10],2);
   ymtt[48]=ymtt[49] + ymtt[48];
   ymtt[49]=2*ymtt[46] - 1./3.*ymtt[47];
   ymtt[49]=MMH*ymtt[49];
   ymtt[50]=pow(MMt,2);
   ymtt[51]=ymtt[39]*ymtt[50];
   ymtt[49]= - 8./3.*ymtt[51] + ymtt[49];
   ymtt[49]=ymtt[25]*ymtt[49];
   ymtt[44]= - 26*ymtt[9] + ymtt[44] - 11;
   ymtt[44]= - 1./3.*ymtt[44] - ymtt[12];
   ymtt[44]=MMt*ymtt[39]*ymtt[44];
   ymtt[44]=ymtt[44] + ymtt[49];
   ymtt[49]= - 2 + 1./3.*ymtt[9];
   ymtt[51]=2*ymtt[10];
   ymtt[49]=ymtt[49]*ymtt[51];
   ymtt[51]=13./6.*ymtt[7];
   ymtt[49]= - ymtt[49] - ymtt[51] + 17./6.*ymtt[22] + 2*ymtt[8];
   ymtt[49]=ymtt[39]*ymtt[49];
   ymtt[52]=1./2.*ymtt[38];
   ymtt[53]= - 8./3. - ymtt[52];
   ymtt[53]=ymtt[53]*ymtt[38];
   ymtt[54]=ymtt[15]*ymtt[3];
   ymtt[55]=ymtt[39]*ymtt[54];
   ymtt[53]=5./3.*ymtt[55] + ymtt[53] - 8./3.*ymtt[37];
   ymtt[53]=ymtt[15]*ymtt[53];
   ymtt[55]=1./3.*ymtt[14];
   ymtt[56]=ymtt[55] + 1./3.;
   ymtt[56]=ymtt[46]*ymtt[56];
   ymtt[57]=ymtt[15]*ymtt[39];
   ymtt[56]=ymtt[57] + ymtt[56];
   ymtt[56]=ymtt[14]*ymtt[56];
   ymtt[57]=3*ymtt[46] - 4./3.*ymtt[47];
   ymtt[57]=ymtt[34]*ymtt[57];
   ymtt[58]= - 2*ymtt[39] + 1./6.*ymtt[42];
   ymtt[58]=MMH*ymtt[58];
   ymtt[59]=13./3.*ymtt[46];
   ymtt[58]=ymtt[59] + ymtt[58];
   ymtt[58]=ymtt[31]*ymtt[58];
   ymtt[59]=ymtt[19]*ymtt[59];
   ymtt[59]=3*ymtt[39] + ymtt[59];
   ymtt[59]=ymtt[20]*ymtt[59];
   ymtt[43]=ymtt[59] + ymtt[58] + ymtt[57] + 5./2.*ymtt[56] + ymtt[53]
    + ymtt[49] + 2*ymtt[44] + 1./3.*ymtt[43] + 4./3.*ymtt[48] + 5./6.*
   ymtt[45];
   ymtt[43]=ymtt[2]*ymtt[43];
   ymtt[44]=pow(CW,2);
   ymtt[45]=pow(ymtt[3],2);
   ymtt[48]=ymtt[44]*ymtt[45];
   ymtt[49]=ymtt[38] - 1;
   ymtt[53]=ymtt[49]*ymtt[45];
   ymtt[56]=ymtt[48] - ymtt[53];
   ymtt[57]= - ymtt[33] - ymtt[14];
   ymtt[56]=ymtt[56]*ymtt[57];
   ymtt[57]= - 23 + 17*ymtt[37];
   ymtt[58]=ymtt[57]*ymtt[45];
   ymtt[59]=17./9.*ymtt[37];
   ymtt[60]=ymtt[59] + ymtt[38] - 32./9.;
   ymtt[61]=ymtt[60]*ymtt[45];
   ymtt[62]= - ymtt[12]*ymtt[61];
   ymtt[48]= - ymtt[48] - 1./9.*ymtt[58] + ymtt[62] + ymtt[56];
   ymtt[56]=1./3.*MMZ;
   ymtt[48]=ymtt[48]*ymtt[56];
   ymtt[58]=1./3.*ymtt[3];
   ymtt[62]=ymtt[58]*ymtt[7];
   ymtt[62]=ymtt[62] + 2*ymtt[30] - 19./6.*ymtt[33] - 47./6.*ymtt[14];
   ymtt[62]=ymtt[49]*ymtt[62];
   ymtt[57]=ymtt[34]*ymtt[57];
   ymtt[57]= - 4./27.*ymtt[57] - 163./54.*ymtt[37] + 211./54. - 
   ymtt[38] + ymtt[62];
   ymtt[57]=ymtt[3]*ymtt[57];
   ymtt[62]=ymtt[60]*ymtt[3];
   ymtt[63]=25./9.*ymtt[35];
   ymtt[63]=ymtt[63]*ymtt[37];
   ymtt[64]=ymtt[38]*ymtt[35];
   ymtt[63]= - 64./9.*ymtt[35] + ymtt[63] + ymtt[64];
   ymtt[65]=2./3.*ymtt[62] - ymtt[63];
   ymtt[65]=ymtt[17]*ymtt[65];
   ymtt[66]=ymtt[49]*ymtt[3];
   ymtt[67]=ymtt[18]*ymtt[66];
   ymtt[65]=ymtt[65] - ymtt[67];
   ymtt[67]=7./2.*ymtt[38] - 64./9. + 95./18.*ymtt[37];
   ymtt[67]=ymtt[67]*ymtt[58];
   ymtt[68]=2*ymtt[63];
   ymtt[69]=ymtt[68] - ymtt[67];
   ymtt[69]=ymtt[12]*ymtt[69];
   ymtt[70]= - 7./9.*ymtt[37] + ymtt[38] + 64./9.;
   ymtt[71]=ymtt[60]*MMZ;
   ymtt[72]=ymtt[3]*ymtt[71];
   ymtt[72]=ymtt[72] - ymtt[70];
   ymtt[72]=ymtt[29]*ymtt[72];
   ymtt[73]=ymtt[6] - ymtt[13];
   ymtt[73]= - 1./3.*ymtt[73];
   ymtt[73]=ymtt[61]*ymtt[73];
   ymtt[74]=ymtt[37]*ymtt[35];
   ymtt[75]=25./18.*ymtt[74] - 32./9.*ymtt[35] + 1./2.*ymtt[64];
   ymtt[76]=ymtt[15]*ymtt[53];
   ymtt[48]=4./3.*ymtt[72] + ymtt[48] - 1./3.*ymtt[76] + ymtt[69] + 13*
   ymtt[75] + ymtt[57] + ymtt[73] + 2*ymtt[65];
   ymtt[48]=MMZ*ymtt[48];
   ymtt[57]=3./2.*ymtt[38];
   ymtt[65]=ymtt[10]*ymtt[36];
   ymtt[69]=3./2. + ymtt[65];
   ymtt[69]=ymtt[69]*ymtt[57];
   ymtt[72]= - 7./18.*ymtt[37] + 32./9. + ymtt[52];
   ymtt[72]=ymtt[12]*ymtt[72];
   ymtt[73]= - ymtt[36]*ymtt[57];
   ymtt[75]=ymtt[3]*ymtt[38];
   ymtt[73]=ymtt[73] - 5./3.*ymtt[75];
   ymtt[73]=ymtt[15]*ymtt[73];
   ymtt[75]=4./3.*ymtt[14];
   ymtt[76]=ymtt[38]*ymtt[75];
   ymtt[69]=ymtt[76] + ymtt[73] + 7./3.*ymtt[72] + 265./108.*ymtt[37]
    + 320./27. + ymtt[69];
   ymtt[69]=ymtt[3]*ymtt[69];
   ymtt[72]=3 + 7./3.*ymtt[9];
   ymtt[72]=ymtt[75] + 2*ymtt[72];
   ymtt[72]=ymtt[39]*ymtt[72];
   ymtt[73]=1 + ymtt[38];
   ymtt[73]=ymtt[73]*ymtt[38];
   ymtt[73]=ymtt[73] + ymtt[37];
   ymtt[73]=ymtt[73]*ymtt[54];
   ymtt[41]=ymtt[41] - ymtt[73];
   ymtt[73]=1./2. + 7*ymtt[9];
   ymtt[73]= - ymtt[73]*ymtt[42];
   ymtt[40]=ymtt[19]*ymtt[40];
   ymtt[40]= - 13./3.*ymtt[40] + 1./6.*ymtt[73] - 3./2.*ymtt[41] + 
   ymtt[72];
   ymtt[40]=ymtt[2]*ymtt[40];
   ymtt[41]=ymtt[39]*ymtt[2];
   ymtt[72]=1./3. - 3*ymtt[38];
   ymtt[72]=ymtt[72]*ymtt[52];
   ymtt[72]= - 199./54.*ymtt[37] + 416./27. + ymtt[72];
   ymtt[72]=ymtt[3]*ymtt[72];
   ymtt[72]=ymtt[41] + 4*ymtt[63] + ymtt[72];
   ymtt[72]=ymtt[2]*ymtt[72];
   ymtt[73]=ymtt[52] - 16./9. + 17./18.*ymtt[37];
   ymtt[75]=ymtt[73]*ymtt[45];
   ymtt[72]= - 5*ymtt[75] + ymtt[72];
   ymtt[72]=ymtt[13]*ymtt[72];
   ymtt[64]= - 25./3.*ymtt[74] - 3*ymtt[64] + 64./3.*ymtt[35];
   ymtt[74]=1./3.*ymtt[37] - 16./3. - ymtt[38];
   ymtt[74]=ymtt[3]*ymtt[74];
   ymtt[74]=ymtt[74] + ymtt[64];
   ymtt[47]=ymtt[45]*ymtt[47];
   ymtt[47]=4*ymtt[74] + ymtt[47];
   ymtt[47]=ymtt[2]*ymtt[47];
   ymtt[74]=ymtt[38] + 41./9.*ymtt[37];
   ymtt[74]=ymtt[74]*ymtt[45];
   ymtt[71]=pow(ymtt[3],3)*ymtt[71];
   ymtt[47]=ymtt[71] + ymtt[74] + ymtt[47];
   ymtt[47]=ymtt[11]*ymtt[47];
   ymtt[71]=5*ymtt[38];
   ymtt[59]=ymtt[59] + 22./9. - ymtt[71];
   ymtt[73]=ymtt[12]*ymtt[73];
   ymtt[59]=2*ymtt[59] - 7*ymtt[73];
   ymtt[59]=ymtt[45]*ymtt[59];
   ymtt[53]=ymtt[14]*ymtt[53];
   ymtt[53]= - 2*ymtt[53] + ymtt[59];
   ymtt[53]=ymtt[53]*ymtt[56];
   ymtt[40]=ymtt[47] + ymtt[53] + ymtt[72] + ymtt[40] + 2*ymtt[64] + 
   ymtt[69];
   ymtt[40]=ymtt[11]*ymtt[40];
   ymtt[47]=ymtt[60]*ymtt[58];
   ymtt[53]=ymtt[47] - ymtt[63];
   ymtt[59]=ymtt[13]*ymtt[53];
   ymtt[52]= - 1 + ymtt[52];
   ymtt[52]=ymtt[52]*ymtt[38];
   ymtt[52]= - 4*ymtt[59] + ymtt[52] - ymtt[37];
   ymtt[52]=ymtt[2]*ymtt[52];
   ymtt[53]=ymtt[12]*ymtt[53];
   ymtt[59]=77./18.*ymtt[37] - 64./9. + 5./2.*ymtt[38];
   ymtt[59]=ymtt[3]*ymtt[59];
   ymtt[52]= - 2*ymtt[53] - 5*ymtt[63] + ymtt[59] + ymtt[52];
   ymtt[52]=ymtt[13]*ymtt[52];
   ymtt[42]=47./2.*ymtt[39] - 5*ymtt[42];
   ymtt[42]=ymtt[2]*ymtt[42];
   ymtt[53]= - 34./9.*ymtt[37] + 37./9. + ymtt[38];
   ymtt[45]=ymtt[53]*ymtt[45]*ymtt[56];
   ymtt[53]= - 23./3.*ymtt[37] - 32./3. + 23./2.*ymtt[38];
   ymtt[53]=ymtt[53]*ymtt[58];
   ymtt[42]=ymtt[45] + 1./3.*ymtt[42] + ymtt[68] + ymtt[53];
   ymtt[42]=ymtt[23]*ymtt[42];
   ymtt[45]= - MMZ*ymtt[47];
   ymtt[39]=ymtt[45] + ymtt[39];
   ymtt[39]=MMZ*ymtt[39];
   ymtt[45]=2./3.*ymtt[70];
   ymtt[47]= - MMt*ymtt[45];
   ymtt[39]=ymtt[47] + ymtt[39];
   ymtt[39]=ymtt[26]*ymtt[39];
   ymtt[41]=ymtt[50]*ymtt[41];
   ymtt[44]=ymtt[3]*ymtt[44];
   ymtt[44]= - ymtt[66] + ymtt[44];
   ymtt[44]=MMZ*ymtt[44];
   ymtt[44]=2./3.*ymtt[44] + ymtt[49];
   ymtt[44]=MMZ*ymtt[44];
   ymtt[41]= - 1./3.*ymtt[41] + ymtt[44];
   ymtt[41]=ymtt[24]*ymtt[41];
   ymtt[44]= - 14./27.*ymtt[37] - 112./27. + ymtt[38];
   ymtt[44]=ymtt[34]*ymtt[44];
   ymtt[39]=ymtt[41] + ymtt[44] + ymtt[39];
   ymtt[41]=ymtt[38] - 224./9. + 65./9.*ymtt[37];
   ymtt[44]=ymtt[46]*ymtt[2];
   ymtt[41]= - ymtt[44] + 1./3.*ymtt[41];
   ymtt[44]=ymtt[2]*ymtt[41];
   ymtt[44]=ymtt[44] - 7*ymtt[63] + 4*ymtt[62];
   ymtt[44]=ymtt[21]*ymtt[44];
   ymtt[46]=59./18.*ymtt[37] - 64./9. + ymtt[57];
   ymtt[46]=ymtt[3]*ymtt[46];
   ymtt[47]= - ymtt[56]*ymtt[61];
   ymtt[46]=ymtt[46] + ymtt[47];
   ymtt[46]=MMZ*ymtt[46];
   ymtt[41]=ymtt[46] + ymtt[41];
   ymtt[41]=ymtt[32]*ymtt[41];
   ymtt[46]= - ymtt[22] - ymtt[51];
   ymtt[46]=ymtt[3]*ymtt[46];
   ymtt[47]= - 125./12. - ymtt[65];
   ymtt[49]=ymtt[36] + 11./3.*ymtt[3];
   ymtt[49]=ymtt[15]*ymtt[49];
   ymtt[46]=1./2.*ymtt[49] + 2./3.*ymtt[33] + 1./2.*ymtt[47] + ymtt[46]
   ;
   ymtt[46]=ymtt[38]*ymtt[46];
   ymtt[47]= - ymtt[67] - ymtt[64];
   ymtt[47]=ymtt[6]*ymtt[47];
   ymtt[49]=1./9.*ymtt[37] + 176./9. + ymtt[71];
   ymtt[49]=ymtt[12]*ymtt[49];
   ymtt[45]= - ymtt[17]*ymtt[45];
   ymtt[50]=ymtt[14] + ymtt[54];
   ymtt[50]=ymtt[71]*ymtt[50];
   ymtt[38]= - ymtt[38] + ymtt[50];
   ymtt[38]=ymtt[38]*ymtt[55];
   ymtt[50]=ymtt[27]*MMt;

      return  - 704./27. - 53./72.*ymtt[37] + ymtt[38] + 2*ymtt[39] + 
      ymtt[40] + ymtt[41] + ymtt[42] + ymtt[43] + ymtt[44] + ymtt[45]
       + ymtt[46] + ymtt[47] + ymtt[48] + 2./3.*ymtt[49] + 256./27.*
      ymtt[50] + ymtt[52];
}
