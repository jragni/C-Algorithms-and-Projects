#include <iostream>
#include <vector>
#include <fstream>
#include "lab3program3.hpp"

// Write a program that allows a user to create a list of cars in their inventory. Create a class "Car" that has the car make, model, type, year, and mileage. Print out the list of cars once the user has completed and write inforation to file

int main( int argc, char** argv){

    // variables
    std::vector<Car> carList;
    std::ofstream outputFile("vehicleInventory.txt");
    char userInput;


    //welcome user
    std::cout << "\n Greetings! I am here to assist you with your car Inventory\n";
    do{
        askUser(carList);
        std::cout << "Please input \'q\' to quit or input any character to continue adding vehicles\n";
        std::cin >> userInput;
    }while(userInput!='q');

    std::cout << "\nGenerating list...\n"<<"Vehicle Inventory: \n";
    for(unsigned i = 0; i<carList.size(); i++){
        std::cout<< i+1 << ": "<< carList.at(i).getYear()<<" "<< carList.at(i).getMake()<<" "<<carList.at(i).getModel()<< " "<<carList.at(i).getMileage()<<"\n";
        outputFile<< i+1 << ": "<< carList.at(i).getYear()<<" "<< carList.at(i).getMake()<<" "<<carList.at(i).getModel()<< " "<<carList.at(i).getMileage()<<"\n";
    }
    std::cout << "Your file has been exported to \"vehicleInventory.cpp\" \n";
    
    return 1;
}