#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    stack <int> st;  // stack (using doubly-linked-list)

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