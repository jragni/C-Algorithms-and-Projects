
#include "lab3program3.hpp"
#include <vector>
#include <string>
#include <fstream>
/*
Create a class modeled after a car. Your class should include the following data members:

Car brand
Year
Type
Miles Driven
You will then create a program that allows a user to populate a list of the cars they own.

*/

int main( int argc, char* argv[]){
    std::vector<Car> cars2BAdded;
    char userResponse;
    // Welcome User
    std::cout << "Hello I am a program that will help you keep track of your car inventory \n";
    do{
        // ask user for inputs 
        askUser(cars2BAdded);
        // Ask user if car they want to add more cars
        std::cout << "\nWould you like to add more cars? Input \'c\' to continue adding or \'q\' to quit.\n";
        std::cin >> userResponse;
    }while(userResponse!='q');

    // print out list upon exit.
    std::cout << "\nCar Inventory:\n";
    std::cout<<"number of cars: "<< cars2BAdded.size()<<"\n";
    for(unsigned i = 0; i<cars2BAdded.size(); i++){
        std::cout << i+1 <<": "<< cars2BAdded.at(i).getMake()<<"\n";
    }
    

    return 1;
}