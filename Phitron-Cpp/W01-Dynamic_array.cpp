//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    // int a[5]; // static array
    int *a; // pointer var. a in stack memory
    a = new int[5]; // address of 0th index in heap memory

    cout<<a<<endl; // address of a[0] in stack memory
    for(int i=0; i<5; cin>>a[i++]); // post-increment
    for(int i=0; i<5; cout<<a[i++]<<" "); // post-increment 
    cout<<endl;

//increase size of array
    int *b; // pointer var. b in stack memory
    b = new int[8]; // address of 0th index in heap memory

    for(int i=0; i<5; i++)
    {
        b[i] = a[i];
    }
    b[5] = 6;
    b[6] = 7;
    b[7] = 8;

    cout<<b<<endl; // address of b[0] stored in stack memory
    for(int i=0; i<8; cout<<b[i++]<<" "); // post-increment
    cout<<endl;

//delete array a[5]
    // delete a; //a[0] is removed from heap memory
    delete[] a; //arry a[5] is removed from heap memory

    cout<<a<<endl; // address of a[0] stored in stack memory
    for(int i=0; i<5; cout<<a[i++]<<" "); 

return 0;
}