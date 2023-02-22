#include "SpacingGuildShip.hpp"
#include <iostream>
using namespace std;

float SpacingGuildShip::totalGuildTravel = 0;
int SpacingGuildShip::producedShips = 0;

SpacingGuildShip::SpacingGuildShip() 
: maxPassengerCap(50), guildNavigatorCount(3), serialNum(producedShips+1){
    this->passengerCount = 9;
    this->spiceStock = 50;
    this->operatingGuildNavigator = 3;
    producedShips++;
}

SpacingGuildShip::SpacingGuildShip(int maxPassengerCap, int guildNavigatorCount, int spiceStock)
: maxPassengerCap(maxPassengerCap), guildNavigatorCount(guildNavigatorCount), serialNum(producedShips+1){
    this->passengerCount=0;
    this->spiceStock = spiceStock;
    this->operatingGuildNavigator = guildNavigatorCount;
    producedShips++;
}

SpacingGuildShip::SpacingGuildShip(const SpacingGuildShip& other)
: maxPassengerCap(other.maxPassengerCap), guildNavigatorCount(other.guildNavigatorCount), serialNum(producedShips+1){
    this->passengerCount=other.getPassengerCount();
    this->spiceStock = spiceStock;
    this->operatingGuildNavigator = guildNavigatorCount;
    producedShips++;
}

SpacingGuildShip::~SpacingGuildShip(){
}

int SpacingGuildShip::getShipSerialNum() const {
    return this->serialNum;
}

int SpacingGuildShip::getPassengerCount() const {
    return this->passengerCount;
}

void SpacingGuildShip::travel(float distance){
    if (this->operatingGuildNavigator > 1){
        totalGuildTravel += distance / ((E*E)*operatingGuildNavigator);
        this->operatingGuildNavigator -= 1;
    }
}

void SpacingGuildShip::boarding(int addedPassengers){
    this->passengerCount += addedPassengers;
    if (passengerCount > maxPassengerCap){
        this->passengerCount = this->maxPassengerCap;
    };
}

void SpacingGuildShip::dropOff(int droppedPassengers){
    this->passengerCount -= droppedPassengers;
    if(passengerCount < 0){
        this->passengerCount = 0;
    }
}

void SpacingGuildShip::refreshNavigator(int n){
    int maxGuild = guildNavigatorCount - operatingGuildNavigator;
    if (n > maxGuild){
        n = maxGuild;
    }
    
    int max = spiceStock/GUILD_NAVIGATOR_SPICE_DOSE;
    if (spiceStock - n*GUILD_NAVIGATOR_SPICE_DOSE < 0){
        spiceStock -= max*GUILD_NAVIGATOR_SPICE_DOSE;
        operatingGuildNavigator += max;
    } else {
        spiceStock -= n*GUILD_NAVIGATOR_SPICE_DOSE;
        operatingGuildNavigator += n;
    }
}

void SpacingGuildShip::transitToArrakis(int addedSpice){
    this->spiceStock += addedSpice;
}