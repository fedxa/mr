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

diffMfin.push_back(  - protWHHWW->M(0) + Mfin1(MMW,MMH,MMH,MMW,MMW) );
diffMfin.push_back(  - protWHZWW->M(0) + Mfin1(MMW,MMH,MMZ,MMW,MMW) );
diffMfin.push_back(  - protWHZWW->M(0) + Mfin1(MMW,MMZ,MMH,MMW,MMW) );
diffMfin.push_back(  - protWZZWW->M(0) + Mfin1(MMW,MMZ,MMZ,MMW,MMW) );
diffMfin.push_back(  - protWWHHH->M(0) + Mfin1(MMW,MMW,MMH,MMH,MMH) );
diffMfin.push_back(  - protWWHZZ->M(0) + Mfin1(MMW,MMW,MMH,MMZ,MMZ) );
diffMfin.push_back(  - protWWHZZ->M(0) + Mfin1(MMW,MMW,MMZ,MMH,MMZ) );
diffMfin.push_back(  - protWWZZH->M(0) + Mfin1(MMW,MMW,MMZ,MMZ,MMH) );
diffMfin.push_back(  - protWtZ00->M(0) + Mfin1(MMW,MMt,MMZ,0,0) );
diffMfin.push_back(  - protW0HWW->M(0) + Mfin1(MMW,0,MMH,MMW,MMW) );
diffMfin.push_back(  - protW0Htt->M(0) + Mfin1(MMW,0,MMH,MMt,MMt) );
diffMfin.push_back(  - protW0ZWW->M(0) + Mfin1(MMW,0,MMZ,MMW,MMW) );
diffMfin.push_back(  - protW0Ztt->M(0) + Mfin1(MMW,0,MMZ,MMt,MMt) );
diffMfin.push_back(  - protW0Z00->M(0) + Mfin1(MMW,0,MMZ,0,0) );
diffMfin.push_back(  - protWtZ00->M(0) + Mfin1(0,MMZ,MMt,MMW,0) );
diffMfin.push_back(  - protW0HWW->M(0) + Mfin1(0,MMW,MMW,MMH,MMW) );
diffMfin.push_back(  - protW0ZWW->M(0) + Mfin1(0,MMW,MMW,MMZ,MMW) );
diffMfin.push_back(  - prot0WW0W->M(0) + Mfin1(0,MMW,MMW,0,MMW) );
diffMfin.push_back(  - protW0Htt->M(0) + Mfin1(0,MMW,MMt,MMH,MMt) );
diffMfin.push_back(  - protW0Ztt->M(0) + Mfin1(0,MMW,MMt,MMZ,MMt) );
diffMfin.push_back(  - prot0Wt0t->M(0) + Mfin1(0,MMW,MMt,0,MMt) );
diffMfin.push_back(  - prot0W0Z0->M(0) + Mfin1(0,MMW,0,MMZ,0) );
diffMfin.push_back(  - prot0Wt0t->M(0) + Mfin1(0,MMt,MMW,0,MMt) );
diffMfin.push_back(  - prot00Wt0->M(0) + Mfin1(0,0,MMW,MMt,0) );
diffMfin.push_back(  - prot00W00->M(0) + Mfin1(0,0,MMW,0,0) );
diffMfin.push_back(  - prot00Wt0->M(0) + Mfin1(0,0,MMt,MMW,0) );
diffMfin.push_back(  - prot00ttZ->M(0) + Mfin1(0,0,MMt,MMt,MMZ) );
diffMfin.push_back(  - prot00tt0->M(0) + Mfin1(0,0,MMt,MMt,0) );
diffMfin.push_back(  - prot00W00->M(0) + Mfin1(0,0,0,MMW,0) );
diffMfin.push_back(  - prot0000Z->M(0) + Mfin1(0,0,0,0,MMZ) );
diffMfin.push_back(  - prot00000->M(0) + Mfin1(0,0,0,0,0) );
diffVfin.push_back(  - protWH0H->Vxzuv(0) + Vfin1(MMW,MMH,0,MMH) );
diffVfin.push_back(  - protWZ0Z->Vxzuv(0) + Vfin1(MMW,MMZ,0,MMZ) );
diffUfin.push_back(  - protWHHWW->Uzxyv(0) + Ufin1(MMH,MMW,MMW,MMH) );
diffUfin.push_back(  - protWHZWW->Uyuzv(0) + Ufin1(MMH,MMW,MMW,MMZ) );
diffUfin.push_back(  - protW0Htt->Uzxyv(0) + Ufin1(MMH,MMW,0,MMt) );
diffUfin.push_back(  - protHW00->Uxzuv(0) + Ufin1(MMH,MMW,0,0) );
diffUfin.push_back(  - protWHZWW->Uzxyv(0) + Ufin1(MMZ,MMW,MMW,MMH) );
diffUfin.push_back(  - protWZZWW->Uzxyv(0) + Ufin1(MMZ,MMW,MMW,MMZ) );
diffUfin.push_back(  - protWtZ00->Uzxyv(0) + Ufin1(MMZ,MMW,0,MMt) );
diffUfin.push_back(  - protW0Z00->Uzxyv(0) + Ufin1(MMZ,MMW,0,0) );
diffUfin.push_back(  - protWWHHH->Uyuzv(0) + Ufin1(MMW,MMH,MMH,MMH) );
diffUfin.push_back(  - protWWHZZ->Uxzuv(0) + Ufin1(MMW,MMH,MMZ,MMZ) );
diffUfin.push_back(  - protWHHWW->Uxzuv(0) + Ufin1(MMW,MMH,MMW,MMW) );
diffUfin.push_back(  - protW0Htt->Uxzuv(0) + Ufin1(MMW,MMH,MMt,MMt) );
diffUfin.push_back(  - protWWHZZ->Uyuzv(0) + Ufin1(MMW,MMZ,MMZ,MMH) );
diffUfin.push_back(  - protWHZWW->Uxzuv(0) + Ufin1(MMW,MMZ,MMW,MMW) );
diffUfin.push_back(  - protW0Ztt->Uxzuv(0) + Ufin1(MMW,MMZ,MMt,MMt) );
diffUfin.push_back(  - protWtZ00->Uxzuv(0) + Ufin1(MMW,MMZ,0,0) );
diffUfin.push_back(  - prot0Wt0t->Uyuzv(0) + Ufin1(MMW,0,MMt,MMt) );
diffUfin.push_back(  - protW0Htt->Uyuzv(0) + Ufin1(0,MMt,MMH,MMt) );
diffUfin.push_back(  - protW0Ztt->Uyuzv(0) + Ufin1(0,MMt,MMZ,MMt) );
diffUfin.push_back(  - protWtZ00->Uuyxv(0) + Ufin1(0,MMt,0,MMW) );
diffTfin.push_back(  - protWHZWW->Tyzv(0) + Tfin1(MMH,MMZ,MMW) );
diffTfin.push_back(  - protWHHWW->Tyzv(0) + Tfin1(MMH,MMW,MMH) );
diffTfin.push_back(  - protW0HWW->Tzyv(0) + Tfin1(MMH,MMW,0) );
diffTfin.push_back(  - protW0Htt->Tzyv(0) + Tfin1(MMH,MMt,0) );
diffTfin.push_back(  - protHW00->Txuv(0) + Tfin1(MMH,0,0) );
diffTfin.push_back(  - protWHZWW->Tzyv(0) + Tfin1(MMZ,MMW,MMH) );
diffTfin.push_back(  - protW0ZWW->Tzyv(0) + Tfin1(MMZ,MMW,0) );
diffTfin.push_back(  - protWtZ00->Tzyv(0) + Tfin1(MMZ,MMt,0) );
diffTfin.push_back(  - prot0W0Z0->Tuxv(0) + Tfin1(MMZ,0,0) );
diffTfin.push_back(  - protWtZ00->Txuv(0) + Tfin1(MMW,0,0) );
diffTfin.push_back(  - protW0Htt->Tvyz(0) + Tfin1(MMt,MMH,0) );
diffTfin.push_back(  - protWtZ00->Tyzv(0) + Tfin1(MMt,MMZ,0) );
diffTfin.push_back(  - prot00tt0->Tuxv(0) + Tfin1(MMt,0,0) );
diffSfin.push_back(  - protWHHWW->Svyz(0) + Sfin1(MMW,MMH,MMH) );
diffSfin.push_back(  - protWHZWW->Svyz(0) + Sfin1(MMW,MMZ,MMH) );
diffSfin.push_back(  - protWZZWW->Svyz(0) + Sfin1(MMW,MMZ,MMZ) );
diffSfin.push_back(  - protW0Htt->Suxv(0) + Sfin1(MMW,MMt,MMt) );
diffSfin.push_back(  - protW0Htt->Svyz(0) + Sfin1(0,MMH,MMt) );
diffSfin.push_back(  - protWtZ00->Svyz(0) + Sfin1(0,MMZ,MMt) );
diffSfin.push_back(  - protWtZ00->Suxv(0) + Sfin1(0,0,MMW) );
