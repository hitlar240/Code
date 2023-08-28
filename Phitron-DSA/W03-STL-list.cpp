#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
// list = doubly link list

//initialize:

    // list <int> a; // list of size 0
    // list <int> a(5); // list of size 5
    // list <int> a(5,10); // list of size 5 with value = 10

//copy:

    // list <int> b = {1,2,3,4,5};
    // list <int> a(b); //O(N)

    // int b[] = {1,2,3,4,5};
    // list <int> a(b, b+5); //O(N)

    // vector <int> v = {1,2,3,4,5};
    // list <int> a(v.begin(), v.end()); //O(N)

//assign:

    // list <int> b = {1,2,3,4,5};

    // list <int> a;
    // a.assign(b.begin(), b.end());
    // list <int> a = b; //O(N)

//insert
    // a.push_back(6);
    // a.push_front(0);
    // a.insert(next(a.begin(),2), 100); //O(N)
    // a.insert(next(a.begin(),10), 100); //cyclic
    // a.insert(next(a.begin(),2), {100,200,300}); //O(N)
    // a.insert(next(a.begin(),2), b.begin(),b.end()); //O(N)

//delete
    // a.pop_back();
    // a.pop_front();
    // a.erase(next(a.begin(),2)); //O(N)
    // a.erase(next(a.begin(),10)); //cyclic
    // a.erase(next(a.begin(),1), next(a.begin(),4)); //form index 1 to before index 4

    // replace(a.begin(),a.end(), 2, 100); //replace 2 -> 100
    // auto it = find(a.begin(), a.end(), 30);
    // if(it == a.end())
    //     cout<<"Not found"<<endl;
    // else 
    //     cout<<"found"<<endl;

//
    // cout<<a.size()<<endl;
    // cout<<a.max_size()<<endl;
    // a.clear(); // clear values

    // a.resize(3); //
    // a.resize(7); //

//element access:
    list <int> a = {1,2,3,4,5};
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;
    // cout<<*next(a.begin(), 2)<<endl;
    cout<<*prev(a.end(), 1)<<endl;

// operation:
    // list <int> a = {1,2,1,3,1,5};
    // a.remove(1);
    // a.sort(); //O(Nlog(N))
    // a.sort(greater<int>());
    // a.unique(); //O(N) 
    // a.reverse(); //O(N)

// Iterators
    // for(auto it=a.begin(); it!=a.end(); it++) 
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

//ranged-based for loop
    for(int val : a)
    {
        cout<<val<<" ";
    }
    cout<<endl;

return 0;
}