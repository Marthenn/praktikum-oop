#include "Item.hpp"
#include <iostream>
using namespace std;

int main(){
	Item i1; Item i2; Item i3;
	cout<<i1.getSerialNum()<<endl;
	cout<<i2.getSerialNum()<<endl;
	cout<<i3.getSerialNum()<<endl;
	i1.setPrice(10);i1.addStock(10);
	i2.setPrice(20);i2.addStock(10);
	i3.setPrice(30);i3.addStock(10);
	i1.sell(1);i2.sell(1);i3.sell(1);
	cout<<Item::totalRevenue<<endl;
	return 0;
}