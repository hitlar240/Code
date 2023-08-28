#include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm> //replace
using namespace std;

int main()
{
    // vector <int> v1 = {1,2,3};
    vector <int> v1 = {1,2,3,4};
    vector <int> v2 = {5,6,7};
    // v2 = v1; // O(1) equal size
    v2 = v1; // O(n) n = largest of the sizes of v1 and v2

    // for(int i=0; i<v2.size(); cout<<v2[i++]<<" "); cout<<endl;

    // v1.push_back(5); // add an element to the end
    // v1.pop_back(); // remove the last element

    // v1.insert(v1.begin()+2,5); // O(N+k) //insert 5 at v1[2] 
    // v1.insert(v1.begin()+2, v2.begin(),v2.end()); //insert v2 at v1[2]

    // v1.erase(v1.begin()+1); // O(N) // erase v1[1] th element
    // v1.erase(v1.begin()+1, v1.begin()+3); // O(N) // erase v1[1] to before v1[3] elements
    // v1.erase(v1.begin()+1, v1.end()-1); // O(N) // erase v1[1] to before v1[3] elements
    
    // for(int i=0; i<v1.size(); cout<<v1[i++]<<" "); cout<<endl;
    // for(int x : v1) //range based for loop
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;

// replace(v.begin(),v.end(),value,replace_value)
    // replace(v2.begin(), v2.end(), 3, 0); // O(N)
    // replace(v2.begin(), v2.begin()+2, 3, 0);

    for(int x : v2)
    {
        cout<<x<<" ";
    }
    cout<<endl;

// find(v.begin(),v.end(),V) //O(N)
    // vector<int>:: iterator it;
    // it = find(v2.begin(), v2.end(), 3); // pointer
    auto it = find(v2.begin(), v2.end(), 5); // pointer
    cout<<*it<<endl;

    if(it == v2.end()) cout<<"not found"<<endl;
    else cout<<"found"<<endl;


return 0;
}