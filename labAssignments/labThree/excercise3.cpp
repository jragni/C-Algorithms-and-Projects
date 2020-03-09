// Exercise 3
// ---
// Create a password guessing game where a user attempts to break your passcode based on hints.
// Using 4 integers, decide the relationship (less than, greather than, equal to, twice as much, etc)
// between any number of your integers. These relationships is what defines your passcode.
// For example, my passcode could be:
// num1 has to be greather than num2, num2 has to be less than num3 and num3 has to be equal to num4.
// The user is then prompted to enter 4 numbers and told whether each number fits your specifications
// or does not. A message is then prompted saying whether the user failed or succeeded.

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

// initialize global variables
string _userGuess;   // user input
bool _isCorrect = false;  // flag for loop to continue to repeat while user guesses incorrectly
vector<int> password;
bool _passwordCorrect[4] = {false,false,false,false}; // flags for user password guess; true == correct, false == incorrect 
bool _isNum[4] = {false,false,false,false}; // check to see if user input is a number  



void generateRandomPW(){
    // seed random
    srand(time(0));
    cout << "working"<<endl;
    // generate a random password
    for(int i = 0; i < 4; i++){
        password.push_back(rand()%10);
    }
    ///// uncomment to see password for troubleshooting
    // for(auto i = password.cbegin(); i != password.cend(); i++){
    //     cout << *i;
    // }
    cout<<"--------------------------------------Guess the Password!-------------------------------------------------------"<< endl;

}


void passwordCheck(){
    // get user input
    cout<<"Please input password guess [4 numbers]:  ";
    cin >> _userGuess;
    // check for size and char;
    while( _userGuess.size() != 4 && _isNum[0] != true && _isNum[1] != true && _isNum[2] != true && _isNum[3] != true){
        cout<<"Please input integer password guess: ";
        cin >> _userGuess;
        for(int i = 0; i < 4; i++){
            if( _userGuess[i] < 48 +'0' &&  _userGuess[i] > 57+'0' ){
                // check if guess is not a number
                cout<< "Guess is not a number! " << endl;
                _isNum[i] = false;
            }
            else{
                _isNum[i] = true;
            }
    }
    
    }
    cout << endl << "Your guess is "<< _userGuess << endl;
}


void userFeedback(){

    while(_isCorrect != true){
        
        // for each element in the string, 
        for(int i = 0; i<4; i++){
            // check for match
            if( _userGuess[i] == password[i] + '0'){
                cout << "Your "<< i + 1 << " digit guess is correct"<< endl;
                _passwordCorrect[i] = true; // change digit flag to true
            }
            else{
                if( _userGuess[i] > password[i]+'0'){
                    //if high, print higher
                    _passwordCorrect[i] = false;  // update flag if user changes guess or if incorrect from correct.
                    cout << "Incorrect guess, your "<< i+1 << " digit is too high" << endl;
                }
                else if(_userGuess[i]< password[i]+'0'){
                    _passwordCorrect[i] = false;
                    //if low, print lower
                    cout << "Incorrect guess, your "<< i+1 << " digit is too low" << endl;
                }
            }
            
        }

        // if all 4 digit guesses are correct break
        if( _passwordCorrect[0] == true && _passwordCorrect[1] == true && _passwordCorrect[2] == true && _passwordCorrect[3] == true){
            _isCorrect = true;
        }
        // restart the input process88
        else{
            passwordCheck();
        }
    }
}


int main(){
   
    // generate random password
    generateRandomPW();
    // check if user input is correct 
    passwordCheck();
    // user feedback
    userFeedback();
    // upon correct guess
    cout << "You have correctly guessed the password!";
    return 0;
}

