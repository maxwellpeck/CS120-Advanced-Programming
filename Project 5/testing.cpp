//
// Created by Maxwell Peck on 3/23/18.
//

using namespace std;

#include "SkiLift.h"
#include "ChairLift.h"
#include "Gondola.h"
#include "LiftOperator.h"
#include "Skier.h"

int main() {
    cout << "\n=================================================================================================\n" << endl;

    bool passed = true;
    cout << "TESTING:" << endl;

    //Create objects with constructors to test constructors and also to test all cases with objects.
    SkiLift skiLiftDefault;
    ChairLift chairLiftDefault;
    Gondola gondolaDefault;
    LiftOperator liftOperatorDefault;
    Skier skierDefault;

    SkiLift skiLift(6, 1000, "skiLift");
    ChairLift chairLift(6, 1000, "chairLift", true, true);
    Gondola gondola(6, 1000, "gondola", true);
    LiftOperator liftOperator(21);
    Skier skier(21);

    //Test SkiLift
    if (skiLift.getMaxCapacity() != 6) {
        passed = false;
        cout << "Failed skiLift.getMaxCapacity != 6" << endl;
    }
    if (skiLift.getLength() != 1000) {
        passed = false;
        cout << "Failed skiLift.getLength() != 1000" << endl;
    }
    if (skiLift.getName() != "skiLift") {
        passed = false;
        cout << "Failed skiLift.getName() != \"skiLift\"" << endl;
    }

    //Teet chairLift
    if (chairLift.getMaxCapacity() != 6) {
        passed = false;
        cout << "Failed chairLift.getMaxCapacity() != 6" << endl;
    }
    if (chairLift.getLength() != 1000) {
        passed = false;
        cout << "Failed chairLift.getLength() != 1000" << endl;
    }
    if (chairLift.getName() != "chairLift") {
        passed = false;
        cout << "Failed chairLift.getName() != \"chairLift\"" << endl;
    }
    if (chairLift.getBubbleCover() != true) {
        passed = false;
        cout << "Failed chairLift.getBubbleCover() != true" << endl;
    }
    if (chairLift.getDetachable() != true){
        passed = false;
        cout << "Failed chairLift.getDetachable() != true" << endl;
    }

    //Test Gondola
    if (gondola.getMaxCapacity() != 6) {
        passed = false;
        cout << "Failed gondola.getMaxCapacity() != 6" << endl;
    }
    if (gondola.getLength() != 1000) {
        passed = false;
        cout << "Failed gondola.getLength() != 1000" << endl;
    }
    if (gondola.getName() != "gondola") {
        passed = false;
        cout << "Failed gondola.getName() != \"gondola\"" << endl;
    }
    if (gondola.getHeated() != true) {
        passed = false;
        cout << "Failed gondola.getHeated() != true" << endl;
    }

    //Test liftOperator
    if (liftOperator.getAge() != 21) {
        passed = false;
        cout << "Failed liftOperator.getAge() != 21" << endl;
    }

    //Test Skjer
    if (skier.getAge() != 21) {
        passed = false;
        cout << "Failed skier.getAge() != 21" << endl;
    }

    //Test Setters
    skiLift.setMaxCapacity(4);
    skiLift.setLength(2000);
    skiLift.setName("testName");

    chairLift.setMaxCapacity(4);
    chairLift.setLength(2000);
    chairLift.setName("testName");
    chairLift.setBubbleCover(false);
    chairLift.setDetachable(false);

    gondola.setMaxCapacity(4);
    gondola.setLength(2000);
    gondola.setName("testName");
    gondola.setHeated(false);

    liftOperator.setAge(10);
    skier.setAge(10);

    //Test SkiLift for a 2nd time
    if (skiLift.getMaxCapacity() != 4) {
        passed = false;
        cout << "Failed skiLift.getMaxCapacity != 4 (2nd test)" << endl;
    }
    if (skiLift.getLength() != 2000) {
        passed = false;
        cout << "Failed skiLift.getLength() != 2000 (2nd test)" << endl;
    }
    if (skiLift.getName() != "testName") {
        passed = false;
        cout << "Failed skiLift.getName() != \"testName\" (2nd test)" << endl;
    }

    //Test ChairLift for a 2nd time
    if (chairLift.getMaxCapacity() != 4) {
        passed = false;
        cout << "Failed chairLift.getMaxCapacity() != 4 (2nd test)" << endl;
    }
    if (chairLift.getLength() != 2000) {
        passed = false;
        cout << "Failed chairLift.getLength() != 2000 (2nd test)" << endl;
    }
    if (chairLift.getName() != "testName") {
        passed = false;
        cout << "Failed chairLift.getName() != \"testName\" (2nd test)" << endl;
    }
    if (chairLift.getBubbleCover() != false) {
        passed = false;
        cout << "Failed chairLift.getBubbleCover() != false (2nd test)" << endl;
    }
    if (chairLift.getDetachable() != false){
        passed = false;
        cout << "Failed chairLift.getDetachable() != false (2nd test)" << endl;
    }

    //Test gondola for a 2nd time
    if (gondola.getMaxCapacity() != 4) {
        passed = false;
        cout << "Failed gondola.getMaxCapacity() != 6 (2nd test)" << endl;
    }
    if (gondola.getLength() != 2000) {
        passed = false;
        cout << "Failed gondola.getLength() != 2000 (2nd test)" << endl;
    }
    if (gondola.getName() != "testName") {
        passed = false;
        cout << "Failed gondola.getName() != \"testName\" (2nd test)" << endl;
    }
    if (gondola.getHeated() != false) {
        passed = false;
        cout << "Failed gondola.getHeated() != false (2nd test)" << endl;
    }

    //Test LiftOperator for a 2nd time
    if (liftOperator.getAge() != 10) {
        passed = false;
        cout << "Failed liftOperator.getAge() != 10 (2nd test)" << endl;
    }

    //Test Skier for a 2nd time
    if (skier.getAge() != 10) {
        passed = false;
        cout << "Failed skier.getAge() != 10 (2nd test)" << endl;
    }

    cout << "\n=================================================================================================\n" << endl;

    if (passed) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}