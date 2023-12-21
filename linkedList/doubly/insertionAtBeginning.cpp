#include <iostream>
using namespace std;
struct Node{
    int Data;
    Node* next;
    Node* prev;
    // constructor
    Node(int data){
        this->Data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
//! insert the new Node at the beginning of the linkedList
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

// printing the node of the linked list
void printNode(Node* &head){
    if(head == NULL){
        cout<<"the linkedList in empty ;-)"<<endl;
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
    return 0;
}