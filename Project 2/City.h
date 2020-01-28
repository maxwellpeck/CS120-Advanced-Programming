//
// Created by Maxwell Peck on 2/8/18.
//

#ifndef PROJECT_2_CITY_H
#define PROJECT_2_CITY_H

#include <iostream>
using namespace std;

class City {
private:
    int population;
    int buildings;
public:
    /**
     * Default Constructor
     * Requires: Nothing
     * Modifies: population and buildings
     * Effects: Constructs City with population 0 and buildings 0
    */
    City();

    /**
     * Non-Defaukt Contsructor
     * Requires: Nothing
     * Modifies: population and buuldings
     * Effects: Constructs City with population pop and buildings 0
    */
    City(int pop);

    /**
     *
     * Requires: Nothing
     * Modifies:
     * Effects: Constructs City with population pop and buildings build
    */
    City(int pop, int build);

    /**
     * Destructor
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Do Nothing
    */
    ~City();

    /**
     * Population Setter
     * Requires: Nothing
     * Modifies: population
     * Effects: Sets population to pop
    */
    void setPopulation(int pop);

    /**
     * Buildings setter
     * Requires: Nothing
     * Modifies: buildings
     * Effects: sets buildings to build
    */
    void setBuildings(int build);

    /**
     * Population Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns population
    */
    int getPopulation() const;

    /**
     * Buildings Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns buildings
    */
    int getBuildings() const;

    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Cuts the City population and buildings variables in half
    */
    void destroyCity();

    /**
     * Overloaded Operator (binary)
     * Friend of the class (not a member)
     * Requires: nothing
     * Modifies: nothing
     * Effects: prints the Fraction to the ostream
    */
    City& operator+(const City&);

    /**
     * Overloaded Operator (binary)
     * Friend of the class (not a member)
     * Requires: nothing
     * Modifies: nothing
     * Effects: prints the City field population anc buildings variables to the ostream
    */
    friend ostream& operator<<(ostream& outs, const City &city);
};
#endif //PROJECT_2_CITY_H