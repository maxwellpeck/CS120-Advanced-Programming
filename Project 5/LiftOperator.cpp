//
// Created by Maxwell Peck on 3/22/18.
//

#include "LiftOperator.h"

LiftOperator::LiftOperator() {
    age = 0;
}

LiftOperator::LiftOperator(int a) {
    age = a;
}

LiftOperator::~LiftOperator() {
    //nothing
}

int LiftOperator::getAge() const {
    return age;
}

void LiftOperator::setAge(int a) {
    age = a;
}

//void LiftOperator::startOrStopLift(SkiLift &lift) {
//    if (lift.getCurrentlyRunning()) {
//        lift.setCurrentlyRunning(false);
//        std::cout << "The lift '" << lift.getName() << "' has been stopped." << std::endl;
//    } else {
//        lift.setCurrentlyRunning(true);
//        std::cout << "The lift '" << lift.getName() << "' is now running." << std::endl;
//    }
//}