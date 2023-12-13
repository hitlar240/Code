#include<iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int tmp = a[i], j = i-1;
        while(j>=0 && tmp<a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tmp; // last j = j - 1 after while loop
    }
}

int main()
{
    int n; cout<<"N = "; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    insertion_sort(arr,n);
    
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;



return 0;
}