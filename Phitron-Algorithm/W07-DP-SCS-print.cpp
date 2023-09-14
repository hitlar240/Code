#include<bits/stdc++.h>
using namespace std;


int main()
{
    string a,b; cin>>a>>b;
    int s1=a.size(), s2=b.size();

//Bottom Up:
    int memo[s1+1][s2+1];
    memset(memo, 0, sizeof(memo)); //initalize memo with 0
    for(int i=1; i<=s1; i++)
    {
        for(int j=1; j<=s2; j++)
        {
            if(a[i-1]==b[j-1])
                memo[i][j] = memo[i-1][j-1]+1;
            else
                memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
        }
    }

    cout<<"LCS = "<<memo[s1][s2]<<endl;
//SCS = total length - LCS
    cout<<"SCS = "<<s1+s2-memo[s1][s2]<<endl;

//back tracking
    string scs;
    while(s1!=0 && s2!=0)
    {
        if(a[s1-1]==b[s2-1])
        {
            scs += a[--s1]; s2--;
            // scs += b[--s2]; s1--;
        }
        //else if(memo[s1-1][s2] > memo[s1][s2-1]) //ackxkgxcyd
        else if(memo[s1-1][s2] >= memo[s1][s2-1]) //ackxkgxcyd
        {
            scs += a[--s1]; //pre-decrement
        }
        else
        {
            scs += b[--s2]; //pre-decrement
        }
    }

//remaining charecters
    // while(s1 != 0)
    // {
    //     scs += a[s1-1];
    //     s1--;
    // }
    while(s1 != 0)
    {
        scs += a[--s1]; //pre-decrement
    }
    while(s2--) //post-decrement
    {
        scs += b[s2];
    }


    reverse(scs.begin(),scs.end());
    cout<<scs<<endl;


return 0;
}