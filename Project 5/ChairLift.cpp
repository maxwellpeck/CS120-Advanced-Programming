//
// Created by Maxwell Peck on 3/22/18.
//

#include "ChairLift.h"

ChairLift::ChairLift() {
    maxCapacity = 0;
    length = 0.0;
    name = "unknown";
    //currentlyRunning = false;
    bubbleCover = false;
    detachable = false;
}

ChairLift::ChairLift(int cap, double len, std::string nm, bool bub, bool det) {//bool running, bool bub, bool det) {
    maxCapacity = cap;
    length = len;
    name = nm;
    //currentlyRunning = running;
    bubbleCover = bub;
    detachable = det;
}

ChairLift::~ChairLift() {
    //nothing
}

bool ChairLift::getBubbleCover() const {
    return bubbleCover;
}

bool ChairLift::getDetachable() const {
    return detachable;
}

void ChairLift::setBubbleCover(bool bub) {
    bubbleCover = bub;
}

void ChairLift::setDetachable(bool det) {
    detachable = det;
}