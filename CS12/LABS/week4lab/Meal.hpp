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
        std::vector<std::string> foodNames;

        int totalCal = 0;
        int totalProtein = 0;
        int totalCarb = 0;

    public:
        //default constructor
        Meal();

        //overloaded constructor
        Meal(std::vector<Food> foodList, std::string mealName);

        // Mutators
        void setMealName(std::string mealName);
        void setFoodList(std::vector<Food> foodlist);
        void operator+(Food foodObj);
        std::ostream& operator<<(Meal mealObj);
        void calculateTotals(std::vector<Food> foodList);
        void setFoodNames(std::vector<Food> foodList);


        // Accessors
        std::string getMeal();
        int getTotalCal();
        int getTotalCarbs();
        int getTotalProteins();
        
};

#endif