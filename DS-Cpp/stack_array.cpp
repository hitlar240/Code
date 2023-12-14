#include<iostream>
using namespace std;


class Stack 
{
public:
    int arr[100000]; //max size ~10^5
    int id = 0;

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

    void print()
    {
        for(int i=id-1; i>=0; i--)
            cout<<arr[i]<<" ";

        cout<<endl;
    }


};


int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.print();
    cout<<"size = "<<s.size()<<endl;

    cout<<"top = "<<s.top()<<endl;
    cout<<"pop = "<<s.pop()<<endl;

    s.print();
    cout<<"size = "<<s.size()<<endl;


return 0;
}

