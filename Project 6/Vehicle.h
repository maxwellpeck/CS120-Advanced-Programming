//
// Created by Maxwell Peck on 3/27/18.
//

#ifndef PROJECT_6_VEHICLE_H
#define PROJECT_6_VEHICLE_H

#include <string>

class Vehicle {

public:

    /**
     * Default Constructor
     * Requires: Nothing
     * Modifies: name, hasLights, hasWindows, milesDriven, tankSize
     * Effects: Constructs Vehicle with hasLights and hasWindows false, and other variables 0
    */
    Vehicle();

    /**
     * Non-Default Constructor
     * Requires: Nothing
     * Modifies: name, hasLights, hasWindows, milesDriven, tankSize
     * Effects: Constructs Vehicle with name nameIn, hasLights hasLightsIn, hasWindows hasWindowsIn, milesDriven milesDrivenIn
    */
    Vehicle(std:: string nameIn, bool hasLightsIn, bool hasWindowsIn, int milesDrivenIn);//, int tankSizeIn);

    /**
     * Destructor
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Do Nothing
    */
    ~Vehicle();

    /**
    * Name Getter
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns name
    */
    std::string getName() const;

    /**
    * hasLights Getter
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns hasLights
    */
    bool getHasLights() const;

    /**
    * hasWindows Getter
    * Requires: Nothing
    * Modifies: Nothing
    * Effects: Returns hasWindows
    */
    bool getHasWindows() const;

    /**
   * MilesDriven Getter
   * Requires: Nothing
   * Modifies: Nothing
   * Effects: Returns milesDriven
   */
    int getMilesDriven() const;

//    /**
//   * tankSize Getter
//   * Requires: Nothing
//   * Modifies: Nothing
//   * Effects: Returns tankSize
//   */
//    int getTankSize() const;

    /**
   * milesPerGallon Getter
   * Requires: Nothing
   * Modifies: Nothing
   * Effects: Returns milesPerGallon
   */
    int getMilesPerGallon() const;

    /**
    * Name Setter
    * Requires: Nothing
    * Modifies: name
    * Effects: Sets name to nameIn
    */
    void setName(std::string nameIn);

    /**
    * hasLights Setter
    * Requires: Nothing
    * Modifies: hasLights
    * Effects: Sets hasLights to hasLightsIn
    */
    void setHasLights(bool hasLightsIn);

    /**
    * hasWindows Setter
    * Requires: Nothing
    * Modifies: hasWindows
    * Effects: Sets hasWindows to hasWindowsIn
    */
    void setHasWindows(bool hasWindowsIn);

    /**
    * MilesDriven Setter
    * Requires: Nothing
    * Modifies: milesDriven
    * Effects: Sets milesDriven to milesDrivenIn
    */
    void setMilesDriven(int milesDrivenIn);

//    /**
//    * tankSize Setter
//    * Requires: Nothing
//    * Modifies: tankSize
//    * Effects: Sets tankSize to tankSizeIn
//    */
//    void setTankSize(int tankSizeIn);

/**
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Calculates gas mileage
    */
    virtual void calculateMilesPerGallon() = 0;

protected:
    std::string name;
    bool hasLights;
    bool hasWindows;
    int milesDriven;
//    int tankSize;
    int milesPerGallon;

//    /**
//     * Requires: Nothing
//     * Modifies: Nothing
//     * Effects: Calculates gas mileage
//    */
//    virtual void calculateMilesPerGallon() = 0;

};

#endif //PROJECT_6_VEHICLE_H