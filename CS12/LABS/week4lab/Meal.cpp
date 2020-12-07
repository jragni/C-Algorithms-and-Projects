#include <iostream>
#include <vector>
#include "Food.hpp"
#include "Meal.hpp"

/// Meal class definitions

Meal::Meal(std::vector<Food> foodList, std::string mealName){
    
    setMealName(mealName);
    // compute total calories,carb, and protein
    calculateTotals(foodList);
}
// mutators
void Meal::setMealName(std::string mealName){
    this->mealName = mealName;
}
// accessor 

std::string Meal::getMeal(){
    return this->mealName;
}

std::vector<std::string> Meal::getFoodList(){
    // input: none
    // output: @Names of food added 
    std::vector<std::string> list;
    for(unsigned i = 0; i<foodList.size();i++){
        list.push_back(foodList.at(i).getFood());
    }
    return list;
}

int Meal::getTotalCal(){ return this->totalCal;}
int Meal::getTotalCarbs(){ return this-> totalCarb;}
int Meal::getTotalProteins(){return this-> totalProtein;}

// methods
void Meal::calculateTotals(std::vector<Food> &list){
    // for every food item on the list, compute the total macros and cals.
    for(unsigned i = 0; i<list.size(); i++){
       this-> totalCal += list.at(i).getCal();
       this-> totalCarb += list.at(i).getCarbs();
       this-> totalProtein += list.at(i).getCarbs();
    }
}

void Meal::operator +(Food foodObj){
    // input: food obj to list 
    foodList.push_back(foodObj);
    
}
std::ostream& Meal::operator<<(Meal mealObj){
    std::cout <<"\n"<<"name of meal: "<< getMeal()<<std::endl;
    std::cout <<"calories: "<< getTotalCal()<<std::endl;
    std::cout <<"carbohydrates: "<< getTotalCarbs()<<std::endl;
    std::cout <<"products: ";
    for(unsigned i = 0; i < foodList.size();i++){
        std::cout<< getFoodList().at(i)<<std::endl;
    }

}