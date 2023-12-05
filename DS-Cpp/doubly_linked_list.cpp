// Doubly Linked List

#include<iostream>
using namespace std;

class Node
{
    public: // access modifier
    int x;
    Node* next; // pointer of next node object
    Node* prev; // pointer of previous node object

    Node(int val) // constructor
    {
        x = val;
        next = NULL;
        prev = NULL;
    }
};

int main()
{
//static object
    Node box1(1);
    Node box2(2);
    Node box3(3);

//links
    box1.next = &box2;
    box2.prev = &box1;
    box2.next = &box3;
    box3.prev = &box2;

    cout << box1.x << " "; //box1
    cout << (*box1.next).x << " "; //box2
    cout << (*(*box1.next).next).x << endl; //box3

//print int reverse order
    cout << box3.x << " "; //box3
    cout << (*box3.prev).x << " "; //box2
    cout << (*(*box3.prev).prev).x << endl; //box1


//dynamic object
    Node* box4 = new Node(4); // box4 is a pointer variable of node object
    Node* box5 = new Node(5);
    Node* box6 = new Node(6);

//links
    box3.next = box4; // box4 is a pointer
    box4->prev = &box3; // box3 is a node object
    box4->next = box5;
    box5->prev = box4;
    box5->next = box6;
    box6->prev = box5;

    cout << box4->x << " "; //box4
    cout << box4->next->x << " "; //box5
    cout << box4->next->next->x << endl; //box6

//print int reverse order
    cout << box6->x << " "; //box6
    cout << box6->prev->x << " "; //box5
    cout << box6->prev->prev->x << endl; //box4

}
