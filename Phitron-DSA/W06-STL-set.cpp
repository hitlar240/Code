#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int> st;

    int n; cin>>n;
    while(n--) //O(Nlog(N))
    {
        int x; cin>>x;
        st.insert(x); //O(log(N))
    }

//remove duplicates and sort
    for(auto it=st.begin(); it!=st.end(); it++) //
    {
        cout<<*it<<" ";
    }
    cout<<endl;

//search
    cout<<st.count(0)<<endl; //O(log(N))
    cout<<st.count(10)<<endl;

return 0;
}