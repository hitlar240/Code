#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    // stringstream ss;
    // ss<<str;
    stringstream ss(str);

    string word;
    map <string, int> mp; // initial value = 0
    while(ss>>word)
    {
        mp[word]++; //mp[word] = mp[word] + 1;
    }

    // cout<<mp["oi"]<<endl;        // oi = 3
    // cout<<mp.count("oi")<<endl;  // ase
    // cout<<mp.count("nai")<<endl; // nai

    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

return 0;
}