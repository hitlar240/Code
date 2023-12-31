#include<bits/stdc++.h>
using namespace std;

int main()
{
//set -> removes duplicates and sort
    set <int> st;

    int n; cin>>n;
    while(n--) //O(Nlog(N))
    {
        int x; cin>>x;
        st.insert(x); //O(log(N))
    }

//iterator
    // for(auto it=st.begin(); it!=st.end(); it++) //
    // {
    //     cout<<*it<<" "; //dereference
    // }
    // cout<<endl;

//range based for loop
    for(int v : st)
    {
        cout<<v<<" ";
    }
    cout<<endl;

//search
    cout<<st.count(0)<<endl; //O(log(N))
    cout<<st.count(10)<<endl;


return 0;
}