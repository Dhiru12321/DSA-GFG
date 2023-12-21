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

// insert at the beginning of the linkedList
Node* insertAtBeginning(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return head;
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        newNode->next->prev = newNode;
    }
    return head;
} 

//! insert at any position of the linkedList
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

// print the node of the linkedList
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
    Node* head1 = NULL;
    head->next = head1;
    head1->prev = head;
    head = head1;
    return head;
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    cout<<"the linked list node are:- "<<endl;
    printNode(head);
    insertAtAnyPosition(head, 60, 2);
    printNode(head);    

    return 0;
}
