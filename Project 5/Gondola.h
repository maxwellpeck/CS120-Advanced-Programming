//
// Created by Maxwell Peck on 3/22/18.
//

#ifndef PROJECT_5_GONDOLA_H
#define PROJECT_5_GONDOLA_H

#include <string>
#include <iostream>

#include "SkiLift.h"

class Gondola : public SkiLift {

private:
    bool heated;

public:
    /**
     * Default Constructor
     * Requires: Nothing
     * Modifies: capacity, length, name, currentlyRunning, and heated
     * Effects: Constructs SkiLift with capacity, length, name, and location all set to "0," "unknown," or "false."
    */
    Gondola();

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: capacity, length, name, location, and heated
     * Effects: Constructs SkiLift with capacity cap, currentlyRunning running, name nm, location loc, and heated heat
    */
    Gondola(int cap, double len, std::string nm, bool heat);//bool running, bool heat);

    /**
     * Destructor
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Do Nothing
    */
    ~Gondola();

    /**
     * Heated Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns heated
    */
    bool getHeated() const;

    /**
     * Heated Setter
     * Requires: Nothing
     * Modifies: heated
     * Effects: Sets heated to heat
    */
    void setHeated(bool heat);
};


#endif //PROJECT_5_GONDOLA_H
