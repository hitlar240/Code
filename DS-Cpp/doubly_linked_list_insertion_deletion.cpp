// Doubly Linked List (Insertion and Deletion)

#include<iostream>
using namespace std;

class Node
{
public:
    int val; // value
    Node* next = NULL; // next address
    Node* prev = NULL; // previous address

    Node(int val) //constructor
    {
        this->val = val;
    }
};


class Doubly_Linked_List
{
private:
    Node* head = NULL; //initially
    Node* tail = NULL; //initially

public:
    void insert_tail(int val)
    {
        if(head==NULL)
        {
            head = tail = new Node(val);
            return;
        }
        Node* tl = tail; // old tail
        tail = new Node(val); // new tail
        tl->next = tail;
        tail->prev = tl;
    }

    void insert_head(int val)
    {
        if(head==NULL)
        {
            head = tail = new Node(val);
            return;
        }
        Node* hd = head; //old head
        head = new Node(val); //new head
        head->next = hd;
        hd->prev = head;
    }

    void insert_at(int index, int val)
    {
        if(index == 0) // head
        {
            insert_head(val);
            return;
        }
        Node* tmp = head;
        for(int i=1; i<index; i++) // (index-1) iterations
        {
            tmp = tmp->next;
            if(tmp == NULL)
            {
                cout<<"Invalid index!\n";
                return;
            }
        }
        Node* a = new Node(val);
        a->next = tmp->next;
        tmp->next = a;
        a->prev = tmp;
        a->next->prev = a;
    }

    void delete_head()
    {
        if(head == NULL)
        {
            cout<<"empty!\n";
            return;
        }
        Node* tmp = head;
        head = head->next;
        head->prev = NULL;
        delete tmp;
    }

    void delete_at(int index)
    {
        if(head == NULL)
        {
            cout<<"empty!\n";
            return;
        }
        Node* tmp = head;
        for(int i=1; i<index; i++)
        {
            tmp = tmp->next;
            if(tmp == NULL || tmp->next == NULL)
            {
                cout<<"Invalid index!\n";
                return;
            }
        }
        Node* dlt = tmp->next;
        tmp->next = dlt->next;
        dlt->next->prev = tmp;
        delete dlt;
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

    void print_reverse()
    {
        if(tail == NULL) 
        {
            cout<<"Empty!\n";
            return;
        }
        Node* tmp = tail;
        while(tmp != NULL)
        {
            cout<<tmp->val<<" ";
            tmp = tmp->prev;
        }
        cout<<endl;
    }
}; //class Doubly_Linked_List



int main()
{
    Doubly_Linked_List dll;

    while(true)
    {
        cout<<"\n\n1. insert at tail\n";
        cout<<"2. insert at head\n";
        cout<<"3. insert at position\n";
        cout<<"4. delete head\n";
        cout<<"5. delete from position\n";
        cout<<"6. print list\n";
        cout<<"7. print reverse\n";
        cout<<"press any key to end\n";

        int command; 
        cout<<"\nEnter optinon: "; 
        cin>>command;

        if(command == 1)
        {
            int x; 
            cout<<"\nVal: "; cin>>x;
            dll.insert_tail(x);
        }
        else if(command == 2)
        {
            int x; 
            cout<<"\nVal: "; cin>>x;
            dll.insert_head(x);
        }
        else if(command == 3)
        {
            int i,x; 
            cout<<"\nPosition: "; cin>>i;
            cout<<"\nVal: "; cin>>x;
            dll.insert_at(i,x);
        }
        else if(command == 4)
        {
            dll.delete_head();
        }
        else if(command == 5)
        {
            int i; 
            cout<<"\nPosition: "; cin>>i;
            dll.delete_at(i);
        }
        else if(command == 6)
        {
            cout<<"\nList: ";
            dll.print();
        }
        else if(command == 7)
        {
            cout<<"\nList: ";
            dll.print_reverse();
        }
        else
        {
            cout<<"End\n";
            break;
        }
    }

return 0;
}
