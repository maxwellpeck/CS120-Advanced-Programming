//
// Created by Maxwell Peck on 2/9/18.
//

#include "City.cpp"

#include <iostream>

void test_constructors();

int main() {
    cout << "Testing" << endl;

    test_constructors();

    City testCity1(100,10);
    City testCity2(-200,-100);
    City testCity3;
    testCity3 = testCity1 + testCity2;
    cout << "testCity1: " << testCity1 << "\ntestCity2: " << testCity2 << "\ntestCity3: " << testCity3 << endl;
    testCity1.destroyCity();
    cout << "testCity1: " << testCity1 << "\ntestCity2: " << testCity2 << "\ntestCity3: " << testCity3 << endl;
    testCity1.setBuildings(1);
    testCity1.setPopulation(1);
    cout << "testCity1: " << testCity1 << "\ntestCity2: " << testCity2 << "\ntestCity3: " << testCity3 << endl;
    cout << testCity1.getPopulation() << endl;
    cout << testCity1.getBuildings() << endl;

    cout << "End Testing" << endl;
    return 0;
}

void test_constructors() {
    // Constructors
    City c;
    cout << c << endl;
    City c2(100);
    cout << c2 << endl;
    City c3(100,50);
    cout << c3 << endl;
}