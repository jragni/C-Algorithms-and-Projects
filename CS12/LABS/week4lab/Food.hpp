#ifndef FOOD_HPP
#define FOOD_HPP
#include <string>

class Food{
    private:
        //attributes 
        std::string foodName;
        int cal;
        int proteins;
        int carbs;
 
    public:
        // default constructor
        Food(){}
        // overloaded constructor
        Food(std::string foodName, int cal, int proteins, int carbs);
        // mutators
        void setFood(std::string food);
        void setCal(int cal);
        void setProteins(int proteins);
        void setCarbs(int carbs);
        // accessors
        std::string getFood();
        int getCal();
        int getProteins();
        int getCarbs();
        

};


#endif
