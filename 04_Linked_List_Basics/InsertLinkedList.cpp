
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node();  // Allocate memory for new node
    newNode->data = data;        // Assign data to the node
    newNode->next = nullptr;     // Set the next pointer to null
    return newNode;
}

// Function to insert a node at the beginning (head)
void insertAtHead(Node*& head, int data) {
    Node* newNode = createNode(data);  // Create a new node
    newNode->next = head;              // Link the new node to the previous head
    head = newNode;                    // Update the head to the new node
}

// Function to insert a node at the end (tail)
void insertAtTail(Node*& head, int data) {
    Node* newNode = createNode(data);  // Create a new node

    if (head == nullptr) {             // If the list is empty
        head = newNode;                // The new node becomes the head
        return;
    }

    Node* current = head;
    while (current->next != nullptr) { // Traverse to the last node
        current = current->next;
    }
    current->next = newNode;           // Link the last node to the new node
}

// Function to insert a node at a specific position
void insertAtPosition(Node*& head, int data, int position) {
    if (position == 1) {  // Insert at the head
        insertAtHead(head, data);
        return;
    }

    Node* newNode = createNode(data);  // Create a new node
    Node* current = head;

    for (int i = 1; i < position - 1 && current != nullptr; i++) {
        current = current->next;  // Traverse to the node before the insertion point
    }

    if (current == nullptr) {
        cout << "Position out of bounds!" << endl;
        return;
    }

    newNode->next = current->next;  // Link the new node to the next node
    current->next = newNode;        // Link the current node to the new node
}

// Function to display the linked list (for debugging/visualization)
void displayLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;  // Initialize the linked list as empty

    // Insert nodes at the head
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    // Display the list after head insertions
    cout << "Linked List after inserting at head: ";
    displayLinkedList(head);

    // Insert nodes at the tail
    insertAtTail(head, 40);
    insertAtTail(head, 50);

    // Display the list after tail insertions
    cout << "Linked List after inserting at tail: ";
    displayLinkedList(head);

    // Insert a node at a specific position (2nd position)
    insertAtPosition(head, 25, 2);

    // Display the list after insertion at position
    cout << "Linked List after inserting at position 2: ";
    displayLinkedList(head);

    return 0;
}
