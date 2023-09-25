#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a,b;
    while(cin>>a>>b)
    {

        int s1=a.size(), s2=b.size();
        int memo[s1+1][s2+1];

        for(int i=0; i<=s1; i++) //initailize with 0
            memo[i][0]=0;
        for(int j=1; j<=s2; j++)
            memo[0][j]=0;
        
        for(int i=1; i<=s1; i++)
        {
            for(int j=1; j<=s2; j++)
            {
                if(a[i-1] == b[j-1])
                {
                    memo[i][j] = memo[i-1][j-1] + 1;
                }
                else
                {
                    memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
                }
            }
        }
        
        if(memo[s1][s2]==s2)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
    }
    return 0;
}
