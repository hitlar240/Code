// Doubly Linked List

#include<iostream>
using namespace std;

class Node
{
    public:
    int x;
    Node* next; //pointer of node
    Node* prev; //pointer of node

    Node(int val) //constructor
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
    box1.prev = NULL;
    box1.next = &box2;
    box2.prev = &box1;
    box2.next = &box3;
    box3.prev = &box2;
    box3.next = NULL;

    cout << box1.x << " "; //box1
    cout << (*box1.next).x << " "; //box2
    cout << (*(*box1.next).next).x << endl; //box3

//print int reverse order
    cout << box3.x << " "; //box3
    cout << (*box3.prev).x << " "; //box2
    cout << (*(*box3.prev).prev).x << endl; //box1


//dynamic object
    Node* box4 = new Node(4);
    Node* box5 = new Node(5);
    Node* box6 = new Node(6);

//links
    box4->prev = NULL;
    box4->next = box5;
    box5->prev = box4;
    box5->next = box6;
    box6->prev = box5;
    box6->next = NULL;

    cout << box4->x << " "; //box4
    cout << box4->next->x << " "; //box5
    cout << box4->next->next->x << endl; //box6

//print int reverse order
    cout << box6->x << " "; //box6
    cout << box6->prev->x << " "; //box5
    cout << box6->prev->prev->x << endl; //box4

}
