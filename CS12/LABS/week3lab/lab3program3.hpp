#include <iostream>
#include <fstream>
#include <vector>
#include <string>


class Car{
    public:
        // default constructor
        Car();
        // overloaded constructor
        Car(std::string aMake, std::string aModel, std::string aType, int aYear, int milesDriven);

        // Mutators
        void setYear();

        void setMakeAndModel();

        void setMilesDriven();

        void setType();
        
    

    private:
        int year;
        std::string make;
        std::string model;
        int milesDriven;
        std::string type; 

};