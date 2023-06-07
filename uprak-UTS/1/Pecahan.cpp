#include "Pecahan.hpp"
#include <iostream>
using namespace std;

pecahan::pecahan(){
    n =0;
    d=1;
}

// ctor: set n = _n dan d = _d
pecahan::pecahan(int _n, int _d){
    n = _n;
    d = _d;
}

pecahan::pecahan(const pecahan &P){
    n = P.n;
    d = P.d;
} // cctor:

pecahan::~pecahan(){

} // dtor

int pecahan::getPemb(){
    return n;
} // Menghasillkan pembilang n
int pecahan::getPeny(){
    return d;
} // Menghasilkan penyebut d

void pecahan::setPemb(int _n){
    n = _n;
} // Mengubah nilai n menjadi _n
void pecahan::setPeny(int _d){
    d = _d;
} // Mengubah nilai d menjadi _d

pecahan pecahan::operator+(const pecahan &P){
    pecahan pec;
    pec.n = (this->n * P.d) + (P.n*this->d);
    pec.d = this->d * P.d;
    return pec;
}
// Menambahkan pecahan dengan P
// Rumus = n1/d1 + n2/d2 = (n1*d2 + n2*d1)/d1*d2

pecahan pecahan::operator-(const pecahan &P){
    pecahan pec;
    pec.n = (this->n * P.d) - (P.n*this->d);
    pec.d = this->d * P.d;
    return pec;
}
// Menambahkan pecahan dengan P
// Rumus = n1/d1 - n2/d2 = (n1*d2 - n2*d1)/d1*d2

pecahan pecahan::operator*(int x){
    pecahan pec;
    pec.n = this->n * x;
    pec.d = this->d * x;
    return pec;
}
// Mengalikan pembilang P dengan x dan penyebut P dengan x
// Syarat: x > 0
// Rumus = n1/d1 = (n1*x)/(d1*x)

bool pecahan::operator==(const pecahan &P){
    int pem = this->n * P.d;
    int peny = this->d * P.n;
    if (pem == peny){
        return true;
    } else {
        return false;
    }
}
// Mengecek apakah kedua pecahan memiliki nilai yang sama
// Hint: bandingkan dengan gcd, tidak boleh dibandingkan dengan RealP()!

float pecahan::RealP(){
    return (float)n/(float)d;
}
// Menghasilkan bentuk desimal dari pecahan

void pecahan::Print(){
    cout << n << "/" << d;
}