/* 
Get a character from the user, and display its integer equivalent.
If it is a letter, print the opposite case.
Additionally, print the integer equivqalent of the opposite case if applicable.
*/
#include <typeinfo>
#include <iostream>
using namespace std;
char input;
int main(){

    cout << "Input a characater: ";
    cin >> input; 
    if(input >= 48 && input <=57){
        printf("The decimal value of %c is %d", input, input);
    }
    if(input >= 65 && input<= 90){
        int lower = input + 32;
        printf("The decimal value of %c is %d \n The decimal value of %c is %d",input,input,lower, lower);

    }
    if(input>=97 && input <= 122){
        int upper = input - 32;
        printf("The decimal value of %c is %d \nThe decimal value of %c is %d",input,input,upper, upper);

    }
    // characters for alphabet upper case 65-90 , lower 97-122 case, numbers 48-57
    
    return 0;
}

