#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void InsertAtTail(Node* &head, int val){
    Node* node1 = new Node(val);
    if(head == NULL){
        head = node1;
        node1->next = head;
        return;
    }
    Node* curr = head;
    while(curr->next!=head){
        curr = curr->next;
    }
    curr->next = node1;
    node1->next = head;
}
int main()
{
    
}