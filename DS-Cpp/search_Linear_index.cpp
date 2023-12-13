#include<iostream>
using namespace std;

int linear(int a[], int n, int s)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == s)
            return i;
    }
    return -1;
}

int main()
{
    int n; //size of array
    cout<<"N = "; 
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int s; 
    cout<<"search for: ";
    cin>>s;

    int index = linear(arr,n,s);
    if(index == -1)
        cout<<"not found!\n";
    else
        cout<<"found at index "<<index<<endl;

return 0;
}