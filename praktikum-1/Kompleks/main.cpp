#include "Kompleks.h"
#include <iostream>
using namespace std;

int main(){
	Kompleks k1;
	Kompleks k2(1,2);
	Kompleks k3(3,4);
	k1.Print();
	k2.Print();
	k3.Print();
	cout<<k1.CountKompleksInstance()<<endl;
	k1 = k2+k3;k1.Print();cout<<k1.CountKompleksInstance()<<endl;
	k1 = k3-k2;k1.Print();cout<<k1.CountKompleksInstance()<<endl;
	k1 = k1*2;k1.Print();cout<<k1.CountKompleksInstance()<<endl;
	k1 = 2*k1;k1.Print();cout<<k1.CountKompleksInstance()<<endl;
	return 0;
}