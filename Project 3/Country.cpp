//
// Created by Maxwell Peck on 2/14/18.
//

//TODO: NOTE TO GRADER: In this project, there are City objects inside a vector, which is a field variable of Country object.
//TODO: NOTE TO GRADER: City objects are created from a file called "uscities.csv" which is just a collection of the largest 1000 cities in the US.
//TODO: NOTE TO GRADER: vector<City> allCities is a vector of all 1000 possible cities for each country, and is passed to the Country class as "cts."

#include "Country.h"

Country::Country() {
    numOfCities = 0;
    cities.resize(numOfCities);
}

Country::Country(string name) {
    numOfCities = 0;
    cities.resize(0);
    countryName = name;
}

Country::Country(string name, int nmCities) {
    numOfCities = nmCities;
    cities.resize(numOfCities);
    countryName = name;
}

Country::Country(string name, int nmCities, const vector<City> & allCities) {
    numOfCities = nmCities;
    cities = allCities;
    cities.resize(numOfCities);
    countryName = name;
}

Country::~Country() {
    //Nothing
}

void Country::setCountryName(string name) {
    countryName = name;
}

void Country::setNumOfCities(int nmCities) {
    numOfCities = nmCities;
    cities.resize(numOfCities);
}

void Country::setCities(const vector<City> & allCities) {
    numOfCities = allCities.size();
    cities = allCities;
}

string Country::getCountryName() const {
    return countryName;
}

int Country::getNumOfCities() const {
    return numOfCities;
}

vector<City> Country::getCities() const {
    return cities;
}

void Country::buildCity(const vector<City> & allCities) {
    if (!(numOfCities >= allCities.size())) {
        numOfCities += 1;
        cities.push_back(allCities[numOfCities - 1]);
        cout << "New city has been built.  Your country " << countryName << " now has " << numOfCities << " citie(s)." << endl;
    } else {
        cout << "You already have the maximum amount of cities in your country!" << endl;
    }
}

void Country::demolishCity() {
    if (!(numOfCities <= 0)) {
        numOfCities -= 1;
        cities.pop_back();
        cout << "City has been demolished.  Your country " << countryName << " now has " << numOfCities << " citie(s)." << endl;
    } else {
        cout << "Your country has no cities to demolish!" << endl;
    }
}

void Country::printCities() const {
    cout << "Here are all of the cities in your country of " << countryName << ": " << endl;
    if (numOfCities > 0) {
        cout << setfill(' ') << left << setw(10) << "RANK" << setw(30) << "CITY" << setw(25) << "DISTRICT" << setw(15) << "POPULATION" << right << setw(16) << right << "Projected Growth%" << endl;
        for (int i = 0; i < numOfCities; ++i) {
            cout << (cities)[i] << endl;
        }
    } else {
        cout << "You have no cities in your country." << endl;
    }
}

int Country::censusCount() const {
    int totalPopulation = 0;
    for (int i = 0; i < cities.size(); ++i) {
        //This is where a method of "the component class" is called.  (cities[i] will reference a City object in the cities vector)
        totalPopulation += cities[i].getPopulation();
    }
    return totalPopulation;
}