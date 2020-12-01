#include "lab3program3.hpp"
#include <string>
#include <vector>

bool isTypeValid(std::string type){
    // input: cartype
    // @output: true or false
    std::vector<std::string> carTypes = {"Sedan","Coupe","SUV","Van"};
    // check if type is on list
    for(unsigned i = 0; i<carTypes.size(); i++){
        if(carTypes.at(i)==type){
            return true;
        }
    }
    return false;
}

void askUser(std::vector<Car> &carList){

    // user inputs
    std::string make;
    std::string model;
    std::string type;
    int year;
    int milesDriven;

    std::cout << "What is your car's brand? ";
    std::cin >> make;
    std::cout << "\n What is your car's model? ";
    std::cin >> model;

    do{
    std::cout << "\n What type of car is it? ";
    std::cin >> type;
    }while(!isTypeValid(type));
    
    std::cout << "\n What year was your car made? ";
    std::cin >> year;
    std::cout << "\n What is your car's mileage? ";
    std::cin >> milesDriven;

    // add car to list 
    
    carList.push_back(Car(make,model,type,year,milesDriven));
    std::cout <<"\n Car has been added! \n";

}

// CAR CLASS definitions 

//overloaded Constructor
Car::Car(std::string aMake, std::string aModel, std::string aType, int aYear, int milesDriven){
    
    // add make and model
    void setMakeAndModel(std::string aMake, std::string aModel);
    // add type
    void setType(std::string aYear);
    // add year
    void setType(std::string aType);
    // add miles driven
    void setMilesDriven(int milesDriven);
}

void Car::setMakeAndModel(std::string aMake, std::string aModel){
    // input: make and model
    make = aMake;
    model = aModel;
}

void Car::setYear(int aYear){
    year = aYear;
}

void Car::setMilesDriven(int mileage){
    milesDriven = mileage;
}

void Car::setType(std::string aType){
    type = aType;
}
// getters
int Car::getYear(){
    return year;
}

std::string Car::getMake(){
    return make;
}

std::string Car::getModel(){
    return model;
}

int Car::getMileage(){
    return milesDriven;
}

std::string Car::getType(){
    return type;
}