#include "lab2program2.hpp"
#include <iostream>


/*
 write a program that reads this text file and creates a new file called squaredData.txt where the numbers from the input file is squared.

*/



int main(int argc, char* argv[]){   
    std::string fileToOpen = argv[1];
    outputSquareNum(fileToOpen);


    return 0;
}