//
// Created by Maxwell Peck on 3/22/18.
//

#include "Skier.h"

Skier::Skier() {
    age = 0;
}

Skier::Skier(int a) {
    age = a;
}

Skier::~Skier() {
    //nothing
}

int Skier::getAge() const {
    return age;
}

void Skier::setAge(int a) {
    age = a;
}

//void Skier::rideLift(SkiLift &lift) {
//        std::cout << "Skier has just boarded the lift '" << lift.getName() << "' and has reached the top." << std::endl;
//}