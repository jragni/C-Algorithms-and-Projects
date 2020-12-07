#include <iostream>
#include "Food.hpp"
#include "Meal.hpp"

/* create a meal planner program that has the classes of food and meals 

Create a program with the following classes and attributes:

    Food
        name of food
        calories
        protein
        carbs
    Meal
        vector of food
        name of meal
        total calories
        total protein
        total carbs

Each class should have its own .cpp and header files. Define the default constructor for each class and one other constructor with your choice of parameters.
*/

using namespace std;

int main(int argc, char** argv){
    Food apple("apple",200,1,15);
    Food sandwich("sandwhich",200,20,35);
    std::vector<Food> fl = {apple, sandwich};
    Meal lunch(fl,"lunch");
    cout<< lunch.getTotalCal();
    lunch << lunch; 
}