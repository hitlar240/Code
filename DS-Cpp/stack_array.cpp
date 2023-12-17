#include<iostream>
using namespace std;


class Stack 
{
private:
    int arr[100000]; //max size ~10^5
    int id = 0;

public:
    int size()
    {
        return id;
    }

    void push(int val)
    {
        arr[id++] = val; //post increment
    }
    
    int top()
    {
        if(id == 0) 
        {
            cout<<"Empty!\n";
            return -1; // -1 for empty
        }
        return arr[id-1]; // last index
    }

    int pop()
    {
        if(id == 0) 
        {
            cout<<"Empty!\n";
            return -1; // -1 for empty
        }
        return arr[--id]; //pre-decrement
    }

    void sort_stack() //selection sort
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

    void reverse_stack()
    {
        int tmp[id];
        for(int i=0; i<id; i++)
            tmp[i] = arr[i];

        for(int i=0,j=id-1; i<id; i++,j--)
            arr[i] = tmp[j];
    }

    void print()
    {
        for(int i=id-1; i>=0; i--)
            cout<<arr[i]<<" ";

        cout<<endl;
    }

    // void reverse_print()
    // {
    //     for(int i=0; i<id; i++)
    //         cout<<arr[i]<<" ";

    //     cout<<endl;
    // }

};


int main()
{
    Stack s;
    s.push(4);
    s.push(2);
    s.push(3);
    s.push(1);
    s.push(5);

    s.print();
    cout<<"size = "<<s.size()<<endl;

    cout<<"top = "<<s.top()<<endl;
    cout<<"pop = "<<s.pop()<<endl;

    s.print();
    cout<<"size = "<<s.size()<<endl;

    // // s.reverse_print();

    s.sort_stack();
    s.print();

    cout<<"top = "<<s.top()<<endl;

    s.reverse_stack();
    cout<<"top = "<<s.top()<<endl;
    s.print();
    
    

return 0;
}

