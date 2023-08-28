//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm> //sort()
#include<utility> //swap()
using namespace std;

class frq
{
    public:
    char chr;
    int count;
};

bool cmp(frq a, frq b)
{
    if(a.count > b.count) return true;
    else return false;
}

int main()
{
    int n;
    cin>>n;

    frq obj[26]; // = {0};
    // for(int i=0; i<26; cnt[i++].count=0);
    for(char c='a'; c<='z'; c++)
    {
        obj[c-'a'].chr = c;
        obj[c-'a'].count = 0;
    }

    for(int i=0; i<n; i++)
    {
        char ch; cin>>ch;
        obj[ch-'a'].count++;
        // cout<<obj[ch-'a'].chr<<"-"<<obj[ch-'a'].count<<endl;
    } 
    
// selection sort
    // for(int i=0; i<26-1; i++)
    // {
    //     for(int j=i+1; j<26; j++)
    //     {
    //         if(obj[i].count < obj[j].count)
    //             swap(obj[i], obj[j]);
    //             // {
    //             //     frq tmp = obj[i];
    //             //     obj[i] = obj[j];
    //             //     obj[j] = tmp; 
    //             // }
    //     }
    // }

// customsort | CustomSort <- camel case
    sort(obj, obj+26, cmp);

    for(int i=0; i<26; i++)
    {
        // cout<<c<<cnt[c-'a'].count<<endl;
        if(obj[i].count > 0)
            while(obj[i].count--)
                cout<<obj[i].chr;
    }


return 0;
}