//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
// new -> allocate memory in heap memory
// delete -> delete allocated memory form heap memory

    int *a; // pointer var. in stack memory
    a = new int; // address of int in heap memory

    *a = 10; // assingning 10 at that address

    cout<<a<<endl; // address of a
    cout<<*a<<endl; // value at that address

    delete a; // delete memory of a from heap memory

    cout<<a<<endl; // address of a
    cout<<*a<<endl; // value at that address

return 0;
}