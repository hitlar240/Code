#include<bits/stdc++.h>
using namespace std;

class mxhp
{
    vector <int> v;
public:

    int size()
    {
        return v.size();
    }

    void insert(int val)
    {
        v.push_back(val);
        int id = v.size()-1;
        while(id>0 && v[id]>v[(id-1)/2])
        {
            swap(v[id], v[(id-1)/2]);

            id = (id-1)/2;
        }
    }

    int pop()
    {
        if(!v.size()) return -1; // empty

        int tp = v[0];
        v[0] = v[v.size()-1];
        v.pop_back();
        int id = 0, sz = v.size();
        while(id*2+2<sz)
        {
            if(v[id] < max(v[id*2+1], v[id*2+2]))
            {
                if(v[id*2+1] > v[id*2+2]) //left
                {
                    swap(v[id], v[id*2+1]);

                    id = id*2+1;
                }
                else
                {
                    swap(v[id], v[id*2+2]);
                    id = id*2+2;
                }
            }
            else
                break;
        }
        return tp;
    }

    void print()
    {
        for(int i : v)
            cout<<i<<" ";
        cout<<endl;
    }
};

int main()
{
    mxhp hp;

    hp.insert(20);
    hp.insert(10);
    hp.insert(50);
    hp.insert(40);
    hp.insert(30);
    hp.insert(60);

    hp.print();

    cout<<hp.pop()<<endl;
    hp.print();

    while(hp.size())
    {
        cout<<hp.pop()<<endl;
    }
    
    hp.print();



return 0;
}