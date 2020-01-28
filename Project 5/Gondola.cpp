//
// Created by Maxwell Peck on 3/22/18.
//

#include "Gondola.h"

Gondola::Gondola() {
    maxCapacity = 0;
    length = 0.0;
    name = "unknown";
    //currentlyRunning = false;
    heated = false;
}

Gondola::Gondola(int cap, double len, std::string nm, bool heat) {//bool running, bool heat) {
    maxCapacity = cap;
    length = len;
    name = nm;
    //currentlyRunning = running;
    heated = heat;
}

Gondola::~Gondola() {
    //nothing
}

bool Gondola::getHeated() const {
    return heated;
}

void Gondola::setHeated(bool heat) {
    heated = heat;
}