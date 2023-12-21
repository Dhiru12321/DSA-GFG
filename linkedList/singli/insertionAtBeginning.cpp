#include <iostream>
using namespace std;
struct Node{
    int Data;
    Node* next;

    Node(int data){
        this->Data = data;
        this->next = NULL;
    }
};

// insert at beginning of the linekd list
Node* insertAtBeginning(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return newNode;
}

// print linkedlist node
void printNode(Node* &head){
    if(head == NULL){
        cout<<"the linkedlist is empty"<<endl;
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
    printNode(head);
    return 0;
}