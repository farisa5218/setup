#include <bits/stdc++.h> 
 class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

class Queue {
public:
 Node*head=NULL;
 Node *tail=NULL;
 int sz=0;
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
       if(sz==0) return 1;
       else return 0;
    }
    void enqueue(int data) {
        sz++;
      Node*newNode =new Node(data);
      if(head==NULL)
      {
          head=newNode;
          tail=newNode;
          return;
      }
      tail->next=newNode;
      tail=newNode;
    }

    int dequeue() {
       if (isEmpty())
        return -1;

    int ans = head->data; 

    head = head->next;

    if (head == nullptr)
        tail = nullptr; 

    sz--;
    return ans;
    }

    int front() {
        if(isEmpty()) return -1;
        else return head->data;
    }
};
//https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908