#include <iostream>
#include <vector>
#include "lab3program1.hpp"
#include <string>

//weapon list
Weapon Hulk_Buster = {9000,50, "Hulk Buster"};
Weapon Mjolnir     = {5000,200,"Mjolnir"};
Weapon Pistol      = {10,  100,"Pistol"};
Weapon Lightsaber  = {50,  5,  "Lightsaber"};
Weapon Arrow       = {20,  10, "Arrow"};
Weapon Taser 	   = {60,  10, "Taser"};
Weapon Shield      = {100, INT_MAX,"Shield"};
Weapon Sling_Ring  = {1000,5,  "Sling Ring"};
Weapon Ants        = {100, 10, "Ants"};

//stones
Weapon Mind_Stone    = {10000,INT_MAX,"Mind Stone"};
Weapon Time_Stone    = {10000,INT_MAX,"Time Stone"};
Weapon Space_Stone   = {10000,INT_MAX,"Space Stone"};
Weapon Reality_Stone = {10000,INT_MAX,"Reality Stone"};
Weapon Power_Stone   = {10000,INT_MAX,"Power Stone"};
Weapon Soul_Stone    = {10000,INT_MAX,"Soul Stone"};

std::vector<Weapon> weaponsList = {Hulk_Buster,Mjolnir,Pistol,Lightsaber,Arrow,Taser,Shield,Sling_Ring,Ants};

// Avenger Class Functions


Avenger::Avenger(std::string avengerName, int avengerAge){
           
    //set name 
    setName(avengerName);
    std::cout << name<< " has been added to the Avengers. \n";
    
    //set age
    setAge(avengerAge);
        
}

void Avenger::setName(std::string aName){
    name = aName;
}

std::string Avenger::getName(){
    return name;
}

int Avenger::getAge(){
    return age;
}

void Avenger::setAge(int aAge){
    age = aAge;
}

void Avenger::addWeapon(Weapon aWeapon){
    arsenal.push_back(aWeapon);
    std::cout << aWeapon.name << " has been added to "<< name << "'s arsenal. \n";
}

void Avenger::setArsenal(std::vector<std::string> aWeapon ){
    // input: vector of [string] weapon name

    //NOTE: Still needs a way to inform user that a weapon was not added


    for(unsigned i = 0; i < weaponsList.size(); i++){
        for(unsigned j = 0; j< aWeapon.size(); j++){
            if( weaponsList.at(i).name == aWeapon.at(j) ){
                addWeapon(weaponsList.at(i));
            }
        }
    }

    
}

void Avenger::removeWeapon(std::string weapon){
    
    for(unsigned i = 0; i<arsenal.size(); i++){
        if(arsenal.at(i).name == weapon){
            arsenal.erase(arsenal.begin()+i);
            std::cout << weapon << " has been removed from "<<name<<"'s arsenal. \n";
        }
    }
}


void Avenger::displayArsenal(){

    for(unsigned i = 0; i<arsenal.size(); i++){
        std::cout<< arsenal.at(i).name<<std::endl;
    }
}

