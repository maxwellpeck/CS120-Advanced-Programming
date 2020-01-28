#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//======================================================================================================================
//Forward Function Declarations; so they can be called out of order.

void menu();

//======================================================================================================================

/**
 * Requires: Nothing
 * Modifies: fileio.csv
 * Effects: Adds entry to filelio.csv, only if certain conditions are met.  Returns nothing.
 */

void add() {
    //Poo variable to help clear bad input.
    string poo;
    cout << "Please enter the integer that you would like to add to the dictionary: ";
    string lineStr;
    int inInt;
    //Check for bad input.
    while (!(cin >> inInt)) {
        cin.clear();
        getline(cin, poo);
        cout << "\nERROR:\n";
        cout << "Please enter a valid integer: ";
    }
    ifstream inFile("fileio.csv");
    string inString = to_string(inInt) + ',';
    bool found = false;
    //Search for substring in file, to determine if entry already exists.
    while (inFile && inFile.peek() != EOF) {
        getline(inFile, lineStr);
        if (lineStr.find(inString) == 0) {
            found = true;
        }
    }
    if (found) {
        cout << "\nERROR:";
        cout << "\nThe integer " + inString.substr(0, inString.length() - 1) +
                " already exists in the dictionary.  You can only add integers that aren't already in the dictionary.  Try again later." << endl;
    } else {
        cout << "Please enter the proper spelling of the integer " + inString.substr(0, inString.length() - 1) + ": ";
        string spellStr;
        cin.clear();
        string poo;
        getline(cin, poo);
        //Check for bad input.
        while (!(cin >> spellStr)) {
            cin.clear();
            getline(cin, poo);
            cout << "\nERROR:\n";
            cout << "Please enter a valid spelling: ";
        }
        cin.clear();
        getline(cin, poo);
        //Append Mode to make sure entire file is not replaced.
        ofstream outFile("fileio.csv", ios::app);
        outFile << "\n" + inString.substr(0, inString.length() - 1) + "," + spellStr;
        outFile.close();
        cout << "\nNumber added successfully.\n";
    }
    inFile.close();
    //Check to make sure bad input doesn't alter any future user inputs.
    cin.clear();
    getline(cin, poo);
    menu();
}

//======================================================================================================================

/**
 * Requires: Nothing
 * Modifies: Nothing
 * Effects: Reads fileio.csv, and displays desired results in console, using 4 output manipulators of course.  Returns nothing.
 */

void lookUp() {
    //Poo variable to help clear bad input.
    string poo;
    cout << "Please enter an integer to spell: ";
    string lineStr;
    int inInt;
    //Check for bad input.
    while (!(cin >> inInt)) {
        cin.clear();
        getline(cin, poo);
        cout << "\nERROR:\n";
        cout << "Please enter a valid integer: ";
    }
    //Check to make sure bad input doesn't alter any future user inputs.
    getline(cin, poo);
    string inString = to_string(inInt) + ',';
    ifstream inFile("fileio.csv");
    bool found = false;
    //Search for substring in file, to determine if entry already exists.
    while (inFile && inFile.peek() != EOF) {
        getline(inFile, lineStr);
        if (lineStr.find(inString) == 0) {
            //USE OUTPUT MANIPULATORS, 4 TOTAL TO BE EXACT.
            cout << "\nHow to Spell " + inString.substr(0, inString.length() - 1) + ": "
                 << lineStr.substr(inString.length(), lineStr.length()) << endl;
            cout << "Hexadecimal of " + inString.substr(0, inString.length() - 1) + ": " << hex << inInt << endl;
            cout << "Octal of " + inString.substr(0, inString.length() - 1) + ": " << oct << inInt << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "\nERROR:\n";
        cout << "The integer " + inString.substr(0, inString.length() - 1) +
                " was not found.  You can add an entry to the dictionary in the following menu.\n" << endl;
    }
    inFile.close();
    menu();
}

//======================================================================================================================

/**
 * Requires: Nothing
 * Modifies: Nothing
 * Effects: Just a menu to navigate the other functions; will only call other functions.  Nothing is returned.  This method is called by all other functions.
 */

void menu() {
    //Poo variable to help clear bad input.
    string poo;
    //USE OUTPUT MANIPULATORS, 4 TOTAL TO BE EXACT.
    cout << "\nPress the corresponding key indicated below to advance to the next menu:" << endl;
    cout << setfill('.') << setw(3) << "(1)" << setw(35) << "Look Up Integers Information" << endl;
    cout << setfill('.') << setw(3) << "(2)" << setw(35) << "Add Integers to the dictionary" << endl;
    cout << setfill('.') << setw(3) << "(3)" << setw(35) << "Exit" << endl;
    int option;
    //Check for bad input.
    while (!(cin >> option)) {
        cin.clear();
        getline(cin, poo);
        cout << "\nERROR:\n";
        cout << "Please enter a valid integer: ";
    }
    //Check to make sure bad input doesn't alter any future user inputs.
    cin.clear();
    getline(cin, poo);
    switch(option) {
        case 1:
            lookUp();
        case 2:
            add();
        case 3:
            cout << "Exiting...";
            exit(0);
        default:
            cout << "\nERROR:\n";
            cout << "Not a valid option.  Exiting...";
            exit(0);
    }
}

//======================================================================================================================

/**
 * Requires: Nothing
 * Modifies: Nothing
 * Effects: Required to run.
 */

int main() {
    cout << "\nWelcome to the Integer Dictionary!\nThis is a databse of numbers, and will output certain data about integers.  Use this tool to view the spelling of integers,\nas well as the hexadecimal and octal values of each base 10 integer.\nPress enter to continue.";
    //Press enter to continue!
    cin.get();
    menu();
    return 0;
}