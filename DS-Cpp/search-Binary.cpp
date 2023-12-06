#include<iostream>
#include<algorithm>
using namespace std;

bool Binary(int a[], int s, int n)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        int mid = (i+j)/2;
        if(a[mid]==s) return true;
        else if(s<a[mid])
        {
            j=mid-1;
        }
        else
            i=mid+1;
    }
    return false;
}

void selection_sort(int a[], int n)
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
    int n; cout<<"Number of values = "; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int s; cout<<"Search for = "; cin>>s;
    // sort(arr,arr+n);
    selection_sort(arr,n);

    if(Binary(arr,s,n)==true)
        cout<<"Found\n";
    else
        cout<<"Not Found!\n";

return 0;
}
