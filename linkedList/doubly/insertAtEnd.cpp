#include <iostream>
using namespace std;
struct Node{
    int Data;
    Node* next;
    Node* prev;
    // constructor the node of the linkedlist 
    Node(int data){ 
        this->Data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    // distructor of the linkedList
    ~Node(){
        cout<<"the memory of the node is now free:- "<<this->Data<<endl;
    }
};

// insert the beginning of the linkedList
Node* insertAtBeginning(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        newNode->next->prev = newNode;
    }
    return head;
}
//! insert at the end of the linkedList 
Node* insertAtEnd(Node* &head, int data){
    Node * newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return head;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
    return head;
}

// printing the node of the linkedList
void printNode(Node* &head){
    if(head == NULL){
        cout<<"the linkedList is empty ;-) "<<endl;
        return;
    }
    Node* temp = head;
    cout<<"NULL <==> ";
    while(temp != NULL){
        cout<<temp->Data<<" <==> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){

    Node* head = NULL;
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    cout<<"the linked list node are:- "<<endl;
    printNode(head);
    insertAtEnd(head, 60);
    printNode(head);

    return 0;
}