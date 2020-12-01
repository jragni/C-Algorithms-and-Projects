#include <iostream>
#include <fstream>
#include <vector>
#include <string>



class Car{
    public:
        // default constructor
        Car();
        // overloaded constructor
        Car(std::string &aMake, std::string &aModel, std::string &aType, int &aYear, int &milesDriven);

        // Mutators
        void setYear(int year);

        void setMakeAndModel(std::string make, std::string model);

        void setMilesDriven(int mileage);

        void setType(std::string type);
        

    private:
        int year;
        std::string make;
        std::string model;
        int milesDriven;
        std::string type; 

};


void askUser(std::vector<Car> &carsList);