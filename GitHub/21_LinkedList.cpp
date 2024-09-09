#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* node1 = new Node(val);
    if(head == NULL) {
        head = node1;
        return;
    }
    node1->next = head;
    head = node1;
}

void insertAtTail(Node* &head, int val) {
    Node* node1 = new Node(val);
    if(head == NULL) {
        head = node1;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node1;
}

void deletion(Node* &head, int val) {
    Node* temp = head;
    if(head == NULL) {
        return;
    }
    if(head->data == val) {
        head = head->next;
        delete temp;
        return;
    }
    while(temp->next->data != val) {
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

bool Search(Node* head, int key) {
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    display(head);

    insertAtHead(head, 0);
    display(head);

    deletion(head, 0);
    display(head);
    
    if(search(head,2)){
        cout << "key found" << endl;
    }else{
        cout << "not found" << endl;
    }
}
