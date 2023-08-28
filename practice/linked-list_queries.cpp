 #include<bits/stdc++.h>
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

void print(Node* hd)
{
    // cout<<hd<<endl;
    while(hd != NULL)
    {
        cout<<hd->val<<" ";
        hd = hd->next;
    }
    cout<<endl;
}

void insert(Node* &hd, int in, int v) // hd = head
{
    Node* tmp = hd;
    Node* a = new Node(v);
    if(in == 0)
    {
        a->next = hd;
        hd = a; // head = a
        print(hd);
        return;
    }
    for(int i=0; i<in-1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout<<"Invalid"<<endl;
            return; // As tmp->next dosen't exist!
        }
    }
    a->next = tmp->next;
    tmp->next = a;
    print(hd);
}


 int main()
 {
    Node* head = NULL;
    Node* tmp = head;

    while(true)
    {
        int v; cin>>v;
        if(v == -1) break;
        
        Node* a = new Node(v);
        if(head == NULL)
            tmp = head = a;
        else 
            tmp = tmp->next = a;
    }

    // cout<<head<<endl;

    int q; cin>>q;
    while(q--)
    {
        int idx, vl; cin>>idx>>vl;
        // cout<<head<<endl;
        insert(head, idx, vl);

        
    }

return 0;
 }