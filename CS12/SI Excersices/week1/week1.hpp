
#include <iostream>
#include <string>
using namespace std;
// variables
    //int
    int var1 = 1;
    int var2 = 2;
    //double
    double var_1 = 3.0;
    double var_2 = 4.0;
    // char
    char varChar1 = 'a';
    char varChar2 = 'b';
    // string
    string vs1 = "I love ponies";
    string vs2 = "I hate ponies";


// function 2 stringReverse

string stringReverse(const string &a);

// function that swaps two variables
template<typename swapper>
void varswap(swapper &a, swapper &b){
    swapper c = a;
    a = b;
    b = c;

}