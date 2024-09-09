#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = next = NULL;
    }
};
void insertAtHead(Node* &head, int val){
    Node* node1 = new Node(val);
    
    node1->next = head;
    if(head != NULL){
        head->prev = node1;
    }
    head = node1;
}
void insertAtTail(Node* &head, int val){
    Node* node1 = new Node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = node1;
    node1->prev = temp;
}
void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}
void deletion(Node* &head, int pos){

    Node* temp = head;
    int count = 0;

    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);

    deleteAtHead(head);
    display(head);

    
}
