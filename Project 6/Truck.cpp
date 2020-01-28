//
// Created by Maxwell Peck on 3/28/18.
//

#include "Truck.h"

void Truck::calculateMilesPerGallon() {
    //Tank Size of 18
    milesPerGallon = milesDriven / 9;
    std::cout << milesPerGallon << std::endl;
}

Truck::Truck() {
    name = "unknown";
    hasLights = false;
    hasWindows = false;
    milesDriven = 0;
}

Truck::Truck(std::string nameIn, bool hasLightsIn, bool hasWindowsIn, int milesDrivenIn) {
    name = nameIn;
    hasLights = hasLightsIn;
    hasWindows = hasWindowsIn;
    milesDriven = milesDrivenIn;
}