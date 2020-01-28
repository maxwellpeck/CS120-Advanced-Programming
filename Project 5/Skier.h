//
// Created by Maxwell Peck on 3/22/18.
//

#ifndef PROJECT_5_SKIER_H
#define PROJECT_5_SKIER_H

#include <string>
#include <iostream>

#include "SkiLift.h"

class Skier {
private:
    int age;

public:
    /**
     * Default Constructor
     * Requires: Nothing
     * Modifies: age
     * Effects: Constructs skier person that has an age of 0 if unspecified
    */
    Skier();

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: age
     * Effects: Constructs skier person that has an age of 'a'
    */
    Skier(int a);

    /**
     * Destructor
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Do Nothing
    */
    ~Skier();

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
//     * Modifies: Nothing
//     * Effects: Outputs lift riding status for Skier to console
//    */
//    void rideLift(SkiLift &lift);
};


#endif //PROJECT_5_SKIER_H
