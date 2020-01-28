//
// Created by Maxwell Peck on 3/28/18.
//

#ifndef PROJECT_6_PUNCHBUG_H
#define PROJECT_6_PUNCHBUG_H

#include <iostream>

#include "Vehicle.h"

class PunchBug : public Vehicle {

public:

    /**
     * Default Constructor
     * Requires: Nothing
     * Modifies: name, hasLights, hasWindows, milesDriven
     * Effects: Constructs PunchBug with hasLights and hasWindows false, and other variables 0
    */
    PunchBug();

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: name, hasLights, hasWindows, milesDriven
     * Effects: Constructs PunchBug with name nameIn, hasLights hasLightsIn, hasWindows hasWindowsIn, milesDriven milesDrivenIn
    */
    PunchBug(std::string nameIn, bool hasLightsIn, bool hasWindowsIn, int milesDrivenIn);

    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Calculates gas mileage
    */
    void calculateMilesPerGallon() override;

};

#endif //PROJECT_6_PUNCHBUG_H