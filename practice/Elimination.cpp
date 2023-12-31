#include<bits/stdc++.h>
using namespace std;

int is_sub(string s)
{
    int c = 0;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='0' && s[i+1]=='1')
            c++;
    }
    return c;
}

int main()
{
    string s; cin>>s;
    int q; cin>>q;
    while(q--)
    {
        int l,r; cin>>l>>r;
        l--; r--; //index

        string sb = s.substr(l,r-l+1);

        int cnt = 0;
        bool flag = true;
        int c = is_sub(sb);
        if(c != 0)
        {
            while(c--)
            {
                if(!sb.empty() && is_sub(sb))
                {
                    sb.erase(sb.find("01"),2);
                    cnt += 2;
                }
                else
                    flag = false;
            }

        }
        cout<<cnt<<endl;
    }

return 0;
}