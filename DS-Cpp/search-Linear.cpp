#include<iostream>
using namespace std;

bool Linear(int a[], int s, int n)
{
    for(int i=0; i<n; i++) 
    {
        if(a[i] == s)
            return true;
    }
    return false;
}

int main()
{
    int n; //size of array
    cout<<"Size of array = "; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int s; cout<<"Search for = "; cin>>s;

    if(Linear(arr,s,n)==true)
        cout<<"Found\n";
    else
        cout<<"Not Found!\n";

return 0;
}
