#include "NegativeExpression.hpp"
#include <iostream>
using namespace std;

int main(){
    Expression* x = new TerminalExpression(5);
    Expression* y = new TerminalExpression(3);
    Expression* z = new NegativeExpression(x);
    cout<< z->solve();
    return 0;
}