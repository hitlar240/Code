#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string a; cin>>a;

        string b;
        int w = n/2 + 1; // win
        int d = n - w; // lose/draw
        for(int i=0; i<n; i++)
        {
            if(d != 0)
            {
                b.push_back('P');
                if(a[i] != 'R')
                    d--;
            }
            else
            {
                if(a[i] == 'R')
                    b.push_back('P');
                else if(a[i] == 'P')
                    b.push_back('S');
                else 
                    b.push_back('R');
            }
        }

        cout<<b<<endl;
    }

return 0;
}