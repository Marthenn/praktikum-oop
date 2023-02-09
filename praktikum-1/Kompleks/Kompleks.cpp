#include "Kompleks.h"
#include <iostream>
using namespace std;

int Kompleks::n_kompleks = 0;

Kompleks::Kompleks(){
	this->real = 0;
	this->imaginer = 0;
	n_kompleks++;
}

Kompleks::Kompleks(int real, int imaginer){
	this->real = real;
	this->imaginer = imaginer;
	n_kompleks++;
}

int Kompleks::GetReal() const{
	return this->real;
}

int Kompleks::GetImaginer() const{
	return this->imaginer;
}

void Kompleks::SetReal(int x){
	this->real = x;
}

void Kompleks::SetImaginer(int x){
	this->imaginer = x;
}

void Kompleks::Print(){
	cout<<this->real;
	if(this->imaginer>=0)cout<<"+";
	cout<<this->imaginer<<"i\n";
}

Kompleks operator+ (const Kompleks& k1, const Kompleks& k2){
	return Kompleks(k1.GetReal()+k2.GetReal(),k1.GetImaginer()+k2.GetImaginer());
}

Kompleks operator- (const Kompleks& k1, const Kompleks& k2){
	return Kompleks(k1.GetReal()-k2.GetReal(),k1.GetImaginer()-k2.GetImaginer());
}

Kompleks operator*(const Kompleks& k1, const Kompleks&k2){
	return Kompleks(k1.GetReal()*k2.GetReal()-k1.GetImaginer()*k2.GetImaginer(),k1.GetImaginer()*k2.GetReal()+k1.GetReal()*k2.GetImaginer());
}

Kompleks operator*(const Kompleks& k1, const int x){
	return Kompleks(k1.GetReal()*x,k1.GetImaginer()*x);
}

Kompleks operator*(const int x, const Kompleks& k1){
	return operator*(k1,x);
}

int Kompleks::CountKompleksInstance(){
	return n_kompleks;
}