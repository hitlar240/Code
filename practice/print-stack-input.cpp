#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

void reverse(stack <int> a) //call by reference ??
{
    if(a.empty()) // orignal hd = NULL
        return;

    a.pop();
    reverse(a);
    cout<<a.top()<<endl;

}

int main()
{
    stack <int> s;
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        s.push(x);
    } 
    
    stack <int> s2;
    for(int i=0; i<n; i++)
    {
        s2.push(s.top()); //copy
        s.pop();
    }



    // reverse(s); // doesn't work

    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }

return 0;
}