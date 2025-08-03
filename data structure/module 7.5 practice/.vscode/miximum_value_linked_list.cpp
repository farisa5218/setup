#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
     else 
    {
        tail->next = newnode;
        tail = newnode;
    }
}
int findMax(node *head) 
{
    if (head == NULL)
    {
        return INT_MIN; 
    }
    int maxVal = head->val;//assume maximum value int max=a[0]attar moto;
    while (head != NULL)
    {
        maxVal = max(maxVal, head->val);
        //head->val ata loop ar maddome bar bar gurbe array ata ababe likhtam max(a,a+n)
        //a holo maxval ba first index jeta assmue kore nite hobe ata maximum value
        //(a+n) holo a thake n porjonto value check korbe jeta linked list head->val dite hobe
        head = head->next;
    }
    return maxVal;
}
int main() 
{
    node *head = NULL, *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1) 
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    int maxVal = findMax(head);
    cout << "Maximum value: " << maxVal << endl;
    return 0;
}
