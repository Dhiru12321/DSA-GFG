#include <iostream>
using namespace std;

struct Node{
    int Data;
    Node* prev;
    Node* next;
    Node(int data){
        this->Data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// insert at any position of the linkedList
Node* insertAtAnyPosition(Node* &head, int data, int pos){
    if(pos < 1){
        cout << "Invalid position." << endl;
        return head;
    }

    Node* newNode = new Node(data);
    int count = 1;
    Node* temp = head;

    while(temp != NULL && count != pos-1){
        count++;
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {  // Position is at the end or beyond the list
        if (temp != NULL)
            newNode->prev = temp;
        if (temp != NULL && temp->prev != NULL)
            temp->prev->next = newNode;
        else
            head = newNode;
    }
    else {  // Insert at the specified position
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }

    return head;
}

//! reverse the linkedList
Node* reverseTheLinkedList(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev; 
}

// print the node of the linkedList
void printNode(Node* &head){
    if(head == NULL){
        cout<<"the linkedList is empty"<<endl;
        return;
    }
    Node* temp = head;
    cout<<"NULL <==>";
    while(temp != NULL){
        cout<<temp->Data<<" <==> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    insertAtAnyPosition(head, 10, 1);
    insertAtAnyPosition(head, 20, 2);
    insertAtAnyPosition(head, 30, 3);
    insertAtAnyPosition(head, 100, 2);
    cout<<"the linked list node are:- "<<endl;
    printNode(head);
    return 0;
}