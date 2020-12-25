#include <iostream>




// node struct
struct Node{
    public:
        int data;
        Node* nextNode;
};

// prepend node
void prependNode(Node** head_ref, int data){
    // create new node 
    // if head reference is null, the new node is the head, else move the head_ref address to the new node and have the new node point to the previous head;
    Node* newNode = new Node;
    newNode ->data = data;

    if(*head_ref== nullptr){
        head_ref = &newNode; 
    } else{
        newNode ->nextNode = (*head_ref); 
        *head_ref = newNode;
    }
}
// append node
void appendNode(Node* head_ref, int data){
    // create a new node
    Node* newNode = new Node;
    // transverse the linked list until the next node is null
    Node* ptr = head_ref;
    while(ptr->nextNode !=nullptr){
        ptr = ptr->nextNode;
    }
    ptr->nextNode = newNode;
    newNode-> data = data;
}
// delete first
void deleteFrontNode(Node** head_ref){
    Node* ptr = *head_ref;
    *head_ref = ((*head_ref)->nextNode);
    delete ptr;

    /// GOT STUCK HERE 
  }
// delete last
void deleteLastNode(Node* head_ref){
   // traverse the list until the second to last node
   Node* ptr = head_ref;
   while(ptr->nextNode->nextNode!= nullptr){
       ptr = ptr->nextNode;
   }
   // pointer should be at second to last node
    delete ptr->nextNode->nextNode;
    ptr->nextNode = nullptr;

    
}


// show node
void printList(Node* head_ref){
    // input: linked list
    Node* ptr = head_ref;
    // traverse the array using a pointer that prints until the end i.e. the pointer is null
    std::cout<<"\n";
    
    while(ptr!=nullptr){
        std::cout<< ptr->data << "->";

        ptr = ptr ->nextNode;
    }    
    std::cout<<std::endl;
}

int main( int argc, char** argv){
    Node* linkedList = new Node;
    linkedList -> data = 1;
    printList(linkedList);
    prependNode(&linkedList,0);
    printList(linkedList);
    appendNode(linkedList,2);
    printList(linkedList);
    deleteFrontNode(&linkedList);
    printList(linkedList);
    deleteLastNode(linkedList);
    printList(linkedList);
return 1;
}