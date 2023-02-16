#include "RekeningTabungan.h"
#include <iostream>
using namespace std;

int main(){
    RekeningTabungan r(1000, 500);
    cout << "Saldo: " << r.getSaldo() << endl;
    cout << "Biaya: " << r.getBiayaTransaksi() << endl;
    r.simpanUang(1000);
    cout << "Saldo: " << r.getSaldo() << endl;
    if(r.tarikUang(500)){
        cout<< "Tarik uang berhasil" << endl;
        cout<< "Saldo: " << r.getSaldo() << endl;
    }
}