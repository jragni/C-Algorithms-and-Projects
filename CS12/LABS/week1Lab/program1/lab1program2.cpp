#include <iostream>
#include "lab1program2.hpp"
#include <vector>
using namespace std;
/*
Write a program that tests whether a string or int is a palindrome

*/

int main(){

    string s = "racecar";
    int num = 123454321;
    cout<< isPalindrome(s)<<endl;
    cout<< isPalindrome(num)<<endl;
    return 0;
}