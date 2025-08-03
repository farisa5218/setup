#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* head = nullptr;

// Method to insert a value at the head of the linked list
void insertAtHead(int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Method to insert a value at the tail of the linked list
void insertAtTail(int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Method to delete a node at a specified index
void deleteAtIndex(int index) {
    if (index == 0 && head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else if (index > 0 && head != nullptr) {
        Node* temp = head;
        for (int i = 0; temp != nullptr && i < index - 1; ++i) {
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr) {
            return; // Invalid index
        }
        Node* nextNode = temp->next->next;
        delete temp->next;
        temp->next = nextNode;
    }
}

// Method to print the linked list
void printList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            insertAtHead(V);
        } else if (X == 1) {
            insertAtTail(V);
        } else if (X == 2) {
            deleteAtIndex(V);
        }
        printList();
    }

    return 0;
}
