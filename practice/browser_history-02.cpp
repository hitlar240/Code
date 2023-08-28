#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

class Node
{
    public:
    string str;
    Node* prev;
    Node* next;
        
    Node(string str)
    {
        this->str = str;
        prev = NULL;
        next = NULL;
    }
};

void insert_at_tail(Node* &hd, Node* &tl, string s)
{
    Node* a = new Node(s);
    if(hd == NULL)
    {
        hd = a;
        tl = a;
        return;
    }
    tl->next = a;
    a->prev = tl;
    tl = a;
}

Node* findNode(Node* hd, string x)
{
    Node* tmp = hd;
    while(tmp != NULL)
    {
        if(tmp->str == x)
            return tmp;

        tmp = tmp->next;
    }
    return tmp;
}

int main()
{
    Node* head = NULL;
    Node* tail = head;

    while(true)
    {
        string str; cin>>str;
        if(str == "end")
            break;

        insert_at_tail(head, tail, str);
    }

    Node* address = NULL;
    int q; cin>>q;
    while(q--)
    {
        string command; cin>>command;

        if(command == "visit")
        {
            string x; cin>>x;
            if(findNode(head, x) == NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                address = findNode(head, x);
                cout<<address->str<<endl;
            }
        }

        else if(command == "next")
        {
            if(address->next == NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cout<<address->next->str<<endl;
                address = address->next;
            }
        }

        else if(command == "prev")
        {
            if(address->prev == NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cout<<address->prev->str<<endl;
                address = address->prev;
            }
        }
    }


return 0;
}