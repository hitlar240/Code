//#include<bits/stdc++.h>
#include<iostream>
#include<utility> //swap()
using namespace std;

void swap_(int *a, int *b)
{
    int tmp = *a;
        *a = *b;
        *b = tmp;
}

int main()
{
    int a,b;
    cin>>a>>b;

    // swap_(&a,&b);
    swap(a,b);

    cout<<a<<" "<<b;

return 0;
}