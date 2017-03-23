//
// Created by K.Furman on 23/03/2017.
//
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

#ifndef GENERAL_PROBLEM_SOLVER_CPP_GPS_H
#define GENERAL_PROBLEM_SOLVER_CPP_GPS_H

void GPS(const std::vector<std::string> finalResult, std::vector<std::string> initialConditions, std::vector<std::vector<std::string>> ops, std::vector<std::vector<std::string>> opsDone);
void deleteFromList(std::string str, std::vector<std::string> list);

#endif //GENERAL_PROBLEM_SOLVER_CPP_GPS_H
