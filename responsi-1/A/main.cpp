#include "A.hpp"

int main(){
	A a1('1');
	A a2('2');
	A a1_copy(a1);
	a1_copy = a2;
	a2.show();
	return 0;
}