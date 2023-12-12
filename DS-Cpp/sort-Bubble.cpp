#include<iostream>

using namespace std;

void bubble(int a[], int n) //O(n^2)
{
    for(int i=0; i<n; i++) //iteration
    {
        for(int j=0; j<n-1-i; j++) //compare
        // for(int j=0; j<n-1; j++) //compare
        {
            if(a[j] > a[j+1])
            {
            //swap
                // swap(a[j],a[j+1]);
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main()
{
    int n; cout<<"Size of array = "; cin>>n;
    int arr[n]; //array of size n
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    bubble(arr,n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;

return 0;
}
