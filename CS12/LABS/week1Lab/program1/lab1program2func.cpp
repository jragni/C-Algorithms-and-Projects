#include <string>
#include <iostream>
using namespace std;
bool isPalindrome(const string &s){

    for(int i = s.size()-1; i>=0 ; i--){

        
        if(s[i] != s[s.size()-i-1]){
            return false;
        }
    }
    return true;
}

bool isPalindrome(int s){
    string new_s = to_string(s);
    return isPalindrome(new_s);
}