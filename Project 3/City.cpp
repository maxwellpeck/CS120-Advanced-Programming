//
// Created by Maxwell Peck on 2/14/18.
//

//TODO: NOTE TO GRADER: In this project, there are City objects inside a vector, which is a field variable of Country object.
//TODO: NOTE TO GRADER: City objects are created from a file called "uscities.csv" which is just a collection of the largest 1000 cities in the US.
//TODO: NOTE TO GRADER: vector<City> allCities is a vector of all 1000 possible cities for each country, and is passed to the Country class as "cts."

#include "City.h"

City::City() {
    populationRank = 0;
    name = "Name";
    state = "State";
    population = 0;
    growth = 0.0;
}

City::City(int popRank) {
    populationRank = popRank;
    name = "Name";
    state = "State";
    population = 0;
    growth = 0.0;
}

City::City(int popRank, string nm) {
    populationRank = popRank;
    name = nm;
    state = "State";
    population = 0;
    growth = 0.0;
}

City::City(int popRank, string nm, string st) {
    populationRank = popRank;
    name = nm;
    state = st;
    population = 0;
    growth = 0.0;
}

City::City(int popRank, string nm, string st, int pop) {
    populationRank = popRank;
    name = nm;
    state = st;
    population = pop;
    growth = 0.0;
}

City::City(int popRank, string nm, string st, int pop, double gr) {
    populationRank = popRank;
    name = nm;
    state = st;
    population = pop;
    growth = gr;
}

City::~City() {
    //Nothing
}

void City::setPopulationRank(int popRank) {
    populationRank = popRank;
}

void City::setName(string nm) {
    name = nm;
}

void City::setState(string st) {
    state = st;
}

void City::setPopulation(int pop) {
    population = pop;
}

void City::setGrowth(double gr) {
    growth = gr;
}

int City::getPopulationRank() const {
    return populationRank;
}

string City::getName() const {
    return name;
}

string City::getState() const {
    return state;
}

int City::getPopulation() const {
    return population;
}

double City::getGrowth() const {
    return growth;
}

ostream& operator << (ostream& outs, const City& city) {
    outs << setfill('.') << setw(10) << left << city.populationRank << setw(30) << left << city.name << setw(25) << left << city.state <<
         setw(15) << left << city.population << setw(16) << right << city.growth << '%';
    return outs;
}