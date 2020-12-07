#include <string>
#include <iostream>
#include <vector>
#include "Meal.hpp"
#include "Food.hpp"

/// Food class definitions
// overloaded constructor

Food::Food(std::string foodName, int cal, int proteins, int carbs){
    setFood(foodName);
    setCal(cal);
    setProteins(proteins);
    setCarbs(carbs);
    std::cout << "\n"<< getFood() << " has been added.\n"; 
}
// mutators
void Food::setFood(std::string foodName){
    this->foodName = foodName;
}
void Food::setCal(int cal){
    this->cal = cal;
}
void Food::setProteins(int proteins){
    this-> proteins = proteins;
}
void Food::setCarbs(int carbs){
    this -> carbs = carbs;
}
// accessors
std::string Food::getFood(){
    return foodName;
}
int Food::getCal(){
    return cal;
}
int Food::getProteins(){
    return proteins;
}
int Food::getCarbs(){
    return carbs;
}
