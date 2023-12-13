// Stack using (Singly Linked List)

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node
{
public:
    int val;
    Node* below = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

class Stack
{
private: //inaccessible
    Node* head = NULL;
    int sz = 0; //initially

public: //accessible
    int size()
    {
        return sz;
    }
    void push(int v)
    {
        sz++;
        if(head==NULL)
        {
            head = new Node(v);
            return;
        }
        Node* a = new Node(v);
        a->below = head;
        head = a;
    }
    int top()
    {
        // if(sz == 0)
        if(head == NULL)
        {
            cout << "Empty!" << endl;
            return -1;
        }
        else
        {
            return head->val;
        }
    }
    void pop()
    {
        // if(sz == 0)
        if(head == NULL)
        {
            cout<<"Empty!\n";
        }
        else
        {
            Node* a = head;
            head = head->below;
            delete(a);
            sz--;
        }
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    // cout<<s.top()<<endl; //3
    // s.pop();
    // cout<<s.top()<<endl; //2
    // s.pop();
    // cout<<s.top()<<endl; //1
    // s.pop();
    // cout<<s.top()<<endl; //-1 empty
    // s.pop(); //empty
    s.push(20);
    cout<<"size = "<<s.size()<<endl;


    // int n; cout<<"N = "; cin>>n;
    // while(n--)
    // {
    //     int x; cin>>x;
    //     s.push(x);
    // }

    while(s.size() != 0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    

return 0;
}
