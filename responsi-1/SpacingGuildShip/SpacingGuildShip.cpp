#include "SpacingGuildShip.hpp"
#include <iostream>
using namespace std;

float SpacingGuildShip::totalGuildTravel = 0;
int SpacingGuildShip::producedShips = 0;

SpacingGuildShip::SpacingGuildShip() : maxPassengerCap(50), guildNavigatorCount(3), serialNum(producedShips+1){
	this->passengerCount = 0;
	this->operatingGuildNavigator = this->guildNavigatorCount;
	this->spiceStock = 50;
	SpacingGuildShip::producedShips++;
}

SpacingGuildShip::SpacingGuildShip(int maxPassengerCap, int guildNavigatorCount, int spiceStock) : maxPassengerCap(maxPassengerCap), guildNavigatorCount(guildNavigatorCount), serialNum(producedShips+1){
	this->passengerCount=0;
	this->operatingGuildNavigator=this->guildNavigatorCount;
	this->spiceStock=spiceStock;
	SpacingGuildShip::producedShips++;
}

SpacingGuildShip::SpacingGuildShip(const SpacingGuildShip& g) : maxPassengerCap(g.maxPassengerCap), guildNavigatorCount(g.guildNavigatorCount), serialNum(producedShips+1){
	this->passengerCount=g.passengerCount;
	this->operatingGuildNavigator=g.operatingGuildNavigator;
	this->spiceStock=g.spiceStock;
	SpacingGuildShip::producedShips++;
}

SpacingGuildShip::~SpacingGuildShip(){
}

int SpacingGuildShip::getShipSerialNum() const{
	return serialNum;
}

int SpacingGuildShip::getPassengerCount() const{
	return passengerCount;
}

void SpacingGuildShip::travel(float distance){
	if(this->operatingGuildNavigator == 0) return;
	SpacingGuildShip::totalGuildTravel += distance / (E*E*this->operatingGuildNavigator);
	this->operatingGuildNavigator--;
}

void SpacingGuildShip::boarding(int addedPassengers){
	if(this->passengerCount+addedPassengers > this->maxPassengerCap){
		this->passengerCount = this->maxPassengerCap;
	} else {
		this->passengerCount += addedPassengers;
	}
}

void SpacingGuildShip::dropOff(int droppedPassengers){
	if(this->passengerCount<droppedPassengers){
		droppedPassengers = this->passengerCount;
	}
	this->passengerCount -= droppedPassengers;
}

void SpacingGuildShip::refreshNavigator(int n){
	if(n*GUILD_NAVIGATOR_SPICE_DOSE > this->spiceStock){
		n = this->spiceStock / GUILD_NAVIGATOR_SPICE_DOSE;
	}
	if(this->operatingGuildNavigator + n > this->guildNavigatorCount){
		n = this->guildNavigatorCount - this->operatingGuildNavigator;
	}
	this->operatingGuildNavigator+=n;
	this->spiceStock-=n*GUILD_NAVIGATOR_SPICE_DOSE;
}

void SpacingGuildShip::transitToArrakis(int addedSpice){
	this->spiceStock+=addedSpice;
}