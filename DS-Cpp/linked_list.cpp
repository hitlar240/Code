// Singly Linked List

#include<iostream>
using namespace std;

class Node
{
    public:
    int x;
    Node* next; //pointer of node

    Node(int val) //constructor
    {
        x = val;
        next = NULL;
    }
};

int main()
{
//static object
    Node box1(1);
    Node box2(2);
    Node box3(3);

    box1.next = &box2; // address of box2
    box2.next = &box3;
    box3.next = NULL;

    cout << box1.x << endl; //box1
    cout << (*box1.next).x << endl; //box2
    cout << (*(*box1.next).next).x << endl; //box3


//dynamic object
    Node* box4 = new Node(4);
    Node* box5 = new Node(5);
    Node* box6 = new Node(6);

    box4->next = box5;
    box5->next = box6;
    box6->next = NULL;

    cout << box4->x << endl; //box4
    cout << box4->next->x << endl; //box5
    cout << box4->next->next->x << endl; //box6

}
