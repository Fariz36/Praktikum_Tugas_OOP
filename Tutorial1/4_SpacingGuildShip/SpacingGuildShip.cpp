#include "SpacingGuildShip.hpp"
#include <bits/stdc++.h>
using namespace std;

float SpacingGuildShip::totalGuildTravel = 0;
int SpacingGuildShip::producedShips = 0;

SpacingGuildShip::SpacingGuildShip()
: maxPassengerCap(50), guildNavigatorCount(3), serialNum(producedShips + 1) {
    this->passengerCount = 0;
    this->operatingGuildNavigator = 3;

    this->spiceStock = 50;
    this->producedShips += 1;
}

SpacingGuildShip::SpacingGuildShip(int maxPassengerCap, int guildNavigatorCount, int spiceStock)
: maxPassengerCap(maxPassengerCap), guildNavigatorCount(guildNavigatorCount), serialNum(producedShips + 1) {
    this->passengerCount = 0;
    this->operatingGuildNavigator = guildNavigatorCount;

    this->spiceStock = spiceStock;
    this->producedShips += 1;
}

SpacingGuildShip::SpacingGuildShip(const SpacingGuildShip& other) :
maxPassengerCap(other.maxPassengerCap), guildNavigatorCount(other.guildNavigatorCount), serialNum(producedShips + 1) { 
    this->passengerCount = other.passengerCount;
    this->operatingGuildNavigator = other.operatingGuildNavigator;
    
    this->spiceStock = other.spiceStock;
    this->producedShips += 1;
}

SpacingGuildShip::~SpacingGuildShip() {
}

int SpacingGuildShip::getShipSerialNum() const {
    return this->serialNum;
}

int SpacingGuildShip::getPassengerCount() const {
    return this->passengerCount;
}

void SpacingGuildShip::travel(float distance) {
    if (this->operatingGuildNavigator > 0) {
        this->totalGuildTravel += distance / (E*E*this->operatingGuildNavigator);
        this->operatingGuildNavigator--;
    }
}

void SpacingGuildShip::boarding(int addedPassengers) {
    if (this->passengerCount + addedPassengers > this->maxPassengerCap) this->passengerCount = this->maxPassengerCap;
    else this->passengerCount += addedPassengers;
}

void SpacingGuildShip::dropOff(int droppedPassengers) {
    if (this->passengerCount < droppedPassengers) this->passengerCount = 0;
    else this->passengerCount -= droppedPassengers;
}

void SpacingGuildShip::refreshNavigator(int n) {
    int used = n*GUILD_NAVIGATOR_SPICE_DOSE;

    if (used < this->spiceStock) {
        this->spiceStock -= used;
        this->operatingGuildNavigator += n;
    }
    else {
        n = this->spiceStock / GUILD_NAVIGATOR_SPICE_DOSE;
        used = n*GUILD_NAVIGATOR_SPICE_DOSE;
        this->spiceStock -= used;
        this->operatingGuildNavigator += n;
    }
}

void SpacingGuildShip::transitToArrakis(int addedSpice) {
    this->spiceStock += addedSpice;
}



