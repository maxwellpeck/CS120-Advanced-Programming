//
// Created by Maxwell Peck on 2/14/18.
//

//TODO: NOTE TO GRADER: In this project, there are City objects inside a vector, which is a field variable of Country object.
//TODO: NOTE TO GRADER: City objects are created from a file called "uscities.csv" which is just a collection of the largest 1000 cities in the US.
//TODO: NOTE TO GRADER: vector<City> allCities is a vector of all 1000 possible cities for each country, and is passed to the Country class as "cts."

#ifndef PROJECT_3_COUNTRY_H
#define PROJECT_3_COUNTRY_H

#include "City.h"

using namespace std;

class Country {
private:
    int numOfCities; //Number of Cities in Country, also number of elements in cities vector.
    vector<City> cities; //Vector of City objects
    string countryName; //Name of country
public:
    /**
     * Default Constructor
     * Requires: Nothing
     * Modifies: cities, numOfCities, countryName
     * Effects: Constructs Country with 0 cities.
    */
    Country();

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: cities, numOfCities, countryName
     * Effects: Constructs Country with name name and 0 cities.
    */
    Country(string name);

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: cities, numOfCities, countryName
     * Effects: Constructs Country with name name and nmCities cities.
    */
    Country(string name, int nmCities);

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: cities, numOfCities, countryName
     * Effects: Constructs Country with name name, nmCities cities, and adds cities to vector.
    */
    Country(string name, int nmCities, const vector<City> & allCities);

    /**
     * Destructor
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Do Nothing
    */
    ~Country();

    /**
     * Name Setter
     * Requires: Nothing
     * Modifies: name
     * Effects: Sets countryName to name.
    */
    void setCountryName(string name);

    /**
     * NumOfCities Setter
     * Requires: Nothing
     * Modifies: numOfCities
     * Effects: Sets numOfCities to nmCities.
    */
    void setNumOfCities(int nmCities);

    /**
     * Cities Setter
     * Requires: Nothing
     * Modifies: cities
     * Effects: Sets cities to cts.
    */
    void setCities(const vector<City> & allCities);

    /**
     * Name Getter
     * Requires: Nothing
     * Modifies: name
     * Effects: Returns countryName.
    */
    string getCountryName() const;

    /**
     * NumOfCities Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns numOfCities
    */
    int getNumOfCities() const;

    /**
     * Cities Getter
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns cities
    */
    vector<City> getCities() const;

    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Adds City objects to vector.
    */
    void buildCity(const vector<City> & allCities);

    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: deletes City object from vector.
    */
    void demolishCity();

    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Displays cities of country (vector) in console.
    */
    void printCities() const;

    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Adds up current population of all cities in Country vector (cities).
    */
    int censusCount() const;
};

#endif //PROJECT_3_COUNTRY_H