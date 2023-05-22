#include<stdio.h>

int main()
{
    //int n=10;
    // scanf("%d",&n);

    // int a[n];
    // for(int i=0; i<n; scanf("%d",&a[i++])); // post-increment

    int a[]={5,1,4,2,3,6,0,9,7,8};

    int n=sizeof(a)/sizeof(a[0]); //size of array 

    int k=0;
//slow algorithm | n*(n-1) steps
//Bubble sort (bubble comes up from heavier medium like water)
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {    
            if(a[j] < a[j+1]) //descending order
            //if(a[j] > a[j+1]) //compare each adjicent pair of elements
            {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
            k++;
        } 
    }
    printf("steps=%d\n",k);

//ascending order
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);

return 0;
}