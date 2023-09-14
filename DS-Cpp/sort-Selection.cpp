#include<iostream>

using namespace std;

void selectiion(int a[], int n) //O(n^2)
{
    for(int i=0; i<n-1; i++)
    {
        int mn = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[mn] > a[j])
            {
                mn = j;
            }
        }
    //swap
        if(mn != i)
        {
            swap(a[i],a[mn]);
            // int tmp = a[i];
            // a[i] = a[mn];
            // a[mn] = tmp;
        }
    }
}

int main()
{
    int n; cin>>n; 
    int arr[n]; //array of size n
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    selectiion(arr,n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;

return 0;
}