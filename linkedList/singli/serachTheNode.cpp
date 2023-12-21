#include <iostream>
using namespace std;
struct Node{
    
    int Data;
    Node* next;

    // constructor 
    Node(int data){
        this->Data = data;
        this->next = NULL;
    }

    // distructor of the linkedList
    ~Node(){
        cout<<"the memory for the node:- "<<this->Data<<" is now deleted "<<endl;
    }
};

// insert at the beginning of the linkedList;
Node* insertAtBeginning(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
    }else{
        newNode->next = head;
        head = newNode;
        return head;
    }
    return head;
}

// insert at any position on the linked list
Node* insertAtAnyPosition(Node* &head, int data, int position){
    if(position == 1){
        return insertAtBeginning(head, data);
    }
    int counter = 1;
    Node* temp = head;
    while(counter != position-1 && temp->next != NULL){
        counter++;
        temp = temp->next;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

//! find the node in the linkedlist 
void findTheNode(Node* &head, int data){
    if(head == NULL){
        cout<<"linked list is empty so we can't find the node :- "<<endl;
        return;
    }
    Node* temp = head;
    int counter = 0;
    while(temp != NULL){
        counter++;
        if(temp->Data == data){
            cout<<"the node is found in the linkedList at position:- "<<counter<<endl;
            return;
        }
        temp = temp->next;
    }
    return; 
} 

// printall Node of the linkedList of the give node value 
void printNode(Node* &head){
    if(head == NULL){
        cout<<"the given linkedlist is empty ;--) "<<endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->Data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    insertAtAnyPosition(head, 50, 1);
    insertAtAnyPosition(head, 40, 2);
    printNode(head);
    findTheNode(head, 30);
    return 0;
}