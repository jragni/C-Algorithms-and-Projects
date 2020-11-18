/*
Exercise 4
Write a program to perform modulus between two floating-point values. The modulus operator % will not work on doubles. Do not use fmod from the cmath library (although you can use it to verify your results). Do not worry about negative values or modding by 0.
Examples:

    Enter the dividend: 23.4
    Enter the divisor: 3.2
    23.4 % 3.2 == 1
    Enter the dividend: 54.7
    Enter the divisor: 3.14
    54.7 % 3.14 == 1.32

    For two positive integers N (numerator) and D (denominator),
    N can be expressed as D*m + R.
    m is some integer multiple of D.
    R is the remainder of the division between N and D.
    R = N - D*m
    R and m are unknowns in this equation.
    Find m to solve for R.

*/


#include <iostream>
using namespace std;


float den, num, r,m;

int main(){
    cout <<"Enter the dividend: ";
    cin >> num;
    cout << endl;
    cout << "Enter the divisor: ";
    cin >> den;
    cout << endl;

    // R = num - den*m
    for(int m = 0; m < INT32_MAX; m++){
        if(num - den*m < 0){
            cout<< num << " % " << den << " == " << num-(den*(m-1));
            return 0;
        }
    }
    // number is divded by 0

    return 0;
}