#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {50,40,30,30,20,15,15,10,10,5};

    while(!v.empty())
    {
        v[0] = v[v.size()-1];
        v.pop_back();

        int p = 0;
        int last = v.size()-1;
        while(true) //O(log(N))
        {
            int l = p*2+1;
            int r = p*2+2;
            if(r<=last) //both left & right child
            {
                if(v[p] < max(v[l], v[r])) // max at top
                {
                    if(v[l] > v[r])
                    {
                        swap(v[p], v[l]);
                        p = l;
                    }
                    else
                    {
                        swap(v[p], v[r]);
                        p = r;
                    }
                }
                else
                    break;
            }
            else if(l <= last) //only left child
            {
                if(v[l] > v[p])
                {
                    swap(v[p], v[l]);
                    p = l;
                }
                else
                    break;
            }
            else //last node
                break;
        }

        for(int val : v)
            cout<<val<<" ";
        cout<<endl;
    }

return 0;
}