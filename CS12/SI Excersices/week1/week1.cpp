#include <iostream>
#include "week1.hpp"
/* 
1. Create a function that swaps 2 variables
2. Create a function that reverses a string
3. Create a function that prints out a vector<int> backwards>
*/
using namespace std;
int main(){
    // Function 1

    cout<<var1<<" "<<var2<<endl;
    cout<<var_1<<" "<< var2<<endl;
    cout<<varChar1<<" "<< varChar2<<endl;   
    cout<<vs1<<" "<<vs2<<endl;
    varswap(var1,var2);
    varswap(var_1,var_2);
    varswap(varChar1,varChar2);
    varswap(vs1,vs2);
    cout<< "-----------After Swap Results----------- \n";
    cout<<var1<<" "<<var2<<endl;
    cout<<var_1<<" "<< var2<<endl;  
    cout<<varChar1<<" "<< varChar2<<endl;   

    cout<<vs1<<" "<<vs2<<endl;
    // // function 2
    cout<<"---------------------------- "<<endl;


    cout<<stringReverse(vs1)<<endl;
    return 0;
}