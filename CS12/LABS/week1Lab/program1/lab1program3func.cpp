#include <iostream>
#include <string>
#include <vector>
#include <map>
#include<bits/stdc++.h> 
using namespace std;



// SOLUTION A 
bool isAnagram(const string &a,const string &b){
    // Check criteria for anagram 

    //Anagram must be same length
    if(a.size() != b.size()){
        return false;
    }
    
    // sort letters for comparison of each strin
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // because it is the same length, we can use same size 

    for(int i = 0; i<a.size(); i++){
        if(a[i]!=b[i]){
            return false;
        }
    }

    return true;
}







// SOLUTION B (try hard, but i learned how to use maps out of it)

/// Will improve on future iteration
void letterCount(const string &a){
    // input: string
    // output: letter count for each letter 

    map< char, int> letterCountDict;  // Dictionary 
    map<char, int>::iterator iter;  // iterator for dictionary
    pair<char, int> key;

    // for each letter in word
        // if letter is in dictionary, add count
        // else add letter to dictionary 

    for(int i = 0; i < a.size(); i++){
        char currentLetter = a[i];
        
        // check if current letter is in dictionary 
        iter = letterCountDict.find(currentLetter);
        
        // if currentletter is found iterate count
        if(iter != letterCountDict.end() && iter->second != 0 ){
            iter->second ++ ;
        }else{
            key.first = currentLetter;
            key.second = 1;
            letterCountDict.insert(key);
        }
    }
    
     
}
