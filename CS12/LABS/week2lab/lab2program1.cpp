#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/* Write a program that prints all of the command line arguements that are passed */

int main(int argc, char* argv[] ){
    // for the data in command line
    cout<< argc << endl;
    for(int i = 1; i< argc; i++ ){
        cout << argv[i]<< endl;
    }

    return 0;

}