#include<bits/stdc++.h>
using namespace std;
    //Following is the class structure of the Node class:

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

class Stack
{
    //Write your code here

public:
int sz=0;
Node *head=NULL;
    Stack()
    {
        //Write your code here
    }

    int getSize()
    {
       return sz;
    }

    bool isEmpty()
    {
        if(sz==0) return true;
        else return false;
    }

    void push(int data)
    {
     Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    sz++;
    }

    void pop()
    {
        if (head == NULL)
            return;
        Node* temp = head;
        head = head->next;
        delete temp;
        sz--;
    }

    int getTop()
    {
        if (sz==0)
        return -1;
    return head->data;
    }
};
//https://www.naukri.com/code360/problems/implement-stack-with-linked-list_630475?leftPanelTabValue=PROBLEM&customSource=studio_nav