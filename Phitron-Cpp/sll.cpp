// Singly Linked List (Insertion and Deletion)

#include<iostream>
using namespace std;

class Node
{
public:
    int val; // value
    Node* next; // next address
    
//constructor
    Node(int x) 
    {
        val = x;
        next = NULL;
    }
};

void insert_tail(Node* &head, Node* &tail, int val)
{
    if(head==NULL) // no tail 
    {
        head = tail = new Node(val);
        return;
    }
    tail = tail->next = new Node(val);
}

void insert_head(Node* &head, Node* &tail, int val)
{
    if(head==NULL) // no head
    {
        head = tail = new Node(val);
        return;
    }
    Node* tmp = head; //old head
    head = new Node(val); //new head
    head->next = tmp;
}

void insert_at(Node* &head, int index, int val)
{
    if(index == 0) // head
    {
        Node* tmp = head; // old head
        head = new Node(val); // new head
        head->next = tmp;
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
}

void delete_head(Node* &head, Node* &tail)
{
    if(head == NULL) // no head
    {
        cout<<"List is Empty!\n";
        return;
    }
    Node* tmp = head;
    head = head->next;
    delete tmp;
}

void delete_at(Node* &head, Node* &tail, int index)
{
    if(head == NULL) // no head
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
    tmp->next = tmp->next->next;
    delete dlt;
}

void print(Node* head)
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


int main()
{

    Node* head = NULL; //initially
    Node* tail = NULL; //initially

    while(true)
    {
        cout<<"\n\n1. insert at tail\n";
        cout<<"2. insert at head\n";
        cout<<"3. insert at position\n";
        cout<<"4. delete head\n";
        cout<<"5. delete from position\n";
        cout<<"6. print list\n";
        cout<<"press any key to end\n";

        int command; 
        cout<<"\nEnter option: "; cin>>command;
        if(command == 1)
        {
            int x; 
            cout<<"Val = "; cin>>x;
            insert_tail(head,tail,x);
        }
        else if(command == 2)
        {
            int x; 
            cout<<"Val = "; cin>>x;
            insert_head(head,tail,x);
        }
        else if(command == 3)
        {
            int i,x; 
            cout<<"Index: "; cin>>i;
            cout<<"Val = "; cin>>x;
            insert_at(head,i,x);
        }
        else if(command == 4)
        {
            delete_head(head,tail);
        }
        else if(command == 5)
        {
            int i; 
            cout<<"Index: "; cin>>i;
            delete_at(head,tail,i);
        }
        else if(command == 6)
        {
            cout<<"\nList: ";
            print(head);
        }
        else
        {
            cout<<"\nEnd\n";
            break;
        }
    }

return 0;
}
