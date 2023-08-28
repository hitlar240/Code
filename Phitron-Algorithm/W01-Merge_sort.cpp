#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int l, int r) 
{
    int mid = (l+r)/2;

//copy left portion
    // vector<int> L; 
    // for(int i=l; i<=mid; i++)
    //     L.push_back(v[i]);
    vector<int> L(v.begin()+l, v.begin()+mid+1); //copy from v[l] to before v[mid+1]
    L.push_back(INT_MAX);
    
//copy right portion
    // vector<int> R; 
    // for(int i=mid+1; i<=r; i++)
    //     R.push_back(v[i]);
    vector<int> R(v.begin()+mid+1, v.begin()+r+1); //copy from v[mid+1] to before v[r+1]
    R.push_back(INT_MAX);

//compare & merge
    for(int i=0,j=0, k=l; k<=r; k++)
    {
        if(L[i] <= R[j])
        {
            v[k] = L[i];
            i++;
        }
        else // if(L[i] > R[i])
        {
            v[k] = R[j];
            j++;
        }
    }
}

void mergeSort(vector<int> &v, int l, int r) //O(log(N))
{
    if(l==r) return;
     
    int mid = (l+r)/2;
    mergeSort(v,l,mid);
    mergeSort(v,mid+1,r);

    merge(v,l,r); //O(N)
}

int main()
{
    vector <int> v = {9,5,1,0,2,8,3,6,4,7};

    mergeSort(v,0,v.size()-1); //O(Nlog(N))

    for(int val : v)
        cout<<val<<" ";

return 0;
}