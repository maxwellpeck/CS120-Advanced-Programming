//
// Created by Maxwell Peck on 3/22/18.
//

#ifndef PROJECT_5_CHAIRLIFT_H
#define PROJECT_5_CHAIRLIFT_H

#include <string>
#include <iostream>

#include "SkiLift.h"

class ChairLift : public SkiLift {

private:
    bool bubbleCover;
    bool detachable;

public:
    /**
     * Default Constructor
     * Requires: Nothing
     * Modifies: capacity, length, name, currentlyRunning, bubbleCover, and detachable
     * Effects: Constructs SkiLift with capacity, length, name, and location all set to "0," "unknown," or "false."
    */
    ChairLift();

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: capacity, length, name, location, bubbleCover, and detachable
     * Effects: Constructs SkiLift with capacity cap, currentlyRunning running, name nm, location loc, bubbleCover bub, and detachable det.
    */
    ChairLift(int cap, double len, std::string nm, bool bub, bool det);//bool running, bool bub, bool det);

    /**
     * Destructor
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Do Nothing
    */
    ~ChairLift();

    /**
     * bubbleCover Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns bubbleCover
    */
    bool getBubbleCover() const;

    /**
     * detachable Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns detachable
    */
    bool getDetachable() const;

    /**
     * BubbleCover Setter
     * Requires: Nothing
     * Modifies: bubbleCover
     * Effects: Sets bubbleCover to bub
    */
    void setBubbleCover(bool bub);

    /**
     * Detachable Setter
     * Requires: Nothing
     * Modifies: detachable
     * Effects: Sets detachable to det
    */
    void setDetachable(bool det);

};


#endif //PROJECT_5_CHAIRLIFT_H
