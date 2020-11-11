#include <iostream>
#include <string>
#include <vector>
#include "lab1.hpp" 

int main(){
    int num;
    int num2;
    std::cout<<"Enter a number from 0 to 100: ";
    std::cin >> num;
    std::cout << std::endl << isPrime(num)<<std::endl;

    std::cout << "Enter a number: ";
    std::cin>> num2;
    printPrimes(num2);
}