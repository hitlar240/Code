#include<bits/stdc++.h>
using namespace std;

int main()
{
    // map <key, val> // key-value pair
    map <string, int> mp;

    mp.insert(make_pair("tom al", 240));
    mp.insert({"tanvir", 72});
    mp["abul ?"] = 111; //O(log(N))
    
    // cout<<mp["tom al"]<<endl;
    // cout<<mp["tanvir"]<<endl;

    mp["hitlar"] = 100; 
    mp["hitlar"] = 00;

    cout<<mp["hitlar"]<<endl;
    cout<<mp.count("hitlar")<<endl; // 1 -> ase

    cout<<mp.count("nai")<<endl;    // 0 -> nai
    // cout<<mp["nai"]<<endl; 


    // for(auto it=mp.begin(); it!=mp.end(); it++) // no order (hashing)
    // {
    //     cout<<it->first<<" "<<it->second<<endl; //O(log(N))
    // }

    for(pair<string,int> pr : mp)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

return 0;
}