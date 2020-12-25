/* Write a recursive function that returns the number of 1 in the binary representation of N

*/

#include <iostream>
#include <string>
int count;

int binaryRepresentation(int num){
    if(num == 0){
        return 0;
    }else if( num == 1){
        count++;
        return count;
    }else if(num % 2 == 0){
        return binaryRepresentation(num/2);
    }else if(num % 2 == 1){
        count++;
        return binaryRepresentation(num/2 );
    }else{
        return count;
    }
}

int main(int argc, char** argv){
    std::cout << binaryRepresentation(1)<< std::endl;
    count = 0;
    std::cout << binaryRepresentation(48)<<std::endl;
    count = 0;
    std::cout << binaryRepresentation(3)<<std::endl;

}