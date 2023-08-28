#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    
    int d=0;
    string w,str;
    for(int i=0; s[i]!='\0'; i++)
    {
        // cout<<"----"<<s[i]<<endl;
        if(isdigit(s[i]))
        {
            d = s[i] - '0';
            // cout<<d<<endl;
        }
        else if(isalpha(s[i]))
        {
            w.push_back(s[i]);
            // cout<<w<<endl;
        }
        else
        {
            // cout<<w<<endl;
            while(d--)
                str += w; //append

            str.push_back(s[i]);
            w.erase();
        }
    }
    while(d--)
        str += w;
        
    cout<<str<<endl;

return 0;
}