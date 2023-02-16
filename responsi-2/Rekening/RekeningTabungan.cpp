#include "RekeningTabungan.h"

RekeningTabungan::RekeningTabungan(double a, double b) : Rekening(a){
    if(b<0)this->biayaTransaksi=0;
    else this->biayaTransaksi=b;
}

void RekeningTabungan::setBiayaTransaksi(double x){
    this->biayaTransaksi=x;
}

double RekeningTabungan::getBiayaTransaksi() const{
    return this->biayaTransaksi;
}

void RekeningTabungan::simpanUang(double x){
    Rekening::simpanUang(x);
    setSaldo(getSaldo()-getBiayaTransaksi());
}

bool RekeningTabungan::tarikUang(double x){
    if(Rekening::tarikUang(x)){
        setSaldo(getSaldo()-getBiayaTransaksi());
        return true;
    }
    else return false;
}