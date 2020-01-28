//
// Created by Maxwell Peck on 2/14/18.
//

//TODO: NOTE TO GRADER: In this project, there are City objects inside a vector, which is a field variable of Country object.
//TODO: NOTE TO GRADER: City objects are created from a file called "uscities.csv" which is just a collection of the largest 1000 cities in the US.
//TODO: NOTE TO GRADER: vector<City> allCities is a vector of all 1000 possible cities for each country, and is passed to the Country class as "cts."

//COMPONENT CLASS

#ifndef PROJECT_3_CITY_H
#define PROJECT_3_CITY_H

#include <iomanip>
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

class City {
private:
    int populationRank; //Population Rank of city compared to other cities
    string name; //City Name
    string state; //State/District of City
    int population; //Current population
    double growth; //Growth as percent of population
public:
    /**
     * Default Constructor
     * Requires: Nothing
     * Modifies: populationRank, name, state, population, growth
     * Effects: Constructs City with populationRank 0, name "City," state "State," population 0, and growth 0.
    */
    City();

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: populationRank, name, state, population, growth
     * Effects: Constructs City with populationRank popRank, name "City," state "State," population 0, and growth 0.
    */
    City(int popRank);

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: populationRank, name, state, population, growth
     * Effects: Constructs City with populationRank popRank, name nm, state "State," population 0, and growth 0.
    */
    City(int popRank, string nm);

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: populationRank, name, state, population, growth
     * Effects: Constructs City with populationRank popRank, name nm, state st, population 0, and growth 0.
    */
    City(int popRank, string nm, string st);

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: populationRank, name, state, population, growth
     * Effects: Constructs City with populationRank popRank, name nm, state st, population pop, and growth 0.
    */
    City(int popRank, string nm, string st, int pop);

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: populationRank, name, state, population, growth
     * Effects: Constructs City with populationRank popRank, name nm, state st, population pop, and growth gr.
    */
    City(int popRank, string nm, string st, int pop, double gr);

    /**
     * Destructor
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Do Nothing
    */
    ~City();

    /**
     * PopulationRank Setter
     * Requires: Nothing
     * Modifies: populationRank
     * Effects: Sets populationRank to popRank
    */
    void setPopulationRank(int popRank);

    /**
     * Name Setter
     * Requires: Nothing
     * Modifies: name
     * Effects: sets name to nm
    */
    void setName(string nm);

    /**
     * State Setter
     * Requires: Nothing
     * Modifies: state
     * Effects: sets state to st
    */
    void setState(string st);

    /**
     * Population Setter
     * Requires: Nothing
     * Modifies: population
     * Effects: sets population to pop
    */
    void setPopulation(int pop);

    /**
     * Growth Setter
     * Requires: Nothing
     * Modifies: growth
     * Effects: Sets growth to gr
    */
    void setGrowth(double gr);

    /**
     * Population Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns populationRank
    */
    int getPopulationRank() const;

    /**
     * Name Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns name
    */
    string getName() const;

    /**
     * State Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns state
    */
    string getState() const;

    /**
     * Population Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns population
    */
    int getPopulation() const;

    /**
     * Growth Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns growth
    */
    double getGrowth() const;

    /**
     * Overloaded Operator (binary)
     * Friend of the class (not a member)
     * Requires: nothing
     * Modifies: nothing
     * Effects: prints the City field values
    */
    friend ostream& operator<<(ostream& outs, const City &city);
};

#endif //PROJECT_3_CITY_H