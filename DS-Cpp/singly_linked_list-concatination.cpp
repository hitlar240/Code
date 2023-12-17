// Singly Linked List (Insertion and Deletion)

#include<iostream>
using namespace std;

class Node
{
public:
    int val; // value
    Node* next = NULL; // next address
    
//constructor
    Node(int val) 
    {
        this->val = val;
    }
};


class Singly_Linked_List
{
public:
    Node* tail=NULL; //initially
    Node* head=NULL; //initially

    void insert_tail(int val)
    {
        if(head==NULL) // no tail 
        {
            head = tail = new Node(val);
            return;
        }
        tail = tail->next = new Node(val);
    }

    void concatenate(Singly_Linked_List b)
    {
        Node* tmp = b.head;
        while(tmp != NULL)
        {
            insert_tail(tmp->val);
            tmp = tmp->next;
        }
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

}; //class Singly_Linked_List


int main()
{
    Singly_Linked_List a;
    a.insert_tail(1);
    a.insert_tail(2);
    a.insert_tail(3);
    a.insert_tail(4);
    a.insert_tail(5);

    Singly_Linked_List b;
    b.insert_tail(6);
    b.insert_tail(7);
    b.insert_tail(8);
    b.insert_tail(9);
    b.insert_tail(10);

    a.concatenate(b);
    // b.concatenate(a);

    cout<<"List a: ";a.print();

    cout<<"List b: "; b.print();


    // b.insert_tail(11);
    // cout<<"List b: "; b.print();

    // cout<<"List a: "; a.print();


return 0;
}
