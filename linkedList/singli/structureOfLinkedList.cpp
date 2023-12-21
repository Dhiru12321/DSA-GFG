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
// ! for iterative printing the node of the linkedlist
void printNode(Node* &head){
    if(head == NULL){
        cout<<"linkedlist is empty ;-)"<<endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->Data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

// ! for the recursive printing the node of the linkedlisd
void printNodeRecursive(Node* &root){
    if(root == NULL){
        cout<<"NULL"<<endl;
        return;
    }
    cout<<root->Data<<"-->";
    printNodeRecursive(root->next);
}

int main(){
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    printNode(head);
    printNodeRecursive(head);
    return 0;
}