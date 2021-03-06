//
// MR - 2-loop matching and 3-loop Running, including full 2-loop EW corrections
// Copyright (C) 2014 Andrey Pikelner <pikelner@theor.jinr.ru>
//
// This file is part of MR.
//
// MR is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// MR is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with MR.  If not, see <http://www.gnu.org/licenses/>.
//

diffMfin.push_back(  - protHHttH->M(0) + Mfin1(MMH,MMH,MMt,MMt,MMH) );
diffMfin.push_back(  - protHZttZ->M(0) + Mfin1(MMH,MMZ,MMt,MMt,MMZ) );
diffMfin.push_back(  - protHWt0W->M(0) + Mfin1(MMH,MMW,MMt,0,MMW) );
diffMfin.push_back(  - protHttHt->M(0) + Mfin1(MMH,MMt,MMt,MMH,MMt) );
diffMfin.push_back(  - protHttZt->M(0) + Mfin1(MMH,MMt,MMt,MMZ,MMt) );
diffMfin.push_back(  - protHZttZ->M(0) + Mfin1(MMZ,MMH,MMt,MMt,MMZ) );
diffMfin.push_back(  - protZZttH->M(0) + Mfin1(MMZ,MMZ,MMt,MMt,MMH) );
diffMfin.push_back(  - protZWt0W->M(0) + Mfin1(MMZ,MMW,MMt,0,MMW) );
diffMfin.push_back(  - protHttZt->M(0) + Mfin1(MMZ,MMt,MMt,MMH,MMt) );
diffMfin.push_back(  - protZttZt->M(0) + Mfin1(MMZ,MMt,MMt,MMZ,MMt) );
diffMfin.push_back(  - protZ0tW0->M(0) + Mfin1(MMZ,0,MMt,MMW,0) );
diffMfin.push_back(  - protZ0tW0->M(0) + Mfin1(0,MMZ,MMW,MMt,0) );
diffMfin.push_back(  - protW00tW->M(0) + Mfin1(0,MMW,MMt,0,MMW) );
diffMfin.push_back(  - protHWt0W->M(0) + Mfin1(0,MMt,MMW,MMH,MMW) );
diffMfin.push_back(  - protZWt0W->M(0) + Mfin1(0,MMt,MMW,MMZ,MMW) );
diffMfin.push_back(  - protW00tW->M(0) + Mfin1(0,MMt,MMW,0,MMW) );
diffMfin.push_back(  - prot0ttHt->M(0) + Mfin1(0,MMt,MMt,MMH,MMt) );
diffMfin.push_back(  - prot0ttZt->M(0) + Mfin1(0,MMt,MMt,MMZ,MMt) );
diffMfin.push_back(  - prot0tt0t->M(0) + Mfin1(0,MMt,MMt,0,MMt) );
diffMfin.push_back(  - protWW00Z->M(0) + Mfin1(0,0,MMW,MMW,MMZ) );
diffMfin.push_back(  - prot00WW0->M(0) + Mfin1(0,0,MMW,MMW,0) );
diffMfin.push_back(  - protWt000->M(0) + Mfin1(0,0,MMW,MMt,0) );
diffMfin.push_back(  - protWt000->M(0) + Mfin1(0,0,MMt,MMW,0) );
diffVfin.push_back(  - prottH0H->Vxzuv(0) + Vfin1(MMt,MMH,0,MMH) );
diffVfin.push_back(  - prottZ0Z->Vxzuv(0) + Vfin1(MMt,MMZ,0,MMZ) );
diffUfin.push_back(  - protHHttH->Uxzuv(0) + Ufin1(MMH,MMt,MMH,MMt) );
diffUfin.push_back(  - protHZttZ->Uxzuv(0) + Ufin1(MMH,MMt,MMZ,MMt) );
diffUfin.push_back(  - protHWt0W->Uxzuv(0) + Ufin1(MMH,MMt,0,MMW) );
diffUfin.push_back(  - protHttZt->Uuyxv(0) + Ufin1(MMZ,MMt,MMH,MMt) );
diffUfin.push_back(  - protHZttZ->Uyuzv(0) + Ufin1(MMZ,MMt,MMZ,MMt) );
diffUfin.push_back(  - protZ0tW0->Uxzuv(0) + Ufin1(MMZ,MMt,0,MMW) );
diffUfin.push_back(  - protHHttH->Uuyxv(0) + Ufin1(MMt,MMH,MMH,MMH) );
diffUfin.push_back(  - protHZttZ->Uzxyv(0) + Ufin1(MMt,MMH,MMZ,MMZ) );
diffUfin.push_back(  - protHWt0W->Uzxyv(0) + Ufin1(MMt,MMH,MMW,MMW) );
diffUfin.push_back(  - protZZttH->Uzxyv(0) + Ufin1(MMt,MMZ,MMZ,MMH) );
diffUfin.push_back(  - protZWt0W->Uzxyv(0) + Ufin1(MMt,MMZ,MMW,MMW) );
diffUfin.push_back(  - protZ0tW0->Uzxyv(0) + Ufin1(MMt,MMZ,0,0) );
diffUfin.push_back(  - protW00tW->Uuyxv(0) + Ufin1(MMt,0,MMW,MMW) );
diffUfin.push_back(  - protHWt0W->Uuyxv(0) + Ufin1(0,MMW,MMW,MMH) );
diffUfin.push_back(  - protZWt0W->Uuyxv(0) + Ufin1(0,MMW,MMW,MMZ) );
diffUfin.push_back(  - protWt000->Uzxyv(0) + Ufin1(0,MMW,0,MMt) );
diffUfin.push_back(  - prot0W00->Uxzuv(0) + Ufin1(0,MMW,0,0) );
diffTfin.push_back(  - protHZttZ->Txuv(0) + Tfin1(MMH,MMZ,MMt) );
diffTfin.push_back(  - protHWt0W->Txuv(0) + Tfin1(MMH,MMW,0) );
diffTfin.push_back(  - protHttHt->Txuv(0) + Tfin1(MMH,MMt,MMH) );
diffTfin.push_back(  - prot0ttHt->Tuxv(0) + Tfin1(MMH,MMt,0) );
diffTfin.push_back(  - protZWt0W->Txuv(0) + Tfin1(MMZ,MMW,0) );
diffTfin.push_back(  - protHttZt->Tuxv(0) + Tfin1(MMZ,MMt,MMH) );
diffTfin.push_back(  - prot0ttZt->Tuxv(0) + Tfin1(MMZ,MMt,0) );
diffTfin.push_back(  - protHWt0W->Tvxu(0) + Tfin1(MMW,MMH,0) );
diffTfin.push_back(  - protZWt0W->Tvxu(0) + Tfin1(MMW,MMZ,0) );
diffTfin.push_back(  - protWt000->Txuv(0) + Tfin1(MMW,0,0) );
diffTfin.push_back(  - protWt000->Tyzv(0) + Tfin1(MMt,0,0) );
diffSfin.push_back(  - protHHttH->Suxv(0) + Sfin1(MMH,MMH,MMt) );
diffSfin.push_back(  - protHZttZ->Suxv(0) + Sfin1(MMZ,MMH,MMt) );
diffSfin.push_back(  - protHZttZ->Svyz(0) + Sfin1(MMZ,MMZ,MMt) );
diffSfin.push_back(  - protHWt0W->Svyz(0) + Sfin1(MMW,MMW,MMt) );
diffSfin.push_back(  - protHWt0W->Suxv(0) + Sfin1(0,MMW,MMH) );
diffSfin.push_back(  - protZ0tW0->Suxv(0) + Sfin1(0,MMW,MMZ) );
