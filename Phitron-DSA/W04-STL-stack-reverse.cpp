#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

void reverseStack(stack<int> &st) 
{
    if(st.empty())
        return;
    
    int x = st.top();
    st.pop();

    reverseStack(st);

//insert at bottom 
    stack <int> tmp;
    while(!st.empty())
    {
        tmp.push(st.top());
        st.pop();
    }
    st.push(x); //insertion of x
    while(!tmp.empty())
    {
        st.push(tmp.top());
        tmp.pop();
    }
}

int main()
{
    int n; cin>>n;

    stack <int> stk;
    while(n--)
    {
        int x; cin>>x;
        stk.push(x);
    }

    reverseStack(stk);

    while(!stk.empty())
    {
        cout<<stk.top()<<endl;
        stk.pop();
    }

return 0;
}