#include "lab3program1.hpp"
#include <vector>
#include <algorithm>

int main(int argc, char* argv[]){
    std::vector<Avenger> avengers;
    Avenger Cap("Steve Rogers", 100);
    Avenger iMan("Anthony/Tony Stark", 52);
    Avenger bWidow("Nat", 33);
    Avenger Hulk("Bruce Banner", 50 );
    Avenger Thor("Thor Odinson", 34);
    Avenger Hawkeye("Clint Barton", 47);
    Avenger Vision("J.A.R.V.I.S",2 );
    Avenger sWitch("Wanda Maximoff", 28 );
    Avenger bPanther("T'Challa", 42 );
    Avenger antMan("Scott Lang", 48 );
    Avenger spiderMan("Peter Parker", 21); //The actor is one month older exactly than Andre!
    Avenger starLord("Peter Quill", 38 );
    Avenger omarvelous("Omar ", 20); 
    Avenger andreKhastro("Andre ", 21); 

    avengers = {Cap,iMan,bWidow,Hulk,Thor,Hawkeye,Vision,sWitch,bPanther,antMan,spiderMan,starLord,omarvelous,andreKhastro};

    std::sort(avengers.begin(),avengers.end());
    for(unsigned i = 0; i<avengers.size();i++){
        std::cout<< "Name: "<<avengers.at(i).getName()<< " Age: " << avengers.at(i).getAge()<<std::endl;
    }
    return 0;
}