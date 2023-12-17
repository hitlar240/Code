#include<iostream>
using namespace std;


class Node
{
public:
    int val;
    Node* next = NULL;
//constructor
    Node(int val)
    {
        this->val = val;
    }
};

class sll 
{
public:
    Node* head = NULL;
    Node* tail = NULL;

    void insert_tail(int val)
    {
        if(head == NULL) //empty
        {
            head = tail = new Node(val);
            return;
        }
        tail->next = new Node(val);
        tail = tail->next;
    }

    void insert_head(int val)
    {
        Node* a = new Node(val);
        a->next = head;
        head = a;
    }

    void insert_at(int id, int val)
    {   
        if(id == 0) //head
        {
            insert_head(val);
            return;
        }
        Node* tmp = head;
        // id = id - 1;
        // while(id--) // 0 false break
        for(int i=1; i<id; i++)
        {   
            if(tmp == NULL)
            {
                cout<<"Invalid index!\n";
                return;
            }
            tmp = tmp->next;
        }
        Node* a = new Node(val);
        a->next = tmp->next;
        tmp->next = a;
    }

    void delete_head()
    {   
        Node* a = head;
        // cout<<"before delete a: "<<a->val<<endl;
        head = head->next;
        delete a;
        // cout<<"after delete a: "<<a->val<<endl;
    }
    
    void delete_tail()
    {
        if(head == NULL)
        {
            cout<<"Empty List!\n";
            return;
        }
        Node* tmp = head;
        while(tmp->next->next != NULL)
        {   
            tmp = tmp->next;
        }
        Node* a = tmp->next;
        tmp->next = tmp->next->next;
        delete a;
    }

    void delete_at(int id)
    {
        if(head == NULL)
        {
            cout<<"Empty List!\n";
            return;
        }
        if(id == 0)
        {
            delete_head();
            return;
        }
        Node* tmp = head;
        for(int i=1; i<id; i++)
        {   
            tmp = tmp->next;
            if(tmp == NULL || tmp->next == NULL)
            {
                cout<<"Invalid index!\n";
                return;
            }
        }
        Node* a = tmp->next;
        tmp->next = tmp->next->next;
        delete a;
    }

    void print()
    {
        if(head == NULL)
        {
            cout<<"Empty!\n";
            return;
        }
        Node* tmp = head;
        while(tmp != NULL)
        {
            cout<<tmp->val<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
    }
};


int main()
{
    sll s;
    s.insert_tail(10);
    s.insert_tail(20);
    s.insert_tail(30);
    s.insert_tail(40);
    s.insert_tail(50);
    s.print();

    s.insert_at(2,100);
    s.print();
    s.insert_at(0,500); //at head
    // s.insert_head(1000);
    s.print();

    // s.insert_at(23,9);
    // s.insert_at(8,123); //at tail
    // s.print();

    // s.delete_head();
    // s.print();

    // s.delete_at(8);
    // s.delete_at(9);

    // s.delete_tail();
    // s.print();



return 0;
}