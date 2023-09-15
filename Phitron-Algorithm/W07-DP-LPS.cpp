#include<bits/stdc++.h>
using namespace std;

int main()
{
//LPS(Longest Palindrome Subsequence)
    string a; cin>>a;
    string b = a; 
    reverse(b.begin(),b.end());

    int s1=a.size(), s2=b.size();
    int memo[s1+1][s2+1];

//Base Case:
//initalize 0th column -> a = "empty"
    for(int i=0; i<=s1; memo[i++][0]=0); 
//initalize 0th row    -> b = "empty"
    for(int j=1; j<=s2; memo[0][j++]=0); 
    // memset(memo, 0, sizeof(memo)); //initailize with 0
    
    int mx = 0;
    int ci,cj;
    for(int i=1; i<=s1; i++)
    {
        for(int j=1; j<=s2; j++)
        {
            if(a[i-1] == b[j-1])
            {
                memo[i][j] = memo[i-1][j-1] + 1;
                if(memo[i][j] > mx)
                {
                    mx = memo[i][j];
                    ci=i; cj=j;
                }
            }
            else
            {
                memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
            }
        }
    }
    cout<<memo[s1][s2]<<endl;

//back tracking
    string lps;
    while(ci!=0 && cj!=0)
    {
        if(a[ci-1]==b[cj-1])
        {
            lps += a[--ci];
            cj--;
        }
        // else if(memo[ci-1][cj] >= memo[ci][cj-1]) //macam
        else if(memo[ci-1][cj] > memo[ci][cj-1]) //madam
        {
            ci--;
        }
        else cj--;
    }

    reverse(lps.begin(),lps.end());
    cout<<lps<<endl;


return 0;
}