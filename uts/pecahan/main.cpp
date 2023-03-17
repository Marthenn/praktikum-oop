#include "Pecahan.hpp"
#include <iostream>
using namespace std;

int main(){
	pecahan p1(2,3);
	pecahan p2(4,5);
	pecahan p3 = p1+p2;
	p3.Print();
	pecahan p4 = p1*3;
	p4.Print();
}