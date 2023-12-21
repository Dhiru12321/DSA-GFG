#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = next = NULL;
    }
};

Node *insertAtBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    if (head != NULL)
        head->prev = temp;
    return temp;
}
void printLL(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    head = insertAtBegin(head, 5);
    printLL(head);
    return 0;
}