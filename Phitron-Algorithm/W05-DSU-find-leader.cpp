#include<bits/stdc++.h>
using namespace std;

         //Node:  0   1  2  3  4  5   6   7
int parent[] = {-1, -1, 1, 1, 6, 4, -1, -1};

int leadar(int n)
{
    while(parent[n] != -1)
    {
        n = parent[n];
    }
    return n;
}

int main()
{   
    int n; cin>>n;
    cout<<leadar(n)<<endl;

return 0;
}