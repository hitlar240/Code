#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string r;
        for(int i=0; i<3; i++)
        {
            cin>>r;
            vector <char> ch;
            bool flag = false;
            for(int j=0; j<3; j++)
            {
                if(r[j] != '?')
                {
                    ch.push_back(r[j]);
                }
                else
                    flag = true;
            }
            if(flag)
            {
                if(ch[0] != 'A'  &&  ch[1] != 'A')
                    cout<<'A'<<endl;
                else if(ch[0] != 'B'  &&  ch[1] != 'B')
                    cout<<'B'<<endl;
                else if(ch[0] != 'C'  &&  ch[1] != 'C')
                    cout<<'C'<<endl;
            }
        }
    }

return 0;
}