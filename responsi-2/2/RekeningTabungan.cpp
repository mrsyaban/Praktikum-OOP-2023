#include "RekeningTabungan.h"
// Konstruktor menginisialisi saldo (parameter 1) dan biaya transaksi (parameter 2)
// Set biaya transaksi 0.0 apabila biaya transaksi bernilai negatif
RekeningTabungan::RekeningTabungan(double x, double y) : Rekening(x){
    this->biayaTransaksi = y;
}

// Getter, Setter
void RekeningTabungan::setBiayaTransaksi(double x){
    this->biayaTransaksi = x;
}
double RekeningTabungan::getBiayaTransaksi() const{
    return this->biayaTransaksi;
}

// Member Function
// Panggil fungsi simpanUang dari parent class
// Kurangkan saldo dengan biaya transaksi
void RekeningTabungan::simpanUang(double x){
    Rekening::simpanUang(x);
    Rekening::setSaldo(getSaldo()-biayaTransaksi);
}

// Panggil fungsi tarikUang dari parent class
// Kurangkan saldo dengan biaya transaksi hanya jika penarikan uang berhasil
// Saldo mungkin saja menjadi negatif apabila setelah penarikan, saldo < biaya transaksi
// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
bool RekeningTabungan::tarikUang(double x){
    if(Rekening::tarikUang(x)){
        Rekening::setSaldo(Rekening::getSaldo()-biayaTransaksi);
        return true;
    }else{
        return false;
    }
}
