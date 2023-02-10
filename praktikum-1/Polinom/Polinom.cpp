#include "Polinom.hpp"
#include <iostream>
#include <math.h>
using namespace std;

Polinom::Polinom(){
    this-> derajat = 0;
    this-> koef = new int[1];
    this-> koef[0] = 0;
}

Polinom::Polinom(int n){
    this-> derajat = n;
    this-> koef = new int[n+1];
    for(int i = 0; i <= n; i++){
        this-> koef[i] = 0;
    }
}

Polinom::Polinom(const Polinom& p){
    this-> derajat = p.derajat;
    this-> koef = new int[p.derajat+1];
    for(int i = 0; i <= p.derajat; i++){
        this-> koef[i] = p.koef[i];
    }
}

Polinom::~Polinom(){
    delete[] this-> koef;
}

Polinom& Polinom::operator=(const Polinom& p){
    if(this != &p){
        delete[] this-> koef;
        this-> derajat = p.derajat;
        this-> koef = new int[p.derajat+1];
        for(int i = 0; i <= p.derajat; i++){
            this-> koef[i] = p.koef[i];
        }
    }
    return *this;
}

int Polinom::getKoefAt(int idx) const{
    return this-> koef[idx];
}

int Polinom::getDerajat() const{
    return this-> derajat;
}

void Polinom::setKoefAt(int idx, int val){
    this-> koef[idx] = val;
}

void Polinom::setDerajat(int n){
    this-> derajat = n;
}

void Polinom::input(){
    for(int i = 0; i <= this-> derajat; i++){
        cin >> this-> koef[i];
    }
}

void Polinom::printKoef(){
    for(int i = 0; i <= this-> derajat; i++){
        cout << this-> koef[i] << endl;
    }
}

int Polinom::substitute(int x){
    int hasil = 0;
    for(int i = 0; i <= this-> derajat; i++){
        hasil += this-> koef[i] * pow(x, i);
    }
    return hasil;
}

void Polinom::print(){
    cout<<this-> koef[0];
    for(int i = 1 ; i <= this-> derajat ; i++){
        if(this-> koef[i]>0){
            cout<<"+";
        }
        cout<<this-> koef[i]<<"x^"<<i;
    }
    cout<<endl;
}