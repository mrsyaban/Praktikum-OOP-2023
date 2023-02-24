#include "Polinom.hpp"
#include <iostream>
#include <cmath>
using namespace std;

Polinom::Polinom(){
    derajat = 0;
    koef = new int[1];
    koef[0]=0;
}

Polinom::Polinom(int n){
    derajat = n;
    koef = new int[n+1];
    for (int i=0; i<n+1; i++){
        koef[i]=0;
    }
}

Polinom::Polinom(const Polinom& other){
    derajat = other.derajat;
    koef = new int[derajat+1];
    for (int i=0; i<derajat+1; i++){
        koef[i] = other.koef[i];
    }
}

Polinom::~Polinom(){
    delete[] koef;
}

Polinom& Polinom::operator=(const Polinom& other){
    derajat = other.derajat;
    koef = new int[derajat+1];
    for (int i=0; i<derajat+1; i++){
        koef[i] = other.koef[i];
    }
    return *this;
}

int Polinom::getKoefAt(int idx) const{
    return koef[idx];
}

int Polinom::getDerajat() const{
    return derajat;
}

void Polinom::setKoefAt(int idx, int val){
    koef[idx] = val;
}

void Polinom::setDerajat(int der){
    derajat = der;
}

void Polinom::input(){
    for(int i=0; i<derajat+1; i++){
        cin >> koef[i];
    }
}

void Polinom::printKoef(){
    for(int i=0; i<derajat+1; i++){
        cout << koef[i] << endl;
    }
}

int Polinom::substitute(int x){
    int res=0;
    for (int i=0; i<derajat+1; i++){
        res += getKoefAt(i)*int(pow(x,i));
    }
    return res;
}

void Polinom::print(){
    bool valid = false;
    for (int i=0; i<derajat+1; i++){
        if (koef[i] != 0){
            valid = true;
            if (i==0){
                cout << koef[i];
            }else if (i>0){
                if (koef[i]>0){
                    cout << '+';
                }
                cout << koef[i] << "x^" << i;
            }
        }
    }

    if (!valid){
        cout << "0" << endl;
    } else {
        cout << endl;
    }
}