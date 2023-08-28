#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        int c=0;
        vector <int> v;
        while(!s.empty())
        {
            // cout<<s<<endl;
            while(s.back() == '0')
                s.pop_back();
            while(s.back() == '1')
            {
                c++;
                s.pop_back();
            }
            v.push_back(c);
            c=0;
        }
        sort(v.begin(), v.end(), greater<int>());
        for(int i=0; i<v.size(); i++)
        {
            if(i%2 == 0) c+=v[i];
        }
        cout<<c<<endl;
    }
    
return 0;
}