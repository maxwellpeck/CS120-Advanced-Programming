//
// Created by Maxwell Peck on 3/30/18.
//

#include <iostream>

#include "Vehicle.h"
#include "PunchBug.h"
#include "Truck.h"

using namespace std;

int main() {

    cout << "\n==={TESTING}=====================================================================================\n" << endl;

    bool passed = true;

    //Create objects with default constructors to test constructors and also to test all cases with objects.
    PunchBug punchBugDefault();
    Truck truckDefault();

    //Create objects with non-default constructors to test constructors and also to test all cases with objects.
    PunchBug punchBug("PunchBug", true, true, 200);
    Truck truck("Truck", true, true, 200);

    //Test PunchBug Setters
    punchBug.setName("PunchBugTest");
    punchBug.setHasLights(false);
    punchBug.setHasWindows(false);
    punchBug.setMilesDriven(200);

    //Test PunchBug method that is being overridden
    cout << "Testing punchBug.calculateMilesPerGallon(): ";
    punchBug.calculateMilesPerGallon();

    //Test PunchBug Getters
    if (punchBug.getName() != "PunchBugTest") {
        passed = false;
        cout << "Failed: punchBug.getName() != \"PunchBug\"" << endl;
    }
    if (punchBug.getHasLights()) {
        passed = false;
        cout << "Failed: punchBug.getHasLights()" << endl;
    }
    if (punchBug.getHasWindows()) {
        passed = false;
        cout << "Failed: punchBug.getHasWindows()" << endl;
    }
    if (punchBug.getMilesDriven() != 200) {
        passed = false;
        cout << "Failed: punchBug.getMilesDriven() != 200" << endl;
    }
    if (punchBug.getMilesPerGallon() != 28) {
        passed = false;
        cout << "Failed: punchBug.getMilesPerGallon() != 28" << endl;
    }

    //Test truck Setters
    truck.setName("truckTest");
    truck.setHasLights(false);
    truck.setHasWindows(false);
    truck.setMilesDriven(200);

    //Test truck method that is being overridden
    cout << "Testing truck.calculateMilesPerGallon(): ";
    truck.calculateMilesPerGallon();

    //Test truck Getters
    if (truck.getName() != "truckTest") {
        passed = false;
        cout << "Failed: truck.getName() != \"truck\"" << endl;
    }
    if (truck.getHasLights()) {
        passed = false;
        cout << "Failed: truck.getHasLights()" << endl;
    }
    if (truck.getHasWindows()) {
        passed = false;
        cout << "Failed: truck.getHasWindows()" << endl;
    }
    if (truck.getMilesDriven() != 200) {
        passed = false;
        cout << "Failed: truck.getMilesDriven() != 200" << endl;
    }
    if (truck.getMilesPerGallon() != 22) {
        passed = false;
        cout << "Failed: truck.getMilesPerGallon() != 28" << endl;
    }

    //Conclude Testing
    cout << "\n==={TESTING RESULTS}=============================================================================\n" << endl;
    if (passed) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}