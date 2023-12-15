#include<iostream>
using namespace std;



class Queue
{
private:
    int arr[100000];
    int id = 0;

public:
    
    int size()
    {
        return id;
    }

    void enqueue(int val)
    {
        arr[id++] = val; //post increment
    }

    int front()
    {
        if(id == 0)
        {
            cout<<"Empty!\n";
            return -1;
        }
        return arr[0];
    }

    int dequeue()
    {
        if(id == 0)
        {
            cout<<"Empty!\n";
            return -1;
        }
        int tmp = arr[0];
        for(int i=0; i<id-1; i++)
        {
            arr[i] = arr[i+1];
        }
        id--;
        return tmp; 
    }

    void sort_queue() //selection sort
    {
        for(int i=0; i<id-1; i++)
        {
            int mn = i;
            for(int j=i+1; j<id; j++)
            {
                if(arr[mn] > arr[j])
                    mn = j;
            }
            if(i != mn)
            {
                int tmp = arr[i];
                arr[i] = arr[mn];
                arr[mn] = tmp;
            }
        }
    }

    void print()
    {
        for(int i=0; i<id; i++)
            cout<<arr[i]<<" ";

        cout<<endl;
    }

    void reverse_print()
    {
        for(int i=id-1; i>=0; i--)
            cout<<arr[i]<<" ";

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

    q.reverse_print();


return 0;
}