#include<iostream> 

/* intro to linked lists */ 

struct Block{
    public:
        int val;
        Block* next;
        Block(int val): val(val), next(nullptr){};
};


void addBlock(Block* start, int val) {
    Block* headTemp = start;
    Block* newBlock = new Block(val);
    // traverse the list until we reach a nullptr at the end
    while(headTemp->next != nullptr){
        headTemp = headTemp->next;
    }
    headTemp ->next = newBlock;
    newBlock ->next = nullptr;

}

void printBlockChain(Block* b) {
    Block* headTemp = b;

    while(headTemp->next!=nullptr){
        std::cout << headTemp -> val<< " ";
        headTemp = headTemp ->next;
    }
}

//remove last
void removeLastBlock(Block* b) {
    // we want to delete the connection to the last node, so it is 2 away from the nullptr
    Block* current = b;
    Block* previous =nullptr;
    while(current->next != nullptr){
       previous = current;
       current = current->next; 
    }
    previous->next = nullptr;
    delete current;

    
}

int main() {
    Block* genesis = new Block(3);
    addBlock(genesis,5);
    addBlock(genesis,8);
    addBlock(genesis,10);
    addBlock(genesis,3);
    printBlockChain(genesis);
    std::cout<<"\n------------\n";
    removeLastBlock(genesis);
    printBlockChain(genesis);
    // do more testing here
    
    return 0;
}