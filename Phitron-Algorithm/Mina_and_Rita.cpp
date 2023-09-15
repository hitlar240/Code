#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        string a,b; cin>>a>>b;
        int s1=a.size(), s2=b.size();

        int memo[s1+1][s2+1];
        memset(memo, 0, sizeof(memo));
        for(int i=1; i<=s1; i++)
        {
            for(int j=1; j<=s2; j++)
            {
                if(a[i-1]==b[j-1])
                {
                    memo[i][j] = memo[i-1][j-1]+1;
                }
                else
                    memo[i][j] = max(memo[i-1][j],memo[i][j-1]);
            }
        }
        cout<<s1+s2-memo[s1][s2]<<endl;
    }

return 0;
}