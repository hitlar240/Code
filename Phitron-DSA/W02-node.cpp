#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

int main()
{
// Static Node

//     Node head(0);
//     head.val = 1;
//     Node a(2);
//     Node b(3);
//     Node c(4);
// //link
//     head.next = &a;
//     a.next = &b;
//     b.next = &c;
// // output
//     cout<<head.val<<endl;
//     cout<<(*head.next).val<<endl;
//     // cout<<head.next->val<<endl;
//     cout<<head.next->next->val<<endl;
//     cout<<head.next->next->next->val<<endl;

// // Print linked list
//     Node* tmp = &head;
//     while(tmp != NULL)
//     {
//         cout<<(*tmp).val<<" ";
//         tmp = tmp->next;
//     }
//     cout<<endl;




// Dynamic Node

    Node* head = new Node(1);
    // cout<<head->val<<endl;
    Node* a = new Node(2);
    Node* b = new Node(3);
    Node* c = new Node(4);

//link
    // head->next = a;
    // a->next = b;
    // b->next = c;

    head->next = a; // (*head).next = a
    // head->next->next = b; 
    (*(*head).next).next = b;
    head->next->next->next = c;

//output
    cout<<head->val<<endl;
    // cout<<head->next->val<<endl;
    cout<<(*(*head).next).val<<endl; //a
    cout<<head->next->next->val<<endl; //b
    cout<<head->next->next->next->val<<endl; //c


// Print linked list
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;


return 0;
}