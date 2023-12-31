#include<bits/stdc++.h>
using namespace std;

class stu
{
    public:
    string name;
    int roll;
    float marks;
    stu(string nm, int rl, float mr)
    {
        name = nm;
        this->roll = rl;
        marks = mr;
    }
};

class cmp // custom compare class
{
public:
    bool operator()(stu a, stu b)
    {
        if(a.marks < b.marks) return true; // true -> change
        else if(a.marks > b.marks) return false; // false -> don't change
        else //equal marks 
        {
            // if(a.roll > b.roll) return true; // true -> change
            // else return false; // false -> don't change
            return a.roll > b.roll;
        }
    }
};

int main()
{
    priority_queue <stu, vector<stu>, cmp> pq;

    int n; cin>>n;
    while(n--)
    {
        string s;
        int r;
        float m;
        cin>>s>>r>>m;

        stu st(s, r, m);
        pq.push(st);
    }

    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }


return 0;
}