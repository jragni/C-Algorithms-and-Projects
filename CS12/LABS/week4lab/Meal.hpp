#ifndef MEAL_CPP
#define MEAL_CPP
#include <vector>
#include <string>
#include "Food.hpp"

class Meal{
    private:
        // attributes
        std::vector<Food> foodList;
        std::string mealName;
        int totalCal;
        int totalProtein;
        int totalCarb;

        void calculateTotals(std::vector<Food> &list);

    public:
        //default constructor
        Meal(){}

        //overloaded constructor
        Meal(std::vector<Food> foodList, std::string mealName);

        // Mutators
        void setMealName(std::string mealName);
        
        void operator+(Food foodObj);
        std::ostream& operator<<(Meal mealObj);

        // Accessors
        std::string getMeal();
        int getTotalCal();
        int getTotalCarbs();
        int getTotalProteins();
        std::vector<std::string> getFoodList();
};

#endif