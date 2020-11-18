#include <iostream>
using namespace std;

// initialize your variables
string fillInTheBlank = "_____________";
bool _isStoryOver = false; 

// questions
string question1 = "I was born into a "; 
string postQ1 = " family. ";
string question2 = "I saw nothing but ";
string question3 = "They named me ";
string postQ3 = " after the speaker system. ";
string question4 = "We always looked for ";
string postQ4 = " to make money. ";
string question5 = "I never took the time to ask ";
string question6 = "I always said I wanted to be ";
string question7 = "I would rather live in a ";
string question8 = "Money just makes you ";
string question9 = "I am going to be ";
string question10 = "Success is ";
// list of questions
string questions[] = {question1+fillInTheBlank+postQ1, question2+fillInTheBlank, question3+fillInTheBlank, question4+fillInTheBlank+postQ4, question5 + fillInTheBlank, question6 + fillInTheBlank, question7 + fillInTheBlank, question8 + fillInTheBlank, question9+fillInTheBlank, question10+fillInTheBlank};

string correctAns[] = {"poor","light. ","Bose","the hard way","for permission","a millionaire","estate","a more expressive version of yourself","a success","a state of being"};
string wrongAns[] = {"rich","darkness","Sony","the easy way","for forgiveness","normal","a small and warm home","an evil jerk","a loser","a way out"};
string selection[10][2]; //List that will be provided to user [[right,wrong],index]
int answer[10];
void selectionRandomizer(){
    // population the selection list

    for( int j = 0; j< 10; j++){

        int key1 = rand() % 100;
        int key2 = rand()  % 100;
        //cout << key1<<" " <<key2 <<endl;
        // randomly select which goes first;
        if( key1 < key2 ){
            selection[j][0] = correctAns[j];
            selection[j][1] = wrongAns[j];
        }
        else{
            selection[j][0] = wrongAns[j];
            selection[j][1] = correctAns[j];
        }
    }

}

void createFrameOutput(){
    cout << endl;
    for(int j = 0; j<80; j++){
        cout << "#";
    }
    
    cout << endl;
}


int main(){

    // for every question,
    selectionRandomizer();
    for(int i=0; i <=9; i++){
        cout<< questions[i] << endl<<"1) "<< selection[i][0]<<endl<<"2) "<< selection[i][1]<<endl;
        string ans;
        getline(cin, ans);
        answer[i] = stoi(ans);
        
        int trueOrFalse = selection[i][(answer[i] - 1)].compare(correctAns[i]);

        if(trueOrFalse != 0){
            cout<< "Wrong story mate! You lose.... \n";
            return 0;
        }
        

    } 

    createFrameOutput();
    string storyTime = question1+correctAns[0]+postQ1+question2+correctAns[1]+question3+correctAns[2]+postQ3+question4+correctAns[3]+postQ4+ question5+correctAns[4]+question6+correctAns[5]+question7+correctAns[6]+question8+correctAns[7]+question9+correctAns[8]+question10+correctAns[9];
    int charCount = 0;
    for(int count = 0; count<storyTime.size(); count++){
        cout<< storyTime[count]; 
        charCount++;
        if (charCount > 80){
            charCount = 0;
            cout<<endl; 
        }
    }
    createFrameOutput();
    return 0;
}