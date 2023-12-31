#include<bits/stdc++.h>
using namespace std;

char ch(char x)
{
    if(x=='b' || x=='c' || x=='d')
        return 'C'; //consonant 
    return 'V'; //vowel
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string a;
        cin>>a;

        string b;
        for(int i=0; i<n; i++)
        {
            b.push_back(a[i]);

            if(i<(n-2) && ((ch(a[i])=='C' && ch(a[i+1])=='C') || (ch(a[i])=='V' && ch(a[i+1])=='C' && ch(a[i+2])=='V')))
            {
                b.push_back('.');
            }
        }
        
        cout<<b<<endl;
    }

return 0;
}