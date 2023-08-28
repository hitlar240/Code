//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm> //sort()
using namespace std;

class stu
{
    public:
    string name;
	int roll;
	float marks;
};

bool cmp(stu a, stu b)
{
    if(a.marks > b.marks) return true;
    else if(a.marks == b.marks && a.roll < b.roll) return true;
    else return false;
}

int main()
{
    int n;
    cin>>n;
    stu s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i].name>>s[i].roll>>s[i].marks;
    }
//reverse object
    for(int i=n-1; i>=0; i--)
    {
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<" "<<endl;
    }

//sort object
    // sort(s, s+n, cmp);
    // for(int i=0; i<n; i++)
    // {
    //     cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<" "<<endl;
    // }

return 0;
}