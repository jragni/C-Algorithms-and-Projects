#include <iostream>
#include<locale>

using namespace std;

int main(){
    // get 5 character word from user. Use "proper Capitalization"
    string userInput;
    cout << "Please input a word with no more than 5 characters: ";
    cin >> userInput;
    if(userInput.size()>5){
        cout<<"String is too long, try again... Terminating Program";
        return 0;
    }
    userInput[0] = toupper(userInput[0]);
    for(int i = 1; i<userInput.size(); i++){
        userInput[i]=tolower(userInput[i]);
    }

    cout<<userInput;
    return 0;
}