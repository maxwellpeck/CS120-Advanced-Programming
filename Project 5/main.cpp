#include <iostream>
#include <vector>

using namespace std;

#include "SkiLift.h"
#include "ChairLift.h"
#include "Gondola.h"
#include "LiftOperator.h"
#include "Skier.h"

//======================================================================================================================
//Operate lift, control lift operations like a LiftOpp object.

//Pass by reference
void operateLift(SkiLift &lift) {
    //Initialize all variables
    int option;
    string trash;
    LiftOperator liftie(21);
    Skier skier(21);

    //Print menu options
    cout << "\n=================================================================================================\n" << endl;
    cout << "You are now operating the lift '" << lift.getName() << "'" << endl;
    cout << "What would you like to do with the lift" << lift.getName() << "?" << endl;
    cout << "(1) Stop/Start the lift" << endl;
    cout << "(2) Send more skiers onto the lift" << endl;

    //Input Validation
    while (!(cin >> option && (option == 1 || option == 2))) {
        cin.clear();
        getline(cin, trash);
        cout << "ERROR: Please enter a valid integer from 1-2: ";
    }

    //Switch statement which is where lift operation options are found
    switch (option) {
        case 1:
            cout << "The lift '" << lift.getName() << "' has been stopped/started." << endl;
            break;
        case 2:
            cout << "Skiers are getting on the lift '" << lift.getName() << "'" << endl;
            break;
        default:
            cout << "Not a valid option.";
            break;
    }
}

//======================================================================================================================
//Construct SkiLift objects and child classes

SkiLift buildLift() {
    cout << "\n=================================================================================================\n" << endl;
    //Initialize all variables
    int option;
    string trash;
    int cap;
    double len;
    string nm;

    //Print menu options
    cout << "There are many types of ski lifts that you can build.  Please specify which lift you would like to build:" << endl;
    cout << "(1) Traditional Fixed-Grip Chairlift" << endl;
    cout << "(2) Detachable Chairlift: A high-speed chairlift faster than a traditional fixed-grip chairlift." << endl;
    cout << "(3) Detachable Bubble Chairlift: High-speed chairlift with protective 'bubble' cover to shield skiers from the elements." << endl;
    cout << "(4) Gondola: SkiLift consisting of enclosed structures instead of chairs to shuttle skiers up the mountain." << endl;
    cout << "(5) Heated Gondola" << endl;

    //Validate User input
    while (!(cin >> option && option >= 1 && option <= 5)) {
        cin.clear();
        getline(cin, trash);
        cout << "ERROR: Please enter a valid integer from 1-5: ";
    }
    cout << "What would you like to name your lift? ";
    cin >> nm;
    cout << "What would you like the maximum capacity to be? ";

    //Validate User input
    while (!(cin >> cap) || (cap < 1)) {
        cin.clear();
        getline(cin, trash);
        cout << "ERROR: Please enter a valid integer lift capacity greater than 1: ";
    }
    cout << "How long will the lift be? ";

    //Validate User input
    while (!(cin >> len) || (len < 1)) {
        cin.clear();
        getline(cin, trash);
        cout << "ERROR: Please enter a valid integer lift length greater than 1: ";
    }

    //Options
    if (option == 1) {
        ChairLift lift1(cap, len, nm, false, false);
        return lift1;
    } else if (option == 2) {
        ChairLift lift2(cap, len, nm, false, true);
        return lift2;
    } else if (option == 3) {
        ChairLift lift3(cap, len, nm, true, true);
        return lift3;
    } else if (option == 4) {
        Gondola gondola1(cap, len, nm, false);
        return gondola1;
    } else {
        Gondola gondola2(cap, len, nm, true);
        return gondola2;
    }
}

//======================================================================================================================
//Menu to be called in a loop in main

//Pass by reference
void menu(bool &firstTime, vector<SkiLift> &lifts) {
    //Initialize all variables
    int currentLiftIndex;
    int option;
    int option2;
    string trash;
    string nm;
    int liftCounter = 0;
    int liftID;

    //Only if is first time through
    if (firstTime) {
        cout << "\n=================================================================================================\n" << endl;
        cout << "Welcome!  You are now the sole owner and manager of the UVM ski resort."  << endl;
        cout << "You currently have no ski lifts to take skiers to the top of the mountain, so please build some below!" << endl;
        cout << "After you build your lifts, you can control the lift and skier traffic just like a lift operator would be able to." << endl;
        firstTime = false;
    }

    //Will happen even if first time, because firstTime is set to false before.
    if (!firstTime) {

        //Print menu options
        cout << "\n=================================================================================================\n" << endl;
        cout << "MENU" << endl;
        cout << "(1) Operate an existing ski lift.  Current number of lifts: " << lifts.size() << endl;
        cout << "(2) Build a ski lift.";
        cout << "\nPlease type the number of the option above: ";

        //Validate User input
        while (!(cin >> option && (option == 1 || option == 2))) {
            cin.clear();
            getline(cin, trash);
            cout << "ERROR: Please enter a valid integer from 1-2: ";
        }

        //Options
        switch (option) {
            case 1:
                cout << "\n=================================================================================================\n" << endl;
                cout << "Current Lifts:" << endl;

                //Print lifts out only if their are lifts.  Always prints same lines as number of lifts.
                if (lifts.size() > 0) {
                    for (int i = 0; i < lifts.size(); ++i) {
                        ++liftCounter;
                        cout << "(" << liftCounter << ") Lift Name: " << lifts[i].getName() << endl;
                        liftID = i;
                    }
                    cout << "Which lift would you like to operate? ";

                    //Validate User input
                    while (!(cin >> option2 && (option2 == 1 || option2 == 2))) {
                        cin.clear();
                        getline(cin, trash);
                        cout << "ERROR: Please enter a valid integer from 1-" << lifts.size() << ": ";
                    }

                    //Pass lift to be operated so it is not altered as a copy elsewhere.
                    operateLift(lifts[liftID]);

                } else {
                    cout << "There are currently no lifts." << endl;
                }

                break;
            case 2:
                //Add new SkiLift to vetor
                lifts.push_back(buildLift());
                break;
            default:
                cout << "Not a valid option.  Exiting...";
        }
    }
}

//======================================================================================================================

int main() {
    //Initialize all variables
    vector<SkiLift> lifts;
    int again = 1;
    bool firstTime = true;
    string trash;

    //Only execute if user wishes to continue
    while (again == 1) {
        menu(firstTime, lifts);

        //Print options
        cout << "\n=================================================================================================\n" << endl;
        cout << "Would you like to continue managing your ski resort or would you like to exit?" << endl;
        cout << "\nPress '1' to continue or '2' to exit: ";

        //Validate User input
        while (!(cin >> again && (again == 1 || again == 2))) {
            cin.clear();
            getline(cin, trash);
            cout << "ERROR: Please enter a valid integer from 1-2: ";
        }

        //Options for user
        switch (again) {
            case 1:
                break;
            case 2:
                cout << "Goodbye!" << endl;
                exit(0);
                break;
            default:
                cout << "Not a valid option.  Exiting...";
                again = 2;
                exit(0);
        }
    }
    return 0;
}