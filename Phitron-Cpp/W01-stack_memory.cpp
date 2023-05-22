//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int *fun()
{
    int a[5] = {1,2,3,4,5};

    //cout<<*(a+1); // a[1]

    return a; //address of a[0]
}

int main()
{
// cannot extand allocated memory while run time

    int *x = fun(); // compile time error

//returning address a but array a[5] has been removed form stack memory after fun() return


return 0;
}