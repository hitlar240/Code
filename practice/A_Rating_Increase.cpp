#include<bits/stdc++.h>
using namespace std;

typedef pair <int,int> pr;

pr rating(int arr[], int l)
{
    for(int i=(l-1)/2; i>=0; i--)
    {
        if(arr[0] == 0 || arr[i+1] == 0)
            continue;

        int a=0, p=1;
        for(int j=i; j>=0; j--)
        {
            a += p*arr[j];
            p *= 10;
        }
        int b=0, q=1;
        for(int k=l-1; k>i; k--)
        {
            b += q*arr[k];
            q *= 10;
        }
        if(a<b) return {a,b};
    }
    return {-1,-1};
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int l = str.length();

        int s[l];
        for(int i=0; i<l; s[i]=str[i]-'0',i++);

        pr ab = rating(s,l);
        if(ab.first == -1)
            cout<<-1<<endl;
        else
            cout<<ab.first<<" "<<ab.second<<endl;
    }

return 0;
}