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

// delete the firest node of the linkedlist
Node* deleteAtFirst(Node* &head){
    if(head == NULL){
        cout<<"the linkedlist is empty"<<endl;
        return NULL;
    }
    if(head->next == NULL){
        delete(head);
        cout<<"hence the linkedlist hase only one node "<<endl;
        return NULL;
    }
    else{
        Node* temp = head->next;
        delete(head);
        head = temp;
        return head;
    }
}

//! delete the last Node of the linkedlist
Node* deleteLastNode(Node* &head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete(head);
        return NULL;
    }
    Node* curr = head;
    while(curr->next->next != NULL ){
        curr = curr->next;
    }
    delete(curr->next);
    curr->next = NULL;
    return head;    
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
    deleteAtFirst(head);
    printNode(head);
    // !delete at the last node
    deleteLastNode(head);
    printNode(head);
    return 0;
}