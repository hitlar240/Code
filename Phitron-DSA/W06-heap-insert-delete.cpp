#include<bits/stdc++.h>
using namespace std;

void insert_(vector<int> &v, int x)
{
    v.push_back(x);
    int c = v.size()-1;
    while(c != 0)
    {
        int p = (c-1)/2; //parent
        if(v[p] < v[c]) //max-heap
        // if(v[p] > v[c]) //min-heap
            swap(v[p], v[c]);
        else 
            break;
        c = p; //current-parent
    }
}

void delete_top(vector<int> &v)
{
    if(v.empty())
    {
        cout<<"empty!"<<endl;
        return;
    }
    else
    {
        v[0] = v[v.size()-1];
        v.pop_back(); // delete last node

        int p = 0;
        int last = v.size()-1;
        while(true)
        {
            int l = p*2+1;
            int r = p*2+2;
            // if(l<=last && r<=last) // C.B.T
            if(r<=last) // has both left & right child
            {
                if(v[p] < max(v[l],v[r]))
                {
                    if(v[l] >= v[r])
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
            else if(l <= last) // has no right child
            {
                if(v[l] > v[p])
                {
                    swap(v[p], v[l]);
                    p = l;
                }
                else
                    break;
            }
            else
                break;
        }
    }
}

void print(vector <int> v) // level-order
{
    if(v.empty())
    {
        cout<<"empty!"<<endl;
        return;
    }
    else
    {
        for(int val : v)
            cout<<val<<" ";
        cout<<endl;
    }
}

int main()
{
    vector <int> v;

    while(true)
    {
        int com; cin>>com;

        if(com == 0)
        {
            print(v);
        }
        else if(com == 1)
        {
            int x; cin>>x;
            insert_(v, x);
        }
        else if(com == 2)
        {
            delete_top(v);
        }
        else if(com == 3)
            break;
    }

return 0;
}