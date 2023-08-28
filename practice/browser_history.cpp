#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    list <string> a;
    while(true)
    {
        string str; cin>>str;
        if(str == "end")
            break;
        a.push_back(str);
    }

    list<string> :: iterator address;
    int q; cin>>q;
    while(q--)
    {
        string command; cin>>command;
        if(command == "visit")
        {
            string x; cin>>x;
            auto it = find(a.begin(), a.end(), x);
            if(it == a.end())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                address = it;
                cout<<*address<<endl;
            }
        }

        else if(command == "next")
        {
            if(next(address,1) == a.end())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cout<<*next(address,1)<<endl;
                address = next(address,1);
            }
        }

        else if(command == "prev")
        {
            if(prev(address,1) == a.end())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cout<<*prev(address,1)<<endl;
                address = prev(address,1);
            }
        }
    }

return 0;
}