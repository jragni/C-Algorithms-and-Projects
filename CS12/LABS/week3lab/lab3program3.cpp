#include <iostream>
#include <vector>
#include "lab3program3.hpp"

// Write a program that allows a user to create a list of cars in their inventory. Create a class "Car" that has the car make, model, type, year, and mileage. Print out the list of cars once the user has completed and write inforation to file

int main( int argc, char** argv){

    // variables
    std::vector<Car> carList;
    char userInput;


    //welcome user
    std::cout << "\n Greetings! I am here to assist you with your car Inventory\n";
    do{
        askUser(carList);
        std::cout << "Please input \'q\' to quit or input any character to continue adding vehicles\n";
        std::cin >> userInput;
    }while(userInput!='q');

    std::cout << carList.at(0).getMake();

    return 1;
}