#include <iostream>
#include "lab1prog3.hpp"

// program that takes two strings and checks if it is an anagram

int main(){

    std::string a = "poop";
    std::string b = "oppo";

    std::cout<<std::endl<< isAnagram(a,b) << std::endl;

    return 0;
}