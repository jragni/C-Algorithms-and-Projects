
#include "lab3program3.hpp"
#include <vector>
#include <string>
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

    // Welcome User
    std::cout << "Hello I am a program that will help you keep track of your car inventory \n";

    // ask user for inputs 
    askUser(cars2BAdded);

    // initialize file to create list 

    // add objects to list 

    // close file  


    return 1;
}