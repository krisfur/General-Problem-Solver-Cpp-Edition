//
// Created by K.Furman on 23/03/2017.
//

#include "GPS.h"

void GPS(const std::vector<std::string> finalResult, std::vector<std::string> initialConditions, std::vector<std::vector<std::string>> ops, std::vector<std::vector<std::string>> opsDone){
    bool finished = 0;
    std::cout << "Trying to solve your problem..." << std::endl;
    std::cout << "---------------" << std::endl;
    //initialConditions.push_back("not hungry");
    while (!finished){
        //check if all final result conditions are met
        for (auto x : finalResult){
            std::vector<std::string>::iterator result = find(initialConditions.begin(),initialConditions.end(),x);
            if (result != initialConditions.end()){
                //item is in the list
                std::cout << "Condition " << "'" << x << "'" << " met." << std::endl;
                std::cout << "---------------" << std::endl;
            }
            else{
                //item not in the list
                std::cout << "Condition " << "'" << x << "'" << " was not met." << std::endl;
                std::cout << "---------------" << std::endl;
                break;
            }
            finished = 1;
            std::cout << "Task : COMPLETED" << std::endl;
            std::cout << "Thank you for using the General Problem Solver (C++ edition)!" << std::endl;
        }
        if(!finished) {
            //conditions were not met
            std::cout << "Task : UNFINISHED" << std::endl;
            std::cout << "Proceeding with more operations..." << std::endl;
            std::cout << "---------------" << std::endl;


            //do operations - find a way of checking the best order of operations instead of jumping before looking
            for(int i = 0; i<ops.size();++i){
                //find a way to print out name of the operation here
                std::vector<std::string> op = ops[i];
                deleteFromList(op[i],initialConditions);

                std::vector<std::string> opDone = opsDone[i];
                initialConditions.push_back(opDone[i]);
            }
        }
    }
}

void deleteFromList(std::string str, std::vector<std::string> list){
    std::vector<std::string>::iterator result = find(list.begin(),list.end(),str);
    if (result == list.end()){
        //do nothing, str not in the list
    }
    else{
        list.erase(result); //erase str from list
    }
}