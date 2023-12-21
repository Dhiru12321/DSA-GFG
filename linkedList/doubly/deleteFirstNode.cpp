#include <iostream>
using namespace std;
struct Node{
    int Data;
    Node* prev;
    Node* next;
    Node(int data){
        this->Data = data;
        this->next = NULL;
        this->prev = NULL;
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

//! delete the first node of the linked list;
Node* deleteFirstNode(Node* &head){
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

// print the Node of the linkedList 
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
    insertAtAnyPosition(head, 10, 1);
    insertAtAnyPosition(head, 20, 2);
    insertAtAnyPosition(head, 30, 3);
    insertAtAnyPosition(head, 100, 2);
    cout<<"the linked list node are:- "<<endl;
    printNode(head);
    return 0;
}