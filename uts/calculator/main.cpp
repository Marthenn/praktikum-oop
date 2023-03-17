#include "Calculator.hpp"
#include <iostream>
using namespace std;

int main(){
	Calculator c;
	string s = "(7*7)-(2*0)";
	cout<<c.Evaluate(s)<<endl;
	return 0;
}