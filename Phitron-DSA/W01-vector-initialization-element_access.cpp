#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
//STL -> Standard Template Library (Datastructure library)
//  Vector -> Dynamic array
//  vector <type> var_name;

    // vector <int> v; //vector with 0 element
    // vector <int> v(5); //vector with 5 elements each equal to 0
    // vector <int> v(5,10); //vector with 5 element each equal to 10
    
    vector <int> v2 = {5,4,3,2,1}; // vector initialiazation
    // vector <int> v(v2); // copy vector v2 to v
    vector <int> v(v2.begin(), v2.begin()+3); // copy v2[0] to before v2[3]

    // int a[7] = {1,2,3,4,5,6,7};
    // vector <int> v(a, a+7); // copy n elements from array a[n]

// element aaccess
    cout<<v[0]<<endl;
    // cout<<v.front()<<endl; 

    // cout<<v.at(2)<<endl;
    cout<<v[2]<<endl;

    // cout<<v[v.size()-1]<<endl;
    cout<<v.back()<<endl;


    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); cout<<v[i++]<<" "); cout<<endl;

// iterator
    // vector<int> :: iterator it;
    // for(it=v.begin(); it<v.end(); it++) 
    for(auto it=v.begin(); it<v.end(); it++) 
    {
        cout<<*it<<" ";
    }
    cout<<endl;

return 0;
}