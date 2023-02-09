#include "Paper.hpp"
using namespace std;

int main(){
	Paper p1('A');
	Paper p2('B');
	Paper p3('C');
	Paper p4(p3);
	p1.fold();
	p2.fold();
	p3.fold();
	p3.glue();
	p3.setName('X');
	p4.fold();
	p4.glue();
	return 0;
}