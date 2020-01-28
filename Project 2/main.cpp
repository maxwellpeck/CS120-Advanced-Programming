#include <iostream>

#include "City.h";

int main() {
    int pop1;
    int build1;
    int pop2;
    int build2;
    string poo;
    string moveOn;
    cout << "\nWelcome to the city designer. Please follow directions to create your 3 new cities.\n"
            "Your first and second cities will be cities of custom population and building count."
            "The third city will be the size of city1 and city2 combined." << endl;
    cout << "\nPlease input the population of City1: ";
    while (!(cin >> pop1)) {
        cin.clear();
        getline(cin, poo);
        cout << "\nError:\nPlease enter a valid population!  Only integers: ";
    }
    cout << "\nPlease input the number of buildings in City1: ";
    while (!(cin >> build1)) {
        cin.clear();
        getline(cin, poo);
        cout << "\nError:\nPlease enter a valid number of buildings!  Only integers: ";
    }
    City city1(pop1, build1);
    cout << "\ncity1 created!" << endl;

    cout << "\nPlease input the population of City2: ";
    while (!(cin >> pop2)) {
        cin.clear();
        getline(cin, poo);
        cout << "\nError:\nPlease enter a valid population!  Only integers: ";
    }
    cout << "\nPlease input the number of buildings in City2: ";
    while (!(cin >> build2)) {
        cin.clear();
        getline(cin, poo);
        cout << "\nError\nPlease enter a valid number of buildings!  Only integers: ";
    }
    City city2(pop2, build2);
    cout << "\ncity2 created!\n" << endl;
    cout << "Type any key and press enter to continue: ";
    cin >> moveOn;
    cout << "\ncity3 has just been established and is the size of city1 and city2 combined!" << endl;
    cout << "\nThe new population/building data is displayed below:" << endl;
    City city3;
    city3 = city1 + city2;
    cout << "city1: " << city1 << "\ncity2: " << city2 << "\ncity3: " << city3 << endl;
    cout << "\nType any key and press enter to continue: ";
    cin >> moveOn;
    cout << "\nThe local economies in your cities have suffered!  Half of the people in your cities have "
            "fled and half of the buildings in the cities are no longer standing!  What a shame!" << endl;
    city1.destroyCity();
    city2.destroyCity();
    city3.destroyCity();
    cout << "\nThe new population/building data is displayed below:" << endl;
    cout << "city1: " << city1 << "\ncity2: " << city2 << "\ncity3: " << city3 << endl;
    return 0;
}