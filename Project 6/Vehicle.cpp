//
// Created by Maxwell Peck on 3/27/18.
//

#include "Vehicle.h"

Vehicle::Vehicle() {
    name = "unknown";
    hasLights = false;
    hasWindows = false;
    milesDriven = 0;
//    tankSize = 0;
}

Vehicle::Vehicle(std::string nameIn, bool hasLightsIn, bool hasWindowsIn, int milesDrivenIn) {//, int tankSizeIn) {
    name = nameIn;
    hasLights = hasLightsIn;
    hasWindows = hasWindowsIn;
    milesDriven = milesDrivenIn;
//    tankSize = tankSizeIn;
}

Vehicle::~Vehicle() {
    //nothing
}

std::string Vehicle::getName() const {
    return name;
}

bool Vehicle::getHasLights() const {
    return hasLights;
}

bool Vehicle::getHasWindows() const {
    return hasWindows;
}

int Vehicle::getMilesDriven() const {
    return milesDriven;
}

//int Vehicle::getTankSize() const {
//    return tankSize;
//}

int Vehicle::getMilesPerGallon() const {
    return milesPerGallon;
}

void Vehicle::setName(std::string nameIn) {
    name = nameIn;
}

void Vehicle::setHasLights(bool hasLightsIn) {
    hasLights = hasLightsIn;
}

void Vehicle::setHasWindows(bool hasWindowsIn) {
    hasWindows = hasWindowsIn;
}

void Vehicle::setMilesDriven(int milesDrivenIn) {
    milesDriven = milesDrivenIn;
}

//void Vehicle::setTankSize(int tankSizeIn) {
//    tankSize = tankSizeIn;
//}
//
//void Vehicle::calculateMilesPerGallon() {
//    milesPerGallon = milesDriven / tankSize;
//}