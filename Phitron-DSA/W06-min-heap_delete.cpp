#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {5,10,10,15,15,20,30,30,40,50};

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
            if(l<=last && r<=last)
            {
                if(v[p] > min(v[l], v[r])) // min at top
                {
                    if(v[l] <= v[r])
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
            else if(l <= last)
            {
                if(v[l] < v[p])
                {
                    swap(v[p], v[l]);
                    p = l;
                }
                else
                    break;
            }
            else if(r <= last)
            {
                if(v[r] <  v[p])
                {
                    swap(v[p], v[r]);
                    p = r;
                }
                else
                    break;
            }
            else
                break;
        }

        for(int val : v)
            cout<<val<<" ";
        cout<<endl;
    }

return 0;
}