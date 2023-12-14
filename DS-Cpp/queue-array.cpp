#include<iostream>
using namespace std;


class Queue 
{
private:
    int arr[100000]; //max size ~10^5
    int id = 0;

public:
    int size()
    {
        return id;
    }

    void enqueue(int val)
    {
        arr[id++] = val;
    }

    int dequeue()
    {
        if(id == 0) 
        {
            cout<<"Empty!\n";
            return -1; // -1 for empty
        }
        int d = arr[0]; //front
        for(int i=0; i<id-1; i++)
        {
            arr[i] = arr[i+1];
        }
        id--;
        return d;
    }

    int front()
    {
        if(id == 0) 
        {
            cout<<"Empty!\n";
            return -1; // -1 for empty
        }
        return arr[0];
    }

    void print()
    {
        for(int i=0; i<id; i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }


};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.print();
    cout<<"size = "<<q.size()<<endl;

    cout<<"front = "<<q.front()<<endl;

    cout<<"dequeue = "<<q.dequeue()<<endl;
    cout<<"front = "<<q.front()<<endl;

    q.print();
    cout<<"size = "<<q.size()<<endl;

}