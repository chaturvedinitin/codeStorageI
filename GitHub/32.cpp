#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
Node* reverse(Node* &head){
    Node *prev = NULL;
    Node* curr = head;
    Node* nex;

    while(curr!=NULL){
        nex = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nex;
    }
    return prev;
}
int main()
{
    
}