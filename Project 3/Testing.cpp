//
// Created by Maxwell Peck on 2/16/18.
//

//TODO: NOTE TO GRADER: In this project, there are City objects inside a vector, which is a field variable of Country object.
//TODO: NOTE TO GRADER: City objects are created from a file called "uscities.csv" which is just a collection of the largest 1000 cities in the US.
//TODO: NOTE TO GRADER: vector<City> allCities is a vector of all 1000 possible cities for each country, and is passed to the Country class as "cts."

#include "Country.h"

int main() {
    cout << "\n==={BEGIN TESTING}=======================================================================================\n" << endl;

    //---Testing Constructors of City object:---------------------------------------------------------------------------

    int rank1 = 12;
    string cityName1 = "CityTestName2";
    string state1 = "TestState2";
    int population1 = 1234;
    double growth1 = 1.1;
    int rank2 = 24;
    string cityName2 = "CityTestName1";
    string state2 = "TestState1";
    int population2 = 2468;
    double growth2 = 1.2;

    City testCity1(rank2, cityName2, state2, population2, growth2);
    City testCity2(rank1, cityName1, state1, population1, growth1);

    //---Testing Constructors of Country object:------------------------------------------------------------------------

    string countryName = "testCountry";
    int numOfCities = 2;
    vector<City> testVec = {testCity1, testCity2};

    Country testCountry(countryName, numOfCities, testVec);

    //---Now Testing Methods of City Object:----------------------------------------------------------------------------

    cout << "\nNow Testing Methods of City Object:\n" << endl;
    testCity1.setPopulationRank(rank1);
    cout << "testCity1.getPopulationRank(); Should Print 12: " << testCity1.getPopulationRank() << endl;
    testCity1.setName(cityName2);
    cout << "testCity1.getName(); Should Print CityTestName1: " << testCity1.getName() << endl;
    testCity1.setState(state2);
    cout << "testCity1.getState(); Should Print TestState1: " << testCity1.getState() << endl;
    testCity1.setPopulation(population2);
    cout << "testCity1.getPopulation(); Should Print 2468: " << testCity1.getPopulation() << endl;
    testCity1.setGrowth(growth2);
    cout << "testCity1.getGrowth(); Should Print 1.2: " << testCity1.getGrowth() << endl;

    cout << "\nOverloaded Operator (<<) Should Print organized list of field values of city1:\n" << testCity1 << endl;

    //---Now Testing Methods of Country Object:-------------------------------------------------------------------------

    cout << "\nNow Testing Methods of Country Object:\n" << endl;
    testCountry.setCountryName("testCountry");
    cout << "testCountry.getCountryName(); Should Print testCountry: " << testCountry.getCountryName() << endl;
    testCountry.setCities(testVec);
    testCountry.getCities() = testCountry.getCities();
    testCountry.setNumOfCities(numOfCities);
    cout << "testCountry.getNumOfCities(); Should Print 2: " << testCountry.getNumOfCities() << endl;

    cout << "\nTesting build/demolish methods with all unique cases; will print either too few or too many cities, after printing success messages:" << endl;
    testCountry.demolishCity();
    testCountry.demolishCity();
    testCountry.demolishCity();
    testCountry.buildCity(testVec);
    testCountry.buildCity(testVec);
    testCountry.buildCity(testVec);

    cout << "\nTesting printCities() method of Country object; Should print organized list of cities anc attributes.";
    testCountry.printCities();

    cout << "\nTesting censusCut() method of Country object; Should print 3702: ";
    cout << testCountry.censusCount() << endl;

    cout << "\n==={End TESTING}=========================================================================================" << endl;
    return 0;
}