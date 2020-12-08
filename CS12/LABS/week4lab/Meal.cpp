#include <iostream>
#include <vector>
#include "Food.hpp"
#include "Meal.hpp"

/// Meal class definitions

Meal::Meal(std::vector<Food> foodList, std::string mealName){
    
    setMealName(mealName);
    setFoodList(foodList);
    setFoodNames(foodList);
    // compute total calories,carb, and protein
    calculateTotals(foodList);
}
// mutators
void Meal::setMealName(std::string mealName){
    this->mealName = mealName;
}
void Meal::setFoodList(std::vector<Food> foodlist){
    this->foodList=foodList;
}

// accessor 

std::string Meal::getMeal(){
    return mealName;
}
void Meal::setFoodNames(std::vector<Food> foodList){
    for(unsigned i = 0; i<foodList.size();i++){
        this->foodNames.push_back(foodList.at(i).getFood());
    }
}


int Meal::getTotalCal(){ 
    return totalCal;
}
int Meal::getTotalCarbs(){
    return totalCarb;
}
int Meal::getTotalProteins(){
    return totalProtein;
}

// methods

void Meal::calculateTotals(std::vector<Food> foodList){
    for(unsigned i = 0; i<foodList.size();i++){
        totalProtein += foodList.at(i).getProteins();
        totalCarb += foodList.at(i).getCarbs();
        totalCal += foodList.at(i).getCal();

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
    std::cout <<"protien: "<< getTotalProteins() << std::endl;
    std::cout <<"products: ";
    for(unsigned i = 0; i<foodNames.size(); i++ ){
        std::cout << foodNames.at(i);
        if(i+1<foodNames.size()){
            std::cout<<", ";
        }
    }
    std::cout<<std::endl;

}