//
// Created by Maxwell Peck on 3/22/18.
//

#ifndef PROJECT_5_LIFTOPERATOR_H
#define PROJECT_5_LIFTOPERATOR_H

#include <string>
#include <iostream>

#include "SkiLift.h"

class LiftOperator {

private:
    int age;

public:

    /**
     * Default Constructor
     * Requires: Nothing
     * Modifies: age
     * Effects: Constructs lift operator person that has an age of 0 if unspecified
    */
    LiftOperator();

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: age
     * Effects: Constructs lift operator person that has an age of 'a'
    */
    LiftOperator(int a);

    /**
     * Destructor
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Do Nothing
    */
    ~LiftOperator();

    /**
     * Age Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns age
    */
   int getAge() const;

    /**
     * Age Setter
     * Requires: Nothing
     * Modifies: age
     * Effects: Sets age to a
    */
    void setAge(int a);

//    /**
//     * Requires: Nothing
//     * Modifies: SkiLift.currentlyRunning
//     * Effects: Stops/Starts lift
//    */
//    void startOrStopLift(SkiLift &lift);
};


#endif //PROJECT_5_LIFTOPERATOR_H