#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int a[N];

void merge(int l, int r, int mid)
{
    // int mid = (l+r)/2;

    int lsz = mid-l+1;
    int L[lsz+1];
    for(int i=0,j=l; j<=mid; i++,j++)
        L[i] = a[j];

    int rsz = r-mid;
    int R[rsz+1];
    for(int i=0,j=mid+1; j<=r; i++,j++)
        R[i] = a[j];

    L[lsz] = INT_MIN;
    R[rsz] = INT_MIN;

    int lp=0, rp=0;
    for(int i=l; i<=r; i++)
    {
        if(L[lp] >= R[rp])
        {
            a[i] = L[lp];
            lp++;
        }
        else 
        {
            a[i] = R[rp];
            rp++;
        }
    }
}

void mergeSort(int l, int r)
{
    if(l==r) return;

    int mid = (l+r)/2;
    mergeSort(l,mid);
    mergeSort(mid+1,r);

    merge(l,r,mid);
}

int main()
{
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    mergeSort(0, n-1);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }


return 0;
}