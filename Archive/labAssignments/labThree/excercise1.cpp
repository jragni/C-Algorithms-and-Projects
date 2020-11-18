/*
Exercise 1
---

Take in a number from the user (between -50 and 50) then output between which multiples of 10 the number is between and whether it is positive or negative.
If the number is 0, simply output that the number was 0. 
If the number is a multiple of 10, output that the number was a positive/negative multiple of 10. 
If the number is not between -50 and 50, inclusive, then do nothing.
*/

#include <iostream>
using namespace std;

int input;

int main(){
    // get user input
    cout <<"Input a number between -50 and 50: ";
    cin >> input;

    if(input < -50 || input > 50){
       cout <<  "Number is not between -50 and 50. Inconclusive....";
    }
    else if(input == 0){
        cout <<endl<< "The number is 0.";
    }
    else if(input % 10 == 0){
        // Check to see if multiple of 10
            // check to see if positive
        if(input > 0){
            cout<< endl<<"Your number is a positve multiple of 10";
        }
        else{
            cout<< endl<<"Your number is a negative multiple of 10 ";
        }
    }else{
        //if positive
        if(input > 0){
            cout<<"Your number is positive between " << ((input/10))*10 << " and "<< ((input/10)*10)+10; 
        }
        else{
            cout<<"Your number is negative between " << ((input/10)*10)-10<< " and " << ((input/10)*10);
        }
    }

    return 0; 
}
