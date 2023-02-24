#include "RekeningGiro.h"

RekeningGiro::RekeningGiro(double x, double y) : Rekening(x)
{
    this->sukuBunga = y;
}

// Getter, Setter
void RekeningGiro::setSukuBunga(double x){
    this->sukuBunga = x;
}

double RekeningGiro::getSukuBunga() const{
    return this->sukuBunga;
}

// Member Function
// Bunga dihitung dari saldo dikali suku bunga
double RekeningGiro::hitungBunga(){
    return this->getSaldo()*this->sukuBunga;
}