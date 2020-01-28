//
// Created by Maxwell Peck on 3/22/18.
//

#ifndef PROJECT_5_SKILIFT_H
#define PROJECT_5_SKILIFT_H

#include <string>
#include <iostream>
#include <vector>

#include "LiftOperator.h"

class SkiLift {

protected:
    int maxCapacity;
    double length;
    std::string name;
    //bool currentlyRunning;
    //xLiftOperator opp; //TODO: TO GRADER: Compiler issue?  Spoke with TA and instructor and does not function as it should.

public:
    /**
     * Default Constructor
     * Requires: Nothing
     * Modifies: maxCapacity, length, name, currentlyRunning
     * Effects: Constructs SkiLift with maxCapacity, length, name, and currentlyRunning, all set to "false," "0," or "unknown."
    */
    SkiLift();

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: maxCapacity, length, name, location
     * Effects: Constructs SkiLift with maxCapacity, length, name, and currentlyRunning all set to cap, len, nm, and running.
    */
    SkiLift(int cap, double len, std::string nm);//, bool running);

    /**
     * Destructor
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Do Nothing
    */
    ~SkiLift();

    /**
     * maxCapacity Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns maxCapacity
    */
    int getMaxCapacity() const;

    /**
     * Length Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns length
    */
    double getLength() const;

    /**
     * Name Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns name
    */
    std::string getName() const;

//    /**
//     * currentlyRunning Getter
//     * Requires: Nothing
//     * Modifies: Nothing
//     * Effects: Returns currentlyRunning
//    */
//    bool getCurrentlyRunning() const;

    /**
     * maxCapacity Setter
     * Requires: Nothing
     * Modifies: maxCapacity
     * Effects: Sets maxCapacity to cap
    */
    void setMaxCapacity(int cap);

    /**
     * Length Setter
     * Requires: Nothing
     * Modifies: length
     * Effects: Sets length to len
    */
    void setLength(double len);

    /**
     * Name Setter
     * Requires: Nothing
     * Modifies: name
     * Effects: Sets name to nm
    */
    void setName(std::string nm);

//    /**
//     * CurrentlyRunning Setter
//     * Requires: Nothing
//     * Modifies: currentlyRunning
//     * Effects: Sets lcurrentlyRunning to running
//    */
//    void setCurrentlyRunning(bool running);
};

#endif //PROJECT_5_SKILIFT_H
