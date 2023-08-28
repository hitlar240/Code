#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

class stack_
{
    public:
    list <int> l;  // list = doubly-linked-list
    
    void push(int v) //O(1)
    {
        l.push_back(v);
    }

    int size() //O(1)
    {
        return l.size();
    }

    bool empty() //O(1)
    {
        return  l.size()==0;
    }

    void pop() //O(1)
    {
        if(!empty()) //if(sz != 0)
        {
            l.pop_back();
        }
        else
            cout<<"Empty!"<<endl;
    }
    
    int top() //O(1)
    {
        if(!empty()) 
            return l.back();
        else
            return -1; //empty
    }
};

int main()
{
    stack_ st;
    
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);

    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;


    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        st.push(x);
    }

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

return 0;
}