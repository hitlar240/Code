#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
        
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

int main()
{
    Node* head = new Node(1);
    Node* a = new Node(2);
    Node* b = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(5);

//link:
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b; //cycle

//slow-fast algorithm
    bool f = false;
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL) //O(N)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            f = true;
            break;
        }
    }

    if(f == true)
        cout<<"cycle"<<endl;
    else
        cout<<"No cycle"<<endl;

return 0;
}