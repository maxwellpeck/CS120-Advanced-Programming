//
// Created by Maxwell Peck on 3/28/18.
//

#include "PunchBug.h"

void PunchBug::calculateMilesPerGallon() {
    //Tank Size of 13
    milesPerGallon = milesDriven / 7;
    std::cout << milesPerGallon << std::endl;
}

PunchBug::PunchBug() {
    name = "unknown";
    hasLights = false;
    hasWindows = false;
    milesDriven = 0;
}

PunchBug::PunchBug(std::string nameIn, bool hasLightsIn, bool hasWindowsIn, int milesDrivenIn) {
    name = nameIn;
    hasLights = hasLightsIn;
    hasWindows = hasWindowsIn;
    milesDriven = milesDrivenIn;
}