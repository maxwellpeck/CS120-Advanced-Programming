//
// Created by Maxwell Peck on 3/22/18.
//

#include "SkiLift.h"

SkiLift::SkiLift() {
    maxCapacity = 0;
    length = 0.0;
    name = "unknown";
    //currentlyRunning = false;
}

SkiLift::SkiLift(int cap, double len, std::string nm) {//, bool running) {
    maxCapacity = cap;
    length = len;
    name = nm;
    //LiftOperator opp(21);
    //currentlyRunning = running;
}

SkiLift::~SkiLift() {
    //nothing
}

int SkiLift::getMaxCapacity() const {
    return maxCapacity;
}

double SkiLift::getLength() const {
    return length;
}

std::string SkiLift::getName() const {
    return name;
}

//bool SkiLift::getCurrentlyRunning() const {
//    return currentlyRunning;
//}

void SkiLift::setMaxCapacity(int cap) {
    maxCapacity = cap;
}

void SkiLift::setLength(double len) {
    length = len;
}

void SkiLift::setName(std::string nm) {
    name = nm;
}

//void SkiLift::setCurrentlyRunning(bool running) {
//    currentlyRunning = running;
//}