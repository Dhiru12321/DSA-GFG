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

// insert at the beginning of the linkedListod
Node* insertAtBeginning(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
    return head;
}

// insert at the end of the linkedList
Node* insertAtEnd(Node* &head, int data){
    Node* temp = new Node(data);
    if(head == NULL){
        return temp;
    }
    
    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = temp;
    return head;
}

// printing the node of the linkedlist
void printNode(Node* &head){
    if(head == NULL){
        cout<<"linkedList is empty"<<endl;
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
    // insertion at beginning
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    printNode(head);
    cout<<endl;
    // insertion at end 
    insertAtEnd(head, 30);
    insertAtEnd(head, 30);
    printNode(head);
    cout<<endl;

    return 0;
}