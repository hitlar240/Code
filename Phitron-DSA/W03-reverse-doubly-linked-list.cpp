#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forword(Node *hd)
{
    while (hd != NULL)
    {
        cout << hd->val << " ";
        hd = hd->next;
    }
    cout << endl;
}
void print_reverse(Node *tl)
{
    while (tl != NULL)
    {
        cout << tl->val << " ";
        tl = tl->prev;
    }
    cout << endl;
}

void reverse(Node *hd, Node *tl)
{
    Node *i = hd;
    Node *j = tl;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}

int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *tail = d;

//link
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    reverse(head, tail);

    print_forword(head);
    print_reverse(tail);

return 0;
}