#include "sekretaris.h"
#include "memo.h"

#include <iostream>

Sekretaris::Sekretaris() {
    this->tinta = TINTA_DEFAULT;
    this->kertas = KERTAS_DEFAULT;
    this->energi = ENERGI_MAX;
    this->memoLength = 0;
    this->memo = new Memo[0];
}

Sekretaris::Sekretaris(int kertas, int tinta) {
    this->tinta = tinta;
    this->kertas = kertas;
    this->energi = ENERGI_MAX;
    this->memoLength = 0;
    this->memo = new Memo[0];
}

Sekretaris::~Sekretaris() {
    delete[] this->memo;
}

void Sekretaris::buatMemo(string pesan, string untuk) {

    // exception err;
    
    // try {
    //     pakaiKertas();
    //     pakaiTinta(pesan.length());
    //     pakaiEnergi();
    //     Memo a(pesan, untuk);
    //     Memo *newMemo = new Memo[this->memoLength + 1];
    //     for (int i = 0; i < this->memoLength; i++) {
    //         newMemo[i] = this->memo[i];
    //     }
    //     newMemo[this->memoLength] = a;
    //     this->memoLength++;
    //     delete[] this->memo;
    //     this->memo = newMemo;
    //     cout << "Memo [" << this->memoLength << "] untuk " << untuk << " berhasil dibuat" << endl;

    // } catch(KertasHabisException &err) {
    //     cout << err.what() << ", segera isi kertas" << endl;
    // } catch(TintaKurangException &err) {
    //     batalPakaiKertas();
    //     cout << err.what() << ", segera isi tinta" << endl;
    // } catch(EnergiHabisException &err) {
    //     batalPakaiKertas();
    //     batalPakaiTinta(pesan.length());
    //     cout << err.what() << ", segera istirahat" << endl;
    // } catch(PesanKepanjanganException &err) {
    //     batalPakaiKertas();
    //     batalPakaiTinta(pesan.length());
    //     batalPakaiEnergi();
    //     cout << err.what() << ", perpendek pesannya" << endl;
    // }
    try {
        pakaiKertas();
        pakaiTinta(pesan.length());
        pakaiEnergi();
        Memo newMemo(pesan, untuk);
        this->memo[memoLength] = newMemo; 
        this->memoLength++;
        cout << "Memo [" << this->memoLength << "] untuk " << untuk << " berhasil dibuat" << endl;
    } catch ()
}

void Sekretaris::pakaiKertas() {
    this->kertas--;
    KertasHabisException kh;
    if (this->kertas < 0) {
        batalPakaiKertas();
        throw kh;
    }
}

void Sekretaris::pakaiTinta(int num) {
    this->tinta -= num;
    TintaKurangException tk;
    if (this->tinta < 0) {
        batalPakaiTinta(num);
        throw tk;
    }
}

void Sekretaris::pakaiEnergi() {
    this->energi--;
    EnergiHabisException kh;
    if (this->energi < 0) {
        batalPakaiEnergi();
        throw kh;
    }
}

void Sekretaris::batalPakaiKertas() {
    this->kertas++;
}

void Sekretaris::batalPakaiTinta(int num) {
    this->tinta += num;
}

void Sekretaris::batalPakaiEnergi() {
    this->energi++;
}

void Sekretaris::isiTinta(int num) {
    this->tinta += num;
}


void Sekretaris::isiKertas(int num) {
    this->kertas += num;
}

/*
    Istirahat mengembalikan energi menjadi maksimum.
*/
void Sekretaris::istirahat() {
    this->energi = ENERGI_MAX;
}

void Sekretaris::printStatus() {
    cout << "Status" << endl;
    cout << "  Energi : " << this->energi << endl;
    cout << "  Tinta : " << this->tinta << endl;
    cout << "  Kertas : " << this->kertas << endl;
    cout << "  Memo : " << this->memoLength << endl;
    for (int i = 0; i < this->memoLength; i++) {
        cout << "    Memo [" << i + 1 << "]" << endl;
        cout << "      Pesan : " << (this->memo[i]).getPesan() << endl;
        cout << "      Untuk : " << (this->memo[i]).getUntuk() << endl;
    }
}