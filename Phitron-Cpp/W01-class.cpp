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
// //static object (without constructor)
//     Node box1; box1.x = 1; box1.next = NULL; // box1 is a node object
//     Node box2; box2.x = 2; box2.next = NULL;
//     Node box3; box3.x = 3; box3.next = NULL;
    

//static object
    Node box1(1); // box1 is a node object
    Node box2(2);
    Node box3(3);

//links | (.) element access operator
    box1.next = &box2; // & (reference) address of box2
    box2.next = &box3; // box2 -> box3

    cout << box1.x << endl; // value in box1
    cout << (*box1.next).x << endl; // * (dereferance) location of box2
    cout << (*(*box1.next).next).x << endl; // box3


//dynamic object
    Node* box4 = new Node(4); // box4 is a pointer variable of node object
    Node* box5 = new Node(5);
    Node* box6 = new Node(6);

// links
    box3.next = box4; // (reference) address of box4
    box4->next = box5; // -> 
    box5->next = box6;

    // cout << box3.next->x << endl; // value in box4
    // // cout << box4->x << endl; // value in box4
    // cout << box4->next->x << endl; // box5
    // cout << box4->next->next->x << endl; // box6


// print list
    Node* tmp = &box1;
    while(tmp != NULL)
    {
        cout<<tmp->x<<" ";
        tmp = tmp->next;
    }
    

return 0;
}
