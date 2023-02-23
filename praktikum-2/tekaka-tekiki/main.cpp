#include "A.hpp"
#include "B.hpp"

int main(){
	B b;
	A* a = &b;
	a->setValue(888);
	b.setValue(10888);
	b.print(); //888, 10888
	return 0;
}