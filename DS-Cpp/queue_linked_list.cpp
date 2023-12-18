#include<iostream>
using namespace std;

struct Node
{
    int val;
    Node* next = NULL;

    Node(int val)
    {
        this->val = val;
    }
};

class Queue
{
//private:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0; //initially

public:

    int size()
    {
        return sz;
    }

    void enqueue(int val)
    {
        sz++;
        if(!head)
        {
            head = tail = new Node(val);
            return;
        }
        tail = tail->next = new Node(val);
    }

    int front()
    {
        if(!head) return -1; //empty queue

        return head->val;
    }

    int dequeue()
    {
        if(!head) return -1; //empty

        int d = head->val;
        Node* tmp = head;
        head = head->next;
        delete tmp;
        sz--;

        return d;
    }

    void sort_queue() //selection sort
    {
        Node* i = head;
        while(i->next)
        {
            Node* mn = i; //initailly
            Node* j = i->next;
            while(j)
            {
                if(mn->val > j->val)
                    mn = j;
                j = j->next;
            }
            if(i != mn)
            {
                int tmp = i->val;
                i->val = mn->val;
                mn->val = tmp;
            }
            i = i->next;
        }
    }

    void print()
    {
        Node* tmp = head;
        while(tmp)
        {
            cout<<tmp->val<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
    }

};

int main()
{
    Queue q;
    q.enqueue(4);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(1);
    q.enqueue(5);

    q.print();

    q.sort_queue();

    q.print();

    cout<<"dequeue = "<<q.dequeue()<<endl;
    cout<<"front = "<<q.front()<<endl;

    q.print();

    cout<<"size = "<<q.size()<<endl;


return 0;
}