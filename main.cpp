#include <iostream>
#include "GPS.h"

int main() {

    std::cout << "Welcome to the General Problem Solver (C++ edition)!" << std::endl;

    //initial conditions vector
    std::vector<std::string> initialConditions;

    //final result vector
    std::vector<std::string> finalResult;

    //operations and their requirements
    std::vector<std::vector<std::string>> operations;

    /*
     * take user input for defining everything, might be painful
     */

    //test setup
    //initial conditions
    initialConditions.push_back("have money");
    //initialConditions.push_back("not hungry");
    initialConditions.push_back("hungry");
    initialConditions.push_back("not at the store");
    initialConditions.push_back("can drive");

    //expected result
    finalResult.push_back("not hungry");

    //operations with their requirements
    std::vector<std::string> getFood = {"have money", "at the store", "hungry"};
    std::vector<std::string> getFoodDone = {"not hungry"};
    std::vector<std::string> goToStore = {"not at the store", "can drive","have money"};
    std::vector<std::string> goToStoreDone = {"at the store", "can drive","have money"};

    //vector with all operations
    std::vector<std::vector<std::string>> allOps = {getFood,goToStore};
    //vector with all operations' results
    std::vector<std::vector<std::string>> allOpsDone = {getFoodDone,goToStoreDone};

    GPS(finalResult,initialConditions, allOps, allOpsDone);
    return 0;
}