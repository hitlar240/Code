#include<iostream>
using namespace std;


namespace inout
{
    void print(string s)
    {
        cout<<s<<" ";
    }
}
 
namespace intgr 
{
    int input(string s)
    {
        inout::print(s);
        int x; cin>>x;
        return x;
    }
    void print(string s,int x)
    {
        cout<<s<<" "<<x<<endl;
    }
}

namespace flt 
{
    float input(string s)
    {
        inout::print(s);
        float x; cin>>x;
        return x;
    }
    void print(string s,float x)
    {
        cout<<s<<" "<<x<<endl;
    }
}

namespace str 
{
    string input(string s)
    {
        inout::print(s);
        string nm; cin>>nm;
        return nm;
    }
    void print(string s,string nm)
    {
        cout<<s<<" "<<nm<<endl;
    }
}