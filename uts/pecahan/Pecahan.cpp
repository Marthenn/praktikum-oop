#include "Pecahan.hpp"
#include <iostream>
using namespace std;

pecahan::pecahan() {
	n = 0;
	d = 1;
}

pecahan::pecahan(int _n, int _d) {
	n = _n;
	d = _d;
}

pecahan::pecahan(const pecahan &P) {
	n = P.n;
	d = P.d;
}

pecahan::~pecahan() {
}

int pecahan::getPemb() {
	return n;
}

int pecahan::getPeny() {
	return d;
}

void pecahan::setPemb(int _n) {
	n = _n;
}

void pecahan::setPeny(int _d) {
	d = _d;
}

pecahan pecahan::operator+(const pecahan &P) {
	pecahan temp;
	temp.n = n * P.d + P.n * d;
	temp.d = d * P.d;
	return temp;
}

pecahan pecahan::operator-(const pecahan &P) {
	pecahan temp;
	temp.n = n * P.d - P.n * d;
	temp.d = d * P.d;
	return temp;
}

pecahan pecahan::operator*(int x) {
	pecahan temp;
	temp.n = n * x;
	temp.d = d * x;
	return temp;
}

bool pecahan::operator==(const pecahan &P) {
	if (n * P.d == P.n * d) {
		return true;
	} else {
		return false;
	}
}

float pecahan::RealP() {
	return (float) n / d;
}

void pecahan::Print() {
	cout << n << "/" << d;
}