#include<iostream>
using namespace std;

struct Node
{
    char ch;
    Node* next = NULL;

    Node(char x)
    {
        ch = x;
    }
};

class LinkedList
{
private:
    Node* head = NULL;
    Node* tail = NULL;

public:
    void insert(char x) //insert at tail
    {
        if(!head) //head == NULL
        {
            head = tail = new Node(x);
            return;
        }
        tail = tail->next = new Node(x);
    }

    void delete_char(char x)
    {
        if(head->ch == x) //delete head
        {
            Node* a = head;
            head = head->next;
            delete a;
            return;
        }

        Node* tmp = head;
        while(tmp->next)
        {
            if(tmp->next->ch == x) 
            {
                Node* a = tmp->next;
                tmp->next = tmp->next->next;
                delete a;
                return;
            }
            tmp = tmp->next;
        }
        cout<<"Not in the list!\n";
    }

    void print()
    {
        Node* tmp = head;
        while(tmp) // tmp != NULL
        {
            cout<<tmp->ch<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
    }
};

int main()
{
    LinkedList l;
    l.insert('A');
    l.insert('B');
    l.insert('C');
    l.insert('D');
    l.print();

    l.delete_char('C');
    l.print();

return 0;   
}