#include "lab3program3.hpp"
#include <vector>
#include <iostream>
#include <string>




////// Car Methods

// Overloaded Constructor

Car::Car(std::string aMake, std::string aModel, std::string aType, int aYear, int aMileage){

setMake(aMake);
setModel(aModel);
setType(aType);
setYear(aYear);
setMileage(aMileage);
std::cout << aMake << " "<< aModel<< " has been added!\n";

}

// mutators/setters
void Car::setMake(std::string aMake){
    make = aMake;
}
void Car::setModel(std::string aModel){
    model = aModel;
}
void Car::setType(std::string aType){
    type = aType;
}
void Car::setYear(int aYear){
    year = aYear;
}
void Car::setMileage(int aMileage){
    mileage = aMileage;
}

// getters 

std::string Car::getMake(){
    return make;
}
std::string Car::getModel(){
    return model;
}
std::string Car::getType(){
    return type;
}
int Car::getYear(){
    return year;
}
    
int Car::getMileage(){
    return mileage;
}


// Other functions

// Functions
void askUser(std::vector<Car> &list){
    std::string make;
    std::string model;
    std::string type;
    int year;
    int mileage;

    std::cout<<"\nWhat is your car's make?: ";
    std::cin >> make;
    std::cout<<"\nWhat is your car's model? ";
    std::cin >> model;
    std::cout<<"\nWhat is your car's type? ";
    std::cin >> type;
    std::cout <<"\nWhat year was your car made? ";
    std::cin>> year;
    std::cout<< "\nHow many miles has this car been driven? ";
    std::cin >>mileage;

    list.push_back(Car(make,model,type,year,mileage));

}