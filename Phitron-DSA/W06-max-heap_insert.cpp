#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v; // = {50,40,30,30,20,10,5,5,15,10};

    int n; cin>>n;
    while(n--) //O(Nlog(N))
    {
        int x; cin>>x;
        v.push_back(x);

        int c = v.size()-1;

        while(c>=0) //O(log(N))
        {
            int p = (c-1)/2;

            if(v[p] < v[c]) // max at top
            {
                swap(v[p], v[c]);
                c = p;
            }
            else
                break;
        }
    }

    for(int i=0; i<v.size(); cout<<v[i++]<<" ");

    // for(int val : v)
    //     cout<<val<<" ";

return 0;
}