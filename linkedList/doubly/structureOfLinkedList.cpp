#include <iostream>
using namespace std;
struct Node{
    int Data;
    Node* prev;
    Node* next;
    // constructor
    Node(int data){
        this->Data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
//! print the node of the doubly linked list
void printNode(Node* &head){
    if(head == NULL){
        cout<<"sorry node are not avialable in the doubly linked list"<<endl;
        return;
    }
    cout<<"NULL <==> ";
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->Data<<" <==> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}

int main(){

    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;  
    printNode(head);  
}