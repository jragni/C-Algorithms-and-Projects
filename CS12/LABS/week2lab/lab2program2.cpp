#include "lab2program2.hpp"
#include <iostream>
#include <fstream>
#include <vector>

/*
 write a program that reads this text file and creates a new file called squaredData.txt where the numbers from the input file is squared.

*/

int main(int argc, char* argv[]){   
    std::vector<int> data;  // data from file
    int num;  // iterator
    std::string fileToOpen = argv[1];

    std::cout << "Please Enter file to open: ";

    // open file
    std::ifstream inputFile(fileToOpen);
    // create file to write to
    std::ofstream outputFile("outputFile.txt");

    // check if file is open
    if(inputFile.is_open()){
        std::cout << "Success! File is open. \n";
        // extract data to array
        std::cout << "Extracting data... \n";
        
        //
        while(inputFile >> num){
            data.push_back(num);
        }
        std::cout << "Extraction complete.\n";

        // square data
        squareData(data);
        // check if output file is open
        if(outputFile.is_open()){
            // add data to file
            for(unsigned i = 0; i<data.size(); i++){
                outputFile << data[i] << std::endl;
            }
            std::cout << "File creation complete... Terminating program!\n";

        }else{
            std::cout<<"Failed to write to output file... Terminating program. \n";
        }

    }else{
        std::cout << " Failed to open file \n";
    }



    return 0;
}