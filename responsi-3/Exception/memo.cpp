#include "memo.h"

Memo::Memo(){
    pesan = "";
    untuk = "";
}

Memo::Memo(string pesan, string untuk){
    if(pesan.length() > PESAN_MAX){
        throw PesanKepanjanganException();
    }
    this->pesan = pesan;
    this->untuk = untuk;
}

Memo& Memo::operator=(Memo& obj){
    this->pesan = obj.getPesan();
    this->untuk = obj.getUntuk();
    return *this;
}

string Memo::getPesan(){
    return pesan;
}

string Memo::getUntuk(){
    return untuk;
}