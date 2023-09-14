#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node(int v)
    {
        val = v;
        next = NULL;
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
        a->next = head;
        head = a;
    }
    int top()
    {
        if(sz != 0)
            return head->val;
        else
            return -1; //empty
    }
    void pop()
    {
        if(sz != 0)
        {
            Node* dlt = head;
            head = head->next;
            delete(dlt);
            sz--;
        }
        else
            cout<<"Empty!\n";
    }
};

int main()
{
    Stack s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // cout<<s.top()<<" "; //3
    // s.pop(); 
    // cout<<s.top()<<" "; //2
    // s.pop();
    // cout<<s.top()<<" "; //1
    // s.pop();
    // cout<<s.top()<<" "; //-1 empty
    // s.pop(); //empty


    int n; cin>>n;
    while(n--)
    {
        int x; cin>>x;
        s.push(x);
    }

    while(s.size() != 0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }

return 0;
}