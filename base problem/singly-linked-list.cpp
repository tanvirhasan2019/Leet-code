#include <iostream>
using namespace std;

// Node struct represents a single element in our linked list
struct Node {
    int data;       // The value stored in this node
    Node* next;     // Pointer to the next node
    
    // Constructor to make node creation easier
    Node(int value) {
        data = value;
        next = nullptr;  // Initially, the node doesn't point to anything
    }
};

// LinkedList struct to manage a collection of nodes
struct LinkedList {
    Node* head;  // Points to the first node in the list
    
    // Constructor - creates an empty list
    LinkedList() {
        head = nullptr;
    }
    
    // Add a new node at the beginning of the list (prepend)
    void insertAtBeginning(int value) {
        // Create a new node with the given value
        Node* newNode = new Node(value);
        
        // Make the new node point to the current head
        newNode->next = head;
        
        // Update head to point to the new node
        head = newNode;
    }
    
    // Add a new node at the end of the list (append)
    void insertAtEnd(int value) {
        // Create a new node with the given value
        Node* newNode = new Node(value);
        
        // If the list is empty, make the new node the head
        if (head == nullptr) {
            head = newNode;
            return;
        }
        
        // Otherwise, find the last node
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        
        // Link the last node to our new node
        temp->next = newNode;
    }
    
    // Insert a node after a specific position (0-based index)
    void insertAfterPosition(int position, int value) {
        // Create a new node with the given value
        Node* newNode = new Node(value);
        
        // If list is empty or position is 0, insert at beginning
        if (head == nullptr || position < 0) {
            newNode->next = head;
            head = newNode;
            return;
        }
        
        // Find the node at the given position
        Node* temp = head;
        int currentPos = 0;
        
        while (temp != nullptr && currentPos < position) {
            temp = temp->next;
            currentPos++;
        }
        
        // If position is beyond the end, add at the end
        if (temp == nullptr) {
            insertAtEnd(value);
            return;
        }
        
        // Insert the new node after temp
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    // Delete the first node with the given value
    void deleteNode(int value) {
        // If list is empty, nothing to delete
        if (head == nullptr) {
            return;
        }
        
        // If head has the value to delete
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        
        // Search for the node to delete
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }
        
        // If the value was found
        if (temp->next != nullptr) {
            Node* nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            delete nodeToDelete;
        }
    }
    
    // Display all elements in the list
    void display() {
        Node* temp = head;
        
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        
        cout << "nullptr" << endl;
    }
    
    // Search for a value and return true if found
    bool search(int value) {
        Node* temp = head;
        
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        
        return false;
    }
    
    // Clean up memory when the list is destroyed
    ~LinkedList() {
        Node* current = head;
        Node* next;
        
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        
        head = nullptr;
    }
};

// Example usage
int main() {
    LinkedList list;
    
    // Add some elements
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtBeginning(5);
    list.insertAfterPosition(1, 15);
    
    // Display the list
    cout << "Linked List: ";
    list.display();  // Output: 5 -> 10 -> 15 -> 20 -> nullptr
    
    // Search for a value
    cout << "Searching for 15: " << (list.search(15) ? "Found" : "Not Found") << endl;
    
    // Delete a node
    list.deleteNode(10);
    
    // Display the updated list
    cout << "After deleting 10: ";
    list.display();  // Output: 5 -> 15 -> 20 -> nullptr
    
    return 0;
}
