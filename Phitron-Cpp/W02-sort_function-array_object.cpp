//#include<bits/stdc++.h>
#include<iostream>
#include<utility> //swap()
#include<algorithm> //sort()
using namespace std;

class stu
{
    public:
    string name;
    int roll;
    float mark;

// no constructor for object array

    void print()
    {
        cout<<name<<" ";
        cout<<this->roll<<" ";
        cout<<this->mark<<endl;
    }
};

//compare function (define after class)
bool cmpR(stu a, stu b)
{
    // if(a.roll < b.roll) return true;
    // else return false;
    return a.roll < b.roll;
}

//compare function (define after class)
bool cmpM(stu a, stu b)
{
    // if(a.mark < b.mark) return true;
    // else return false;
    return a.mark > b.mark;
}

int main()
{
    int n; cin>>n;
    cin.ignore(); //ignore '\n' after input n
    stu s[n];
    for(int i=0; i<n; i++)
    {
        getline(cin,s[i].name);
        cin>>s[i].roll;
        cin>>s[i].mark;
        cin.ignore(); //ignore '\n' after mark
        // getchar();
        // s[i].print();
    }

//selection-sort object array //O(n^2)
    // for(int i=0; i<n-1; i++) 
    // {
    //     for(int j=i+1; j<n; j++)
    //     {
    //         // if(s[i].roll > s[j].roll) //ascreasing order
    //         if(s[i].mark < s[j].mark) //decreasing order
    //             swap(s[i], s[j]);
    //     }
    // }

//sort(from,to,comparison_fun) //O(nlog(n))
    // sort(s,s+n,cmpR);
    sort(s,s+n,cmpM);

    for(int i=0; i<n; i++)
    {
        s[i].print();
    }


return 0;
}