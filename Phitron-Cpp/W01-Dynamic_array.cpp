//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// initialized with garbage value in stack
// new - allocate memory in heap
// assign address from heap to stack
// delete - delete allocated memory from heap

int main()
{
    // int a[5]; // static array
    int *a; // pointer var. a (initailized with garbage value) in stack memory
    cout<<"&a = "<<&a<<" (in stack initially)\n"; // in stack memory
    cout<<"a = "<<a<<" (garbage address initially)\n"; // garbase value

    a = new int[5]; // in stack memory a = <--- address of 0th index in heap memory 

    cout<<"a = "<<a<<" (in stack from heap)\n"; // address of a[0] in stack memory
    for(int i=0; i<5; cin>>a[i++]); // input | post-increment
    
    cout<<"a: ";
    for(int i=0; i<5; cout<<a[i++]<<" "); // post-increment 
    cout<<endl;

//increase size of array
    int *b = NULL; // pointer var. b (initialized with NULL) in stack memory
    cout<<"&b = "<<&b<<" (in stack initially)\n"; // in stack memory
    cout<<"b = "<<b<<" (NULL initially)\n"; // NULL value

    b = new int[8]; // in stack memory b = <--- address of 0th index in heap memory 
    cout<<"b = "<<b<<" (in stack from heap)\n"; // address of b[0] stored in stack memory

    for(int i=0; i<5; i++)
    {
        b[i] = a[i]; // copy values from a to b
    }
    b[5] = 6;
    b[6] = 7;
    b[7] = 8;

    cout<<"b: ";
    for(int i=0; i<8; cout<<b[i++]<<" "); // post-increment
    cout<<endl;

//Delete the array a[5] from heap memory
    // delete a; //a[0] is removed from heap memory 
    delete[] a; //arry a[5] is removed from heap memory
    cout<<"a = "<<a<<" (in stack after deleting from heap)\n"; // address of a[0] in stack memory

    cout<<"a: "; // address of a[0] stored in stack memory
    for(int i=0; i<5; cout<<a[i++]<<" "); // garbage value as array a[5] has been deleted from the heap
    cout<<"(garbage values after delating a[5] from heap)\n"; //

    cout<<"b: "; // address of a[0] stored in stack memory
    for(int i=0; i<8; cout<<b[i++]<<" ");
    cout<<"(after delating a[5] from heap)\n";


return 0;
}