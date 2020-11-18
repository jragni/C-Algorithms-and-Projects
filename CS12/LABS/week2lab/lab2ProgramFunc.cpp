#include <fstream>
#include <iostream>
#include <vector>
#include <string>

int square(int num){
    return num*num;
}
void squareData(std::vector<int> &data){
    for(unsigned i = 0; i<data.size();i++){
        data[i] = square(data[i]);
    }
}

bool isNum(std::string &str){
    char c;
    for(int i = 0;i<str.size();i++){
        c = str[i];
        if(std::isdigit(c)){
            return true;
        }
    }
    return false;
}

void outputSquareNum(std::string file){
    std::string str;

    // open file
    std::ifstream inputFile(file);
    // create file to write to
    std::ofstream outputFile("outputFile.txt");

    // check if file is open
    if(inputFile.is_open()){
        std::cout << file << std::endl;
        std::cout << "\n Success! File is open. \n";

        // get data from file
        while(!inputFile.eof()&& !inputFile.fail()){
            // get line
            std::getline(inputFile, str);
            // if line has number square, print 
            if(isNum(str)){
                outputFile << square(std::stoi(str))<<std::endl;
            }else{
                outputFile << str <<" is NOT A NUMBER, so we it cannot be squared. \n" << std::endl;

            }
        } 

    }else{
        std::cout << " Failed to open file \n";
    }
}