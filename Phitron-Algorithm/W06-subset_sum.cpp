#include<bits/stdc++.h>
using namespace std;

int cnt; // initially 0

bool sum(int rem, int i, int val[]) //O(2^n)
{
    //if s = 0 return true | by not taking any value
    if(i==0) //return rem == 0; 
    {
        int c = (rem == 0);
        cnt += c; //counting possible combinations
        return c;
    }

    if(val[i] <= rem) //can take ith value
    {
        return sum(rem-val[i], i-1, val) | sum(rem, i-1, val);
    }
    else //cannot take ith value
        return sum(rem, i-1, val);
}

int main()
{
    int n,s; cin>>n>>s;
    int val[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>val[i];
    }

    if(sum(s,n,val))
        cout<<"Yes - "<<cnt<<endl;
    else
        cout<<"No\n";

return 0;
}