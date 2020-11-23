#include "lab3program1.hpp"

/*
Create a class ‘Avenger’ which has the following attributes:

    name
    age
    arsenal (a list of all usable weapons)

And can perform the following operations:

    set name and corresponding getter
    set age and corresponding getter
    add weapon to arsenal
    remove weapon from arsenal
    display arsenal

And of course don’t forget the default constructor and a constructor that accepts name and age.
*/



int main(int argc, char* argv[]){


    Avenger Hulk("Hulk", 22, {"Hulk Buster","pew pew","Pistol","Shield"});

    Hulk.displayArsenal();
    Hulk.removeWeapon("Pistol");
    Hulk.displayArsenal();

    return 0;
}