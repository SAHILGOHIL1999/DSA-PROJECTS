#include <iostream>
using namespace std;

// Node structure: Each element in the list
class Node {
public:
    int data;       // Attribute: data
    Node* next;     // Attribute: pointer to the next node

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Base Class: Dynamic Memory Allocation (Linked List Management)
class DynamicMemory {
public:
    Node* head; // Attribute: Head (Points to the first node)

    // Constructor to initialize an empty list
    DynamicMemory() {
        head = NULL;
    }

    // Method: Insert a new node at the start
    void insert_at_beginning(int data) {
        Node* newNode = new Node(data); // Allocate memory dynamically
        newNode->next = head;           // Point new node to current head
        head = newNode;                 // Update head to the new node
    }

    // Method: Search for a specific value
    bool Search(int key) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == key) return true;
            temp = temp->next;
        }
        return false;
    }

    // Method: Remove a node by its value
    void Delete_node(int key) {
        Node* temp = head;
        Node* prev = NULL;

        // If head node itself holds the key
        if (temp != NULL && temp->data == key) {
            head = temp->next;
            delete temp; // Free memory
            return;
        }

        // Search for the key while keeping track of the previous node
        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        // If key was not found
        if (temp == NULL) return;

        // Unlink the node from the list
        prev->next = temp->next;
        delete temp; // Free memory
    }

    // Method: Reverse the entire linked list
    void reverse() {
        Node *prev = NULL, *curr = head, *next = NULL;
        while (curr != NULL) {
            next = curr->next; // Store next node
            curr->next = prev; // Reverse the link
            prev = curr;       // Move pointers one step forward
            curr = next;
        }
        head = prev; // Update head to the new front
    }

    // Helper method to display the list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DynamicMemory list;

    // Adding data
    list.insert_at_beginning(30);
    list.insert_at_beginning(20);
    list.insert_at_beginning(10);

    cout << "Original List: ";
    list.display();

    // Reversing
    list.reverse();
    cout << "Reversed List: ";
    list.display();

    // Deleting
    list.Delete_node(20);
    cout << "After Deleting 20: ";
    list.display();

    return 0;
}