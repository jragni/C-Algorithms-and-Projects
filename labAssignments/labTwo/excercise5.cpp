// Exercise 5 (advanced)
// Use modulus and division to print the binary value of a character.

// Example:

// Enter a character: c
// 'c' in binary is 01100011.

#include <iostream>
#include <vector>
using namespace std;

 

int main(){

    char input, inputInt;
    int i=0;
    vector<int> ans;  
    // Obtain user input
    cout <<"Enter a character: ";
    cin >> input;
    // get integer value of user input 
    inputInt = input;
     

    while(inputInt > 0){
        ans.push_back(inputInt%2);
        inputInt = inputInt/2;

    }
    printf("%c in binary is ", input);
    // from end of vector to beginning
        // print element
    
    for(auto i =ans.crbegin(); i != ans.crend(); i++){
       cout<< *i ;
    }
    return 0;
}