#include "memo.h"

Memo::Memo(){
    pesan = "";
    untuk = "";
}

Memo::Memo(string pesan, string untuk ){
    if (pesan.length() < PESAN_MAX){
        this->pesan = pesan;
        this->untuk = untuk;
    } else {
        throw PesanKepanjanganException();
    }
}

Memo& Memo::operator=(Memo& obj){
    this->pesan = obj.pesan;
    this->untuk = obj.untuk;
    return *this;
}

string Memo::getPesan(){
    return pesan;
}

string Memo::getUntuk(){
    return untuk;
}