// Singly Linked List

#include<iostream>
using namespace std;

class Node
{
    public: // access modifier
    int x;
    Node* next; // pointer of next node object

    Node(int val) // constructor
    {
        x = val;
        next = NULL;
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

// links | ->
    box1->next = box2; // 
    box2->next = box3; // 
    box3->next = box4; // 
    box4->next = box5; // 


// print list
    Node* tmp = box1;
    while(tmp != NULL)
    {
        cout<<tmp->x<<" ";
        tmp = tmp->next;
    }
    

return 0;
}
