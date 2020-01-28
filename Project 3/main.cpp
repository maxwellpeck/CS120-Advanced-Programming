#include "Country.h"

//TODO: NOTE TO GRADER: In this project, there are City objects inside a vector, which is a field variable of Country object.
//TODO: NOTE TO GRADER: City objects are created from a file called "uscities.csv" which is just a collection of the largest 1000 cities in the US.
//TODO: NOTE TO GRADER: vector<City> allCities is a vector of all 1000 possible cities for each country, and is passed to the Country class as "cts."

vector<City> readAllCities() {
    vector<City> allCities;
    ifstream inFile("uscities.csv");
    //Only proceed with reading and displaying the data if the file was successfully opened.

    if (inFile) {
        //Initialize all variables so they can consistently be accessed later in the loop.
        string name, state;
        int populationRank, population;
        double growth;
        char comma, percent;

        //Only read first 1000 lines, to prevent reading the source information at the bottom of the document.
        for (int i = 0; i < 1000; ++i) {
            inFile >> populationRank >> comma;
            getline(inFile, name, comma);
            getline(inFile, state, comma);
            inFile >> population >> comma;
            inFile >> growth >> percent;

            //Create City object to place in vector
            City city(populationRank, name, state, population, growth);
            allCities.push_back(city);

            //Check to make sure stream is not broken as a result of reading errors.  If broken, clear it to continue reading.
            if (!inFile) {
                inFile.clear();
            }
        }
    }

    inFile.close();
    return allCities;
}

void menu() {
    //Upper part of menu() function will only execute first time user runs program.
    //Initialize all variables
    string trash;
    int option;
    string name;
    int nmCities = 0;
    //Create vector of all possible cities, to be passed to various functions of Country object.
    vector<City> allCities = readAllCities();
    string again = "Y";

    cout << "Hello!  You are now the ruler of a brand new country.  What would you like to name it? ";
    cin >> name;
    cout << "How many cities would you like to build in the country of " << name << "?  You can build up to 1000: ";

    //Validate User input
    while (!(cin >> nmCities) || (nmCities < 0) || (nmCities > allCities.size())) {
        cin.clear();
        getline(cin, trash);
        cout << "ERROR: Please enter a valid integer from 0-" << allCities.size() << ": ";
    }

    //Create object
    Country country1(name, nmCities, allCities);
    cout << "Country of " << name << " has been created." << endl;

    //Begin loop that will happen until user presses 5.
    while (again == "Y") {
        cout << "\nMAIN MENU\nYOUR CITY: " << country1.getCountryName() << endl;
        cout << "Here you have options for managing your country.  Press a number to indicate the menu option you want!" << endl;
        cout << "(1) Build/Populate another city in your country" << endl;
        cout << "(2) Demolish a current city in your country" << endl;
        cout << "(3) View all of the cities in your country" << endl;
        cout << "(4) Collect census data and find out how many people live in all of your cities" << endl;
        cout << "(5) Exit" << endl;

        //Validate User input
        while (!(cin >> option && option >= 1 && option <= 5)) {
            cin.clear();
            getline(cin, trash);
            cout << "ERROR: Please enter a valid integer from 1-5: ";
        }

        //Options
        switch (option) {
            case 1:
                country1.buildCity(allCities);
                break;
            case 2:
                country1.demolishCity();
                break;
            case 3:
                country1.printCities();
                break;
            case 4:
                cout << "There are " << country1.censusCount() << " people living in the country of "
                     << country1.getCountryName() << "." << endl;
                break;
            case 5:
                cout << "Exiting...";
                again = "N";
                break;
            default:
                cout << "Not a valid option.  Exiting...";
                again = "N";
        }
    }
}

int main() {
    menu();
    return 0;
}