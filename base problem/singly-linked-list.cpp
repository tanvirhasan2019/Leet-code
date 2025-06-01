#include <iostream>
using namespace std;

// Declare List Node
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) : data(val), next(nullptr) {};
};

// Create List 1 -> 2 -> 3 -> 4 -> 5
ListNode* createListNode() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    return head;
}

// Add a new node at the beginning of the list (prepend)
ListNode* insertAtBeginning(ListNode* head, int value) {
    ListNode* newNode = new ListNode(value);
    newNode->next = head;
    return newNode;  // Return new head
}

// Add a new node at the end of the list (append)
ListNode* insertAtEnd(ListNode* head, int value) {
    ListNode* newNode = new ListNode(value);
    
    // If the list is empty, make the new node the head
    if (head == nullptr) {
        return newNode;
    }
    
    // Otherwise, find the last node
    ListNode* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    // Link the last node to our new node
    temp->next = newNode;
    return head;  // Head doesn't change
}

// Insert a node after a specific position (0-based index)
ListNode* insertAfterPosition(ListNode* head, int position, int value) {
    ListNode* newNode = new ListNode(value);
    
    // If list is empty or position is 0, insert at beginning
    if (head == nullptr || position < 0) {
        newNode->next = head;
        return newNode;
    }
    
    // Find the node at the given position
    ListNode* temp = head;
    int currentPos = 0;
    
    while (temp != nullptr && currentPos < position) {
        temp = temp->next;
        currentPos++;
    }
    
    // If position is beyond the end, add at the end
    if (temp == nullptr) {
        return insertAtEnd(head, value);
    }
    
    // Insert the new node after temp
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// Delete the first node with the given value
ListNode* deleteNode(ListNode* head, int value) {
    // If list is empty, nothing to delete
    if (head == nullptr) {
        return head;
    }
    
    // If head has the value to delete
    if (head->data == value) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    // Search for the node to delete
    ListNode* temp = head;
    while (temp->next != nullptr && temp->next->data != value) {
        temp = temp->next;
    }
    
    // If the value was found
    if (temp->next != nullptr) {
        ListNode* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }
    
    return head;
}

// Search for a value and return true if found
bool search(ListNode* head, int value) {
    ListNode* temp = head;
    
    while (temp != nullptr) {
        if (temp->data == value) {
            return true;
        }
        temp = temp->next;
    }
    
    return false;
}

// Print Data
void printData(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << " -> nullptr" << endl;
}

// Reverse linkedList
// NULL  ←   1    ←   2    ←   3   ←    4 ←    5
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;
    
    while (curr != nullptr) {
        next = curr->next;    // Store next node
        curr->next = prev;    // Reverse the link
        prev = curr;          // Move prev forward
        curr = next;          // Move curr forward
    }
    return prev;  // prev is now the new head
}

// Clean up memory - delete all nodes
void deleteList(ListNode* head) {
    ListNode* current = head;
    ListNode* next;
    
    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
}


// Two pointers: slow moves one step at a time. fast moves two steps at a time. | If there’s a cycle, fast will eventually catch up to slow inside the cycle.
bool hasCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;            // Move 1 step
        fast = fast->next->next;      // Move 2 steps

        if (slow == fast) {
            return true;              // 🌀 Cycle found
        }
    }

    return false;                     // 🚫 No cycle
}

int main() {
    // Create initial list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = createListNode();
    
    cout << "=== LinkedList Operations Demo ===" << endl;
    
    // Print original data
    cout << "Original List: ";
    printData(head);
    
    // Test insertions
    head = insertAtBeginning(head, 0);
    cout << "After inserting 0 at beginning: ";
    printData(head);
    
    head = insertAtEnd(head, 6);
    cout << "After inserting 6 at end: ";
    printData(head);
    
    head = insertAfterPosition(head, 2, 99);
    cout << "After inserting 99 at position 2: ";
    printData(head);
    
    // Test search
    cout << "Searching for 99: " << (search(head, 99) ? "Found" : "Not Found") << endl;
    cout << "Searching for 100: " << (search(head, 100) ? "Found" : "Not Found") << endl;
    
    // Test deletion
    head = deleteNode(head, 99);
    cout << "After deleting 99: ";
    printData(head);
    
    // Test reverse functionality
    cout << "\n=== Reverse Functionality ===" << endl;
    cout << "Before reverse: ";
    printData(head);
    
    head = reverseList(head);
    cout << "After reverse: ";
    printData(head);
    
    // Reverse back to original
    head = reverseList(head);
    cout << "Reversed back: ";
    printData(head);
    
    // Clean up memory
    deleteList(head);
    
    return 0;
}
