//
// Created by Maxwell Peck on 2/8/18.
//

#include "City.h"

City::City() {
    population = 0;
    buildings = 0;
}

City::City(int pop) {
    population = pop;
    buildings = 0;
}

City::City(int pop, int build) {
    population = pop;
    buildings = build;
}

City::~City() {
    //Emptiness like a black hole
}

void City::setPopulation(int pop) {
        population = pop;
}

void City::setBuildings(int build) {
        buildings = build;
}

int City::getPopulation() const {
    return population;
}

int City::getBuildings() const {
    return buildings;
}

void City::destroyCity() {
    population = population - (population / 2);
    buildings = buildings - (buildings / 2);
}

City& City::operator+(const City &city2) {
    City city3;
    city3.population = population + city2.population;
    city3.buildings = buildings + city2.buildings;
    return city3;
}

ostream& operator << (ostream& outs, const City& city) {
    outs << "Population: " << city.getPopulation() << " Number of Buildings: " << city.getBuildings();
    return outs;
}