#ifndef LAB3PROGRAM3_H
#define LAB3PROGRAM_H

#include <vector>
#include <string>



class Car{

private:
    // data
    std::string make;
    std::string model;
    std::string type;
    int year;
    int mileage;

public:
    //default constructor
    Car();

    //overloaded Constructor
    Car(std::string aMake, std::string aModel, std::string aType, int aYear, int aMileage);

    // mutators/setters
    void setMake(std::string aMake);
    void setModel(std::string aModel);
    void setType(std::string aType);
    void setYear(int aYear);
    void setMileage(int aMileage);
    // getters
    std::string getMake();
    std::string getModel();
    std::string getType();
    int getYear();
    int getMileage();

};

void askUser(std::vector<Car> &list);

#endif