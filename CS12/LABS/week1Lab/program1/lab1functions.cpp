#include "lab1.hpp"
#include <iostream>
#include <vector>
using namespace std;


bool isPrime(int n){
    // check for range
    if(n>100 || n<0){
        cout<< "Number out of range";
        return false;
    }
    // criteria for list of prime number from 0 to 100
    if(n<=3){
        return true;
    }else{
        // if the number is divisible by any number up until n, it is not a prime
        for(int i = 2;i<n; i++){
            if(n%i == 0){
                return false;
            }
        }
    }
    return true;
}

void printPrimes(int n){
    // check if it is prime
    if(isPrime(n)){
        for(int i = 2; i<=n; i++){
            // if number is prime print
            if(isPrime(i)){
                cout<<i<<endl;
            }
        }
    }else{
        cout<<endl<<"Not a prime Number";
    }
}