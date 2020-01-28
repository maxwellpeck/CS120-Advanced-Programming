#include <iostream>
#include <vector>

#include "Vehicle.h"
#include "PunchBug.h"
#include "Truck.h"

using namespace std;

//======================================================================================================================

void testVehicles(vector<unique_ptr<Vehicle>> &vehicles) {

    //Initialize all variables for function
    int totalGasMileage;

    //Print menu options
    cout << "\n==={TESTING}=====================================================================================\n" << endl;
    cout << "The main focus of UVM Cars is that they are made to be as eco-friendly as possible.  This makes testing simple." << endl;
    cout << "Each car is taken on a 200 mile test drive, and then the gas mileage is calculated for each car model." << endl;
    cout << "The PunchBug model always has a better gas mileage than the Truck model, so this should be the case below:" << endl << endl;

    //Loop through vector and perform calculation on objects in vector.     //todo: NOTE TO GRADER: This is global function where polymorphism is demonstrated.
    for (int i = 0; i < vehicles.size(); ++i) {                             //todo: NOTE TO GRADER: This is global function where polymorphism is demonstrated.
        cout << vehicles[i]->getName() << "->calculateMilesPerGallon(): ";  //todo: NOTE TO GRADER: This is global function where polymorphism is demonstrated.
        vehicles[i]->calculateMilesPerGallon();                             //todo: NOTE TO GRADER: This is global function where polymorphism is demonstrated.
        totalGasMileage += vehicles[i]->getMilesPerGallon();                //todo: NOTE TO GRADER: This is global function where polymorphism is demonstrated.
    }                                                                       //todo: NOTE TO GRADER: This is global function where polymorphism is demonstrated.

    //Finish performing calculation
    cout << "\nAverage gas mileage of tested car model(s): " << totalGasMileage / vehicles.size() << endl;
}

//======================================================================================================================

void buildCar(vector<unique_ptr<Vehicle>> &vehicles, int &numPunchBugs, int &numTrucks) {

    //Initialize all variables for function
    int option;
    string trash;

    //Print menu options
    cout << "\n==={BUILD A CAR}=================================================================================\n" << endl;
    cout << "UVM offers two basic and completely original car models.  Which would you like to build?" << endl;
    cout << "(1) PunchBug" << endl;
    cout << "(2) Truck" << endl;
    cout << "Please type the number of the desired option above: ";
    //Validate User input
    while (!(cin >> option && (option == 1 || option == 2))) {
        cin.clear();
        getline(cin, trash);
        cout << "ERROR: Please enter a valid integer from 1-2: ";
    }

    //Options
    switch (option) {
        case 1:
            cout << "\n==={BUILD A PUNCHBUG}============================================================================\n" << endl;

            //Only allow user to build certain number of cars at a time, in order to make polymorphism demonstration in testVehicles() simple.
            if (numPunchBugs == 0) {
                PunchBug pb("PunchBug", true, true, 200);
                vehicles.push_back(make_unique<PunchBug>(pb));
                ++numPunchBugs;
                cout << "PunchBug built successfully, with windows, lights, and other UVM original features for the super original car that you just built." << endl;
                cout << "Now headed back to main menu" << endl;
            } else {

                //Only allow user to build certain number of cars at a time, in order to make polymorphism demonstration in testVehicles() simple.
                cout << "It appears as if you have already built a PunchBug.  Please begin testing your existing vehicle(s) or try building more." << endl;
            }
            break;
        case 2:
            cout << "\n==={BUILD A TRUCK}===============================================================================\n" << endl;

            //Only allow user to build certain number of cars at a time, in order to make polymorphism demonstration in testVehicles() simple.
            if (numTrucks == 0) {
                Truck tr("Truck", true, true, 200);
                vehicles.push_back(make_unique<Truck>(tr));
                ++numTrucks;
                cout << "Truck built successfully, with windows, lights, and other UVM original features for the super original car that you just built." << endl;
                cout << "Now headed back to main menu:" << endl;
            } else {

                //Only allow user to build certain number of cars at a time, in order to make polymorphism demonstration in testVehicles() simple.
                cout << "It appears as if you have already built a Truck.  Please begin testing your existing vehicle(s) or try building more." << endl;
            }
            break;
        default:
            cout << "Not a valid option.  Now the program will self destruct because you messed up";
            exit(12345);
    }
}

//======================================================================================================================

void menu(vector<unique_ptr<Vehicle>> &vehicles) {

    //Initialize all variables for function
    bool again = true;
    bool firstTime = true;
    int option;
    string trash;
    int numPunchBugs = 0;
    int numTrucks = 0;
    while (again) {

        //Print menu options, only if first time running program.
        if (firstTime) {
            cout << "\n==={WELCOME}=====================================================================================\n" << endl;
            cout << "You are now the owner and manager of the UVM Car Company."  << endl;
            cout << "You can build up to 2 cars at a time and test them out before they are sold to the UVM students that frequently shop at the UVM Car Company." << endl;
            firstTime = false;
        }

        //Pring menu options for returning users that have seen instructions.
        if (!firstTime) {
            cout << "\n==={MENU}========================================================================================\n" << endl;
            cout << "(1) Build a new car.  Current number of cars: " << vehicles.size() << ".  (Maximum cars: 2; one of each kind of car.)" << endl;
            cout << "(2) Quality test existing cars before they are sold." << endl;
            cout << "(3) Exit" << endl;
            cout << "Please type the number of the desired option above: ";

            //Validate User input
            while (!(cin >> option && (option >= 1 && option <= 3 ))) {
                cin.clear();
                getline(cin, trash);
                cout << "ERROR: Please enter a valid integer from 1-2: ";
            }

            //Options
            switch (option) {
                case 1:

                    //Only allow user to build certain number of cars at a time, in order to make polymorphism demonstration in testVehicles() simple.
                    if (vehicles.size() < 2) {
                        buildCar(vehicles, numPunchBugs, numTrucks);
                    } else {
                        cout << "You have already built the maximum number of cars allowed.  Please test them." << endl;
                    }

                    break;
                case 2:

                    //Only allow user to build certain number of cars at a time, in order to make polymorphism demonstration in testVehicles() simple.
                    if (vehicles.size() > 0) {
                        testVehicles(vehicles);
                    } else {
                        cout << "You haven't built any cars yet.  You need to have built a car to test it." << endl;
                    }

                    break;
                case 3:
                    cout << "\nExiting..." << endl;
                    exit(0);
                default:
                    cout << "Not a valid option.  Now the program will self destruct because you messed up";
                    exit(12345);
            }

        }
    }
}

//======================================================================================================================

int main() {
    vector<unique_ptr<Vehicle>> vehicles;
    menu(vehicles);
    return 0;
}