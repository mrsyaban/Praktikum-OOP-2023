#include "Rekening.h"

Rekening::Rekening(double x){
    if(x<0.0){
        this->saldo = 0.0;
    }else{
        this->saldo = x;
    }
}

void Rekening::setSaldo(double x){
    this->saldo = x;
}

double Rekening::getSaldo() const{
    return this->saldo;
}

void Rekening::simpanUang(double x){
    this->saldo += x;
}

bool Rekening::tarikUang(double x){
    if(x<=this->saldo){
        this->saldo -= x;
        return true;
    }else{
        return false;
    }
}