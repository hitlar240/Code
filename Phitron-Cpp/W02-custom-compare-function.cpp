#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pr;

class student
{
    public:
    int roll;
    int marks;
    //no constructor for object array!
    void print()
    {
        cout<<roll<<": "<<marks<<endl;
    }
};

bool cmp1(int a, int b)
{
    return a > b; 
}

bool cmp2(pr a, pr b)
{
    return a > b; 
}

bool cmp3(student a, student b)
{
    // return a.roll < b.roll; 
    if(a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    return a.marks > b.marks; 
}

int main()
{
    int arr[5] = {3,5,1,4,2}; //array

    pr stu[5] = {{3,50},{5,33},{1,50},{4,77},{2,80}}; //pair

    student st[5]; //class: object array
    for(int i=0; i<5; i++)
    {
        int r,m; cin>>r>>m;
        st[i].roll = r;
        st[i].marks = m;
    }
    
    // sort(arr,arr+5); //ascending oredr
    // sort(arr,arr+5,cmp1); //custom order

    // sort(stu,stu+5); //ascending oredr
    // sort(stu,stu+5,cmp2); //custom order

    sort(st,st+5,cmp3); //custom order

    for(int i=0; i<5; i++)
    {
        // cout<<arr[i]<<" "; //sorted array
        // cout<<stu[i].first<<": "<<stu[i].second<<endl; //sorted pair
        st[i].print(); //sorted object
    }

return 0;
}