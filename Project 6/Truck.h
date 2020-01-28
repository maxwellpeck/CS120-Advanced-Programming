//
// Created by Maxwell Peck on 3/28/18.
//

#ifndef PROJECT_6_TRUCK_H
#define PROJECT_6_TRUCK_H

#include <iostream>

#include "Vehicle.h"

class Truck : public Vehicle {

public:

    /**
     * Default Constructor
     * Requires: Nothing
     * Modifies: name, hasLights, hasWindows, milesDriven
     * Effects: Constructs Truck with hasLights and hasWindows false, and other variables 0
    */
    Truck();

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: name, hasLights, hasWindows, milesDriven
     * Effects: Constructs Truck with name nameIn,  hasLights hasLightsIn, hasWindows hasWindowsIn, milesDriven milesDrivenIn
    */
    Truck(std::string nameIn, bool hasLightsIn, bool hasWindowsIn, int milesDrivenIn);

    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Calculates gas mileage
    */
    void calculateMilesPerGallon() override;

};

#endif //PROJECT_6_TRUCK_H