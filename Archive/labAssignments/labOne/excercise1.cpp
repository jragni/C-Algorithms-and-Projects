// Write a story!

// Get into groups, and spend 10-15 minutes creating a story.

// * What do we see when we're introduced to the world?
// * Who's around?
// * Why are things the way they are?

// Make sure to leave holes in the story for character names, special objects, and the like.
// Then, write a program asking the user for this information!
// Use that information to tell the story you've come up with.

// Make sure no single line of code is longer than 80 characters!
// Also, some output formatting would be nice.
// Start a new line after every sentence!

// If you want a challenge, start a new line every 80 *output* characters
// (notice that output characters don't necessarily line up with the code).

#include <iostream>
using namespace std;

void createFrameOutput(){
    cout << endl;
    for(int j = 0; j<80; j++){
        cout << "#";
    }
    
    cout << endl;
}

void createStory(){
    string intro = "When we come into the world, we see nothing but ";
    string what;
    string who;
    string why;
    string midStory = "We see everything because ";
    string afterStory = "came into existence." ; 
    string explantation = " is why everything exists!";

    cout << intro << endl;
    cin >> what;
    cout << midStory + "_____" +  afterStory << endl;
    cin >> who ;
    cout << "____" + explantation << endl;
    cin >> why ;    
    string storyTime = intro + what + ". " + midStory + who + " " + afterStory + " "+ why + explantation;
    // print each char in the string, if char count is 80  end line, reset char cout
    int charCount = 0;
    createFrameOutput();
    for(int i = 0; i < storyTime.size();i++){
        charCount++;
        if(charCount > 80){
            cout << endl;
            charCount = 0;
        }
        cout << storyTime[i];
    }
    createFrameOutput();
}

int main(){

    
    createStory();

    return 0;
}