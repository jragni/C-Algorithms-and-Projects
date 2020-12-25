#include <iostream>

/* Code that implements functions for linked lists as review*/

struct Node{
    int data;
    Node* nextNode = nullptr;
};


void printList(Node* head){
    Node* ptr = head; 
    // while not at the end print out data
    std::cout << "\n";
    while(ptr->nextNode != nullptr){
        std::cout << "-> "<< ptr->data;
        ptr = ptr->nextNode;
    }
    std::cout<< std::endl;
}

void insertNodeBack(int data, Node* head){
    // inputs: data, pointer of head of node

    // traverse the list while next node is not null
    // add tail to node 
    Node* ptr = head; 
    Node* newNode = new Node();
    while(ptr->nextNode != nullptr){
        ptr = ptr->nextNode;
    }
    // link node added to pointer
    ptr ->nextNode = newNode;
    newNode -> data = data;

}

void insertNodeFront(int data, Node** head){
    // input: data to be added, pointer to the address of the pointer head
    // create a new node 
    
    Node* newNode = new Node;
    newNode->data = data;
    // have new node point to head
    if(head == nullptr){
        *head = newNode;
    }else{
        newNode ->nextNode = (*head);
        *head = newNode; 
    }
}

void deleteNodeFront(Node** head){
    // create node of current head
    Node* ptr = *head;
    *head = ((*head)->nextNode);

    delete ptr;
    
} 
void reverseList(Node** head){
    // add every node to the front as we traverse list
  
   Node* curr = *head;
   Node* prev = nullptr;
   Node* next = nullptr;

    while(curr!= nullptr){
        // next = current -> next
        // current -> next = prev;
        // current = next
        next = curr;
        (curr) -> nextNode = prev;
        curr = next;

    }
    
    *head = prev;
}



int main(int argc, char** argv){
    srand(time(NULL));
    int num;  
    Node* list = new Node;
    list -> data = 0;
    for(int i = 1; i<10; i++){
        num =rand() %20 +1 ;

        insertNodeBack(num,list);
        printList(list);
    }
    std::cout << "\n -------------- \n";
    insertNodeFront(-1, &list);
    printList(list);
    std::cout << "\n -------------- \n";

    deleteNodeFront(&list);
    printList(list);
    std::cout << "\n -------------- \n";
    reverseList(&list);
    printList(list);
    return 1;
}

