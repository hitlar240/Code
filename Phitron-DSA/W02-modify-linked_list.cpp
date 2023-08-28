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

int size(Node* hd) // O(N)
{
    int c = 0; 
    while(hd != NULL)
    {
        hd = hd->next;
        c++;
    }
    return c;
}

void insert_at_head(Node* &h, int v) // h = head
{
    Node* a = new Node(v);

    a->next = h; //a->next = head
    h = a; // head = a
}

// void insert_at_tail(Node* &hd, int v) // O(N)
// {
//     Node* a = new Node(v);
//     if(hd == NULL) // hd = head
//     {
//         hd = a; // head = a
//         return;
//     }
//     Node* tmp = hd;
//     while(tmp->next != NULL)
//     {
//         tmp = tmp->next; // tmp = address of last_Node (when loop breaks)
//     }
//     tmp->next = a; //address of a to last_Node.next
// }

void insert_at_tail(Node* &hd, Node* &tl, int v) // O(1)
{
// after deleting tail insert_at_tail() will not work!
    Node* a = new Node(v);
    if(hd == NULL) // hd = head | tl = tail
    {
        // hd = a; // head = a
        // tl = a; // tail = a
        tl = hd = a;
        return;
    }
    // tl->next = a; // link
    // tl = a; // tail = new_Node (tail moved) <- track tail
    tl = tl->next = a;
}

void insert_at(Node* &hd, Node* &tll, int idx, int v) // O(N) 
{
    if(idx == 0) 
    {
        insert_at_head(hd, v); // h = hd = head (& reference)
        return;
    }
    if(idx == size(hd)) // O(N)
    {
        insert_at_tail(hd, tll, v); // tll = tl = tail (& reference)
        return;
    }

    Node* tmp = hd;
    for(int i=0; i<idx-1; i++) // (k-1) iteration = (k-1)th index | kth position
    {
        tmp = tmp->next; // tmp = (index-1)th indexed_Node
        if(tmp == NULL)  // if(index > size)
        {
            cout<<"invalid index!"<<endl;
            return; // As tmp->next dosen't exist!
        }
    }
    Node* a = new Node(v);
    a->next = tmp->next;
    tmp->next = a;
}

void delete_head(Node* &hd) // O(1) // hd = head
{
    if(hd == NULL)
    {
        cout<<"No Head yet!"<<endl;
        return;
    }
    Node* dlt = hd; // = head
    hd = hd->next; // head = head->next
    delete hd; // delete head
}

void delete_at(Node* &hd, int idx) // O(N)
{
    if(idx == 0)
    {
        delete_head(hd); // hd = hd = head
        return;
    }
    Node* tmp = hd;
    for(int i=0; i<idx-1; i++) // (k-1) iteration = (k-1)th index | kth position
    {
        tmp = tmp->next; // tmp = (index-1)th indexed_Node
        if(tmp->next == NULL) // if(index >= size)
        {
            cout<<"invalid index!"<<endl;
            return; // As tmp->next->next dosen't exist!
        }
    }
    Node* dlt = tmp->next; // = indexed_Node
    tmp->next = tmp->next->next; // link (idx-1) to (idx+1)
    delete dlt; // delete indexed_Node
}

void print(Node* hd) // O(N)
{
    Node* tmp = hd;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main()
{
    // Node* head = new Node(1);
    Node* head = NULL;
    Node* tail = head;
    // Node* tail = NULL;

        cout<<"1: Insert at Tail"<<endl;
        cout<<"2: Insert at any Position"<<endl;
        cout<<"3: Insert at Head"<<endl;
        cout<<"4: Delete from Position"<<endl;
        cout<<"5: Delete Head"<<endl;
        cout<<"6: Print Linked List"<<endl;
        cout<<"7: Size of Linked List"<<endl;
        cout<<"any key: Terminate"<<endl;
        int c;

    while(true)
    { 
        cout<<"choice: "; cin>>c;

        if(c == 1)
        {
            int val; 
            cout<<"value = "; cin>>val;
            // insert_at_tail(head, val);
            insert_at_tail(head, tail, val);
        }

        else if(c == 2)
        {
            int index,val; 
            cout<<"Index: "; cin>>index;
            cout<<"value = "; cin>>val;
            insert_at(head, tail, index, val);
        }

        else if(c == 3)
        {
            int val; 
            cout<<"value = "; cin>>val;
            insert_at_head(head, val);
        }

        else if(c == 4)
        {
            int index; 
            cout<<"Index: "; cin>>index;
            delete_at(head, index);
        }

        else if(c == 5)
            delete_head(head);

        else if(c == 6)
            print(head);
            
        else if(c == 7)
        {
           cout<<"Size = "<<size(head)<<endl;
        }

        else 
        {
            cout<<"g00d ByE"<<endl; break;
        }
    }

return 0;
}