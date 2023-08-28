//#include<bits/stdc++.h>
#include<iostream>
using namespace std;


namespace tom
{
    char c = 'T'; //variable

    void fun() //function
    {
        cout<<"namespace tom"<<endl;
    }

    class cls //class
    {
        public:
        string name;
        int age;
    };
}
namespace hmm
{
    char ch = 'X'; //variable

    void fun2() //function
    {
        cout<<"namespace hmm"<<endl;
    }
}

using namespace tom;
using namespace hmm;

int main()
{
    // cout<<tom::c<<endl;
    // tom::fun();
    // cout<<hmm::ch<<endl;
    // hmm::fun();

    cout<<c<<endl;
    fun();
    cout<<ch<<endl;
    fun2();

return 0;
}