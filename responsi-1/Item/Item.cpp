#include "Item.hpp"
#include <iostream>
using namespace std;

int Item::totalRevenue = 0;
int Item::totalItems = 0;

Item::Item() : serialNum(Item::totalItems+1){
	this-> stock = 0;
	this-> price = 0;
	this-> sold = 0;
	Item::totalItems++;
}

Item::Item(int stock, int price) : serialNum(Item::totalItems+1){
	this->stock = stock;
	this->price = price;
	this->sold = 0;
	Item::totalItems++;
}

Item::Item(const Item& i) : serialNum(Item::totalItems+1){
	this->stock = i.stock;
	this->price = i.price;
	this->sold = i.sold;
	Item::totalItems++;
}

Item::~Item(){
}

int Item::getSerialNum() const{
	return serialNum;
}

int Item::getSold() const{
	return sold;
}

int Item::getPrice() const{
	return price;
}

void Item::addStock(int addedStock){
	this->stock+=addedStock;
}

void Item::sell(int soldStock){
	if(soldStock > this->stock){
		soldStock = stock;
	}
	this->stock -= soldStock;
	this->sold += soldStock;
	Item::totalRevenue += soldStock*(this->price);
}

void Item::setPrice(int newPrice){
	this->price = newPrice;
}