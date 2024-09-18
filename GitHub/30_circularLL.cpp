#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

Node* floydDetectLoop(Node* head) {
    if (head == NULL) return NULL;
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return slow;
    }
    return NULL;
}

Node* getStartingLoop(Node* head){
    if(head == NULL) return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow!=intersection){
        slow = slow->next;
        intersection=intersection->next;
    }
    return slow;
}
void linear(Node* head) {
    Node* intersection = floydDetectLoop(head);
    if (intersection == NULL) return;

    Node* slow = head;

   
    while (slow->next != intersection->next) {
        slow = slow->next;
        intersection = intersection->next;
    }

    intersection->next = NULL;
}

void insertAtHead(Node*& head, int d) {
    Node* newNode = new Node(d);
    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node*& head, int d) {
    Node* newNode = new Node(d);
    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}

void display(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << temp->data << endl;
}
void displaylinear(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    while(temp->next = NULL){
        cout << temp->data << endl;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    display(head);

    if(floydDetectLoop(head)){
        cout << "LOOP" << endl;
    }else cout << "NO LOOP" << endl;

    linear(head);
    displaylinear(head);
}
