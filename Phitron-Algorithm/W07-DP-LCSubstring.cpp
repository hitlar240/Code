#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b; cin>>a>>b;

    int s1=a.size(), s2=b.size();
    int memo[s1+1][s2+1];

//Base Case:
//initalize 0th column -> a = "empty"
    for(int i=0; i<=s1; memo[i++][0]=0); 
//initalize 0th row    -> b = "empty"
    for(int j=1; j<=s2; memo[0][j++]=0); 
    // memset(memo, 0, sizeof(memo)); //initailize with 0
    
    int ci,cj;  //track last common char
    int mx=0;
    for(int i=1; i<=s1; i++)
    {
        for(int j=1; j<=s2; j++)
        {
            if(a[i-1] == b[j-1])
            {
                memo[i][j] = memo[i-1][j-1] + 1;
                
                if(memo[i][j] > mx) //abc
                // if(memo[i][j] >= mx) //def
                {
                    mx = memo[i][j];
                    ci = i;
                    cj = j;
                }
            }
            else
            {
                memo[i][j] = 0;
            }
        }
    }

    cout<<mx<<endl;


//back tracking
    string lcs;
    while(ci!=0 && cj!=0)
    {
        if(a[ci-1] == b[cj-1]) 
        {
            lcs += a[ci-1];
            ci--;
            cj--;
        }
        else
            break;
    }

    reverse(lcs.begin(),lcs.end());
    cout<<lcs<<endl;


//Memoization table
    for(int i=0; i<=s1; i++)
    {
        for(int j=0; j<=s2; j++)
        {
            if(memo[i][j]==-1)
                cout<<"- "; // - for -1
            else
                cout<<memo[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}