#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

// int* a = int a[]
void heap_sort(int* a, int n) // O(nlog(n))
{
    int hp[n];
    int sz = 0; //initally

//insert to heap
    for(int i=0; i<n; i++) // O(nlog(n))
    {
        hp[sz++] = a[i];
        int id = sz-1; //from last index
        while(id>0 && hp[id]<hp[(id-1)/2]) //min heap
        {//swap
            // int tmp = hp[id];
            // hp[id] = hp[(id-1)/2];
            // hp[(id-1)/2] = tmp;
            swap(hp[id], hp[(id-1)/2]);
            id = (id-1)/2; //parent
        }
    }

//delete top
   for(int i=0; i<n; i++) // O(nlog(n))
    {
        a[i] = hp[0]; //assign top to array

        hp[0] = hp[--sz];
        int id = 0;
        while(true)
        {
            if(id*2+2 < sz) //both left and right child exist
            {
                if(hp[id] > min(hp[id*2+1], hp[id*2+2]))
                {
                    if(hp[id*2+1] < hp[id*2+2])
                    {
                        swap(hp[id], hp[id*2+1]);
                        id = id*2+1; //left child
                    }
                    else 
                    {
                        swap(hp[id], hp[id*2+2]);
                        id = id*2+2; //right child
                    }
                }
                else break;
            }
            else if(id*2+1 < sz)
            {
                if(hp[id] > hp[id*2+1])
                {
                    swap(hp[id], hp[id*2+1]);
                    id = id*2+1; //left child
                }
                else break;
            }
            else 
                break;
        }
    }

}


int main()
{
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; cin>>arr[i++]);

    heap_sort(arr,n); // O(nlog(n))

    for(int i=0; i<n; cout<<arr[i++]<<" ");
    cout<<endl;

return 0;
}