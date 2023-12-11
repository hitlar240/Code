// Doubly Linked List

#include<iostream>
using namespace std;

class Node
{
public: // access specifier
    int val;
    Node* next; // pointer of next node object
    Node* prev; // pointer of previous node object

// constructor
    Node(int val) 
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

int main()
{
//dynamic object
    Node* box1 = new Node(1); // box1 is a pointer variable of node object
    Node* box2 = new Node(2);  
    Node* box3 = new Node(3);  
    Node* box4 = new Node(4); 
    Node* box5 = new Node(5);

//links | ->
    box1->next = box2; // forward connection
    box2->prev = box1; // backward connection
    box2->next = box3; 
    box3->prev = box2;  
    box3->next = box4; 
    box4->prev = box3;  
    box4->next = box5;
    box5->prev = box4;

//print forward
    Node* tmp = box1;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }

// print backward
    Node* tmp = box5;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }


return 0;
}
