#include <iostream>
using namespace std;

class node {
public:
    int val;
    node* next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void printLinkedList(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size(node* head) {
    int count = 0;
    node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition(node*& head, int pos, int val) {
    if (pos < 0 || pos > size(head)) {
        cout << "Invalid" << endl;
        return;
    }

    node* newNode = new node(val);

    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    node* temp = head;
    for (int i = 0; i < pos - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    node* head = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        // Call insertAtPosition to insert elements at the end of the list
        insertAtPosition(head, size(head), val);
    }

    int t;
    cin >> t;
    int pos, v;
    while (t--) {
        cin >> pos >> v;
        // Check if the position is valid
        if (pos < 0 || pos > size(head)) {
            cout << "Invalid" << endl;
        } else {
            // Call insertAtPosition to insert value at specified position
            insertAtPosition(head, pos, v);
        }
        // Print the linked list after each insertion
        printLinkedList(head);
    }

    return 0;
}
