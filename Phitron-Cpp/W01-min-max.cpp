#include<iostream>
#include<algorithm> //min(), max()
using namespace std;

int min_(int a, int b)
{
    return a<b ? a : b;
}

int max_(int a, int b)
{
    return a>b ? a : b;
}


int main()
{
    int a,b;
    cin>>a>>b;

    //cout<<min_(a,b)<<" "<<max_(a,b);
    cout<<min(a,b)<<" "<<max(a,b);

return 0;
}