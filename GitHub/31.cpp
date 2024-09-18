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

// Floyd's Cycle Detection Algorithm
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

// Find the starting node of the loop
Node* getStartingLoop(Node* head) {
    if (head == NULL) return NULL;

    Node* intersection = floydDetectLoop(head);
    if (intersection == NULL) return NULL;

    Node* slow = head;

    while (slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

// Remove the loop from the linked list
void linear(Node* head) {
    Node* intersection = floydDetectLoop(head);
    if (intersection == NULL) return;

    Node* slow = head;

    // Move slow and intersection until the node just before the loop starts
    while (slow->next != intersection->next) {
        slow = slow->next;
        intersection = intersection->next;
    }

    // Break the loop
    intersection->next = NULL;
}

// Insert node at the tail (for circular list)
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

// Function to
// display the list (for circular and linear list)
void display(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head && temp != NULL); // Stop if circular or NULL
    if (temp == NULL)
        cout << "NULL";  // For linear lists, the end will be NULL
    else
        cout << "HEAD";  // For circular lists, point back to head
    cout << endl;
}

int main() {
    Node* head = NULL;

    // Create a circular linked list
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    // Display the circular linked list
    cout << "Circular Linked List: " << endl;
    display(head);

    // Detect if there's a loop
    if (floydDetectLoop(head)) {
        cout << "LOOP detected!" << endl;

        // Get the starting point of the loop
        Node* loopStart = getStartingLoop(head);
        if (loopStart) {
            cout << "Loop starts at node with data: " << loopStart->data << endl;
        }

        // Remove the loop
        linear(head);

        // Display the list after removing the loop
        cout << "List after removing the loop: " << endl;
        display(head);
    } else {
        cout << "NO LOOP detected." << endl;
    }

    return 0;
}
