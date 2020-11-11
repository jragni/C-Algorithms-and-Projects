#include <iostream>
#include <string>
//function that reverses a string
using namespace std;

string stringReverse(const string &a){
   string b;
   for(int i = 0; i<=a.size(); i++){
       b+=a[a.size()-i];
   } 
   return b;
}