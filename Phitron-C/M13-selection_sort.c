#include<stdio.h>

int main()
{
    int n=10;
    // scanf("%d",&n);

    // int a[n];
    // for(int i=0; i<n; scanf("%d",&a[i++])); // post-increment

    int a[]={5,1,4,2,3,6,0,9,7,8};

//selection sort
    for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n; j++)
        if(a[i] > a[j]) //compare each 2 elements
        {
            int t = a[i];
                a[i] = a[j];
                a[j] = t;
        }

//ascending order
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);

return 0;
}