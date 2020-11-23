#include <string>
#include <limits.h>
#include <iostream>
#include <vector>

struct Weapon{
    int damage;
    int durability;
    std::string name;
};  


class Avenger{

    private:
        std::string name;
        std::vector<Weapon> arsenal;
        int age;

    public:

        //default constructor
        Avenger();
        // overload constructor with name, age, and arsenal input
        Avenger(std::string avengerName, int avengerAge);
        
        // overload operator for sorting
    
        bool operator < (Avenger obj) {
            return (getAge() < obj.getAge());
        }


        //MUTATOR 

        // method to set name
        void setName(std::string aName);

        // method to set age
        void setAge(int aAge);

        // method to set arsenal
        void setArsenal(std::vector<std::string> aWeapon);


        // method to add weapon to arsenal to pre existing arsenal list
        void addWeapon(Weapon weapon);

        // method to remove weapon from arsenal
        void removeWeapon(std::string weapon);

        // method to display arsenal 
        void displayArsenal();

        // ACCESSOR 
        std::string getName();

        int getAge();

};

