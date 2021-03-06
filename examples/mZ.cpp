#include "mr.hpp"
#include "gnuplot.hpp"

int main (int argc, char *argv[])
{
  try
    {
      // Disable TSIL warnings output
      fclose(stderr);
      long double MMt,MMW,MMZ,MMH,alphaMt,alphaS;

      // Comare with JKVH:
      // bosonic only part (nH = nL = 0)    : arXiv:hep-ph/0105304
      // fermionic    part (nH = 1, nL = 2) : arXiv:hep-ph/0212319           
      // MSinput JKVH80(4.4, 80.419, 91.188, 200, 174.3);
      // MSinput JKVH200(4.4, 80.419, 91.188, 350, 174.3);

      MSinput JKVH80(4.4, 89.419, 91.188, 400, 174.3);
      MSinput JKVH200(4.4, 89.419, 91.188, 1800, 174.3);
         
      // alphaMt  = 0.00779;
      alphaS = 0.1184;

      long double alphaMZ = 1./127.944;
      long double alpha0 = 1./137.035999;

      alphaMt = alphaMZ;
      ZZ<MS> W80  = ZZ<MS>(JKVH80, JKVH80.mmZ());
      ZZ<MS> W200 = ZZ<MS>(JKVH200, JKVH200.mmZ());

      std::cout << "\\mu = MZ" << std::endl;
      // 
      // Bosonic part 1-loop
      // 
      std::cout << "No fermions: 1-loop \\alpha      Mh= " << JKVH80.mH()  << ", [mW/MW -1] = " 
                << alphaMZ/4./Pi*W80.x10(0,0) << std::endl;
      std::cout << "No fermions: 1-loop \\alpha      Mh= " << JKVH200.mH()  << ", [mW/MW -1] = " 
                << alphaMZ/4./Pi*W200.x10(0,0) << std::endl;

      // 
      // Full SM
      // 
      std::cout << "SM 1-loop \\alpha      Mh= " << JKVH80.mH()  << ", [mW/MW -1] = " 
                << alphaMZ/4./Pi*W80.x10() << std::endl;
      std::cout << "SM 1-loop \\alpha      Mh= " << JKVH200.mH()  << ", [mW/MW -1] = " 
                << alphaMZ/4./Pi*W200.x10() << std::endl;

      std::cout << "\nSM 2-loop \\alpha^2 nf=0     Mh= " << JKVH80.mH()  << ", [mW/MW -1] = " 
                << pow(alphaMZ/4./Pi,2)*W80.x20(0,0) << std::endl;
      std::cout << "SM 2-loop \\alpha^2 nf=0     Mh= " << JKVH200.mH()  << ", [mW/MW -1] = " 
                << pow(alphaMZ/4./Pi,2)*W200.x20(0,0) << std::endl;

      std::cout << "SM 2-loop \\alpha^2 nf=3     Mh= " << JKVH80.mH()  << ", [mW/MW -1] = " 
                << pow(alphaMZ/4./Pi,2)*W80.x20() << std::endl;
      std::cout << "SM 2-loop \\alpha^2 nf=3     Mh= " << JKVH200.mH()  << ", [mW/MW -1] = " 
                << pow(alphaMZ/4./Pi,2)*W200.x20() << std::endl;

      std::cout << "\nSM 2-loop \\alpha^2 nl=2,nh=0     Mh= " << JKVH80.mH()  << ", [mW/MW -1] = " 
                << pow(alphaMZ/4./Pi,2)*W80.x20(2,0) << std::endl;
      std::cout << "SM 2-loop \\alpha^2 nl=2,nh=0     Mh= " << JKVH200.mH()  << ", [mW/MW -1] = " 
                << pow(alphaMZ/4./Pi,2)*W200.x20(2,0) << std::endl;

      // // In ACOV \mu^2 = MMZ
      // ww W_ACOV_80  = ww(JKVH80, JKVH80.mmZ());
      // ww W_ACOV_200 = ww(JKVH200, JKVH200.mmZ());
      
      // // 
      // // Bosonic part 2-loop, compare with ACOV: arXiv:hep-ph/0209084,
      // // FIG. 6
      // // 
      // std::cout << "\\mu = MZ" << std::endl;
      // std::cout << "2-loop \\alpha^2      Mh= " << JKVH80.mH()  << ", [mW/MW -1] = " 
      //           << pow(alpha0/4./Pi,2)*W_ACOV_80.x20(0,0) << std::endl;
      // std::cout << "2-loop \\alpha^2      Mh= " << JKVH200.mH()  << ", [mW/MW -1] = " 
      //           << pow(alpha0/4./Pi,2)*W_ACOV_200.x20(0,0) << std::endl;

      // // 
      // // Plot 2-loop bosonic part
      // // 
      // Plot1 plot("mW_0209084_fig6", "\\alpha^2 conversion between \\bar{MS} and  On-Shell W mass", "mH", "mmW(mZ)/MMW-1", "2-loop ");
      // AlphaS as;
      // long double mHstep  = 10; // GeV
      // long double mHstart = 80; // GeV

      // for (int mHi = 0; mHi < 13; mHi++)
      //   {
      //     // from Table.1
      //     OSinput DS2l(4.4, 80.419, 91.188, mHstart + mHi*mHstep, 174.3);
          
      //     WW dW  = WW(DS2l, DS2l.MMZ());          
          
      //     plot.add(DS2l.MH(), 
      //              // alphaMt/4./Pi*dW.x10().real(), 
      //              // alphaMt/4./Pi*as(DS2l.MMt())/4./Pi*dH.x11().real(),
      //              pow(alpha0/4./Pi,2)*dW.x20(0,0).real());
      //   }

      // // 
      // // Plot 2-loop bosonic part
      // // 
      // Plot3 plotJKV("mW_0105304_fig5", "\\alpha^2 conversion between \\bar{MS} and  On-Shell Z mass", "mH", "mmZ(mZ)/MMZ-1", "1-loop nf=0", "2-loop", "1+2-loop");
      // mHstep  = 20; // GeV
      // mHstart = 100; // GeV
      
      // for (int mHi = 0; mHi < 11; mHi++)
      //   {
      //     // from Table.1
      //     MSinput DS2l(4.4, 80.419, 91.188, mHstart + mHi*mHstep, 174.3);
      //     ww dW  = ww(DS2l, DS2l.mmW());          
          
      //     long double mW_2l = pow(alpha0/4./Pi,2)*dW.x20(0,0).real();
      //     long double mW_1l = pow(alpha0/4./Pi,1)*dW.x10(0,0).real();
      //     plotJKV.add(DS2l.mH(), 
      //              mW_1l,
      //              mW_2l,
      //              mW_1l+mW_2l
      //                 );
      //   }
      

 
    }
  catch (std::exception &p) 
    {
      std::cerr << p.what() << std::endl;
      return 1;
    }
  
  return 0;
}

