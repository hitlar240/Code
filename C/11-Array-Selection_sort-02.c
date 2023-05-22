#include<stdio.h>

int main()
{
    int n=10;
    // scanf("%d",&n);

    // int a[n];
    // for(int i=0; i<n; scanf("%d",&a[i++])); // post-increment

    int a[]={5,1,4,2,3,6,0,9,7,8};

   
    int c =0;
//slow algorithm | 
//selection sort (compare with the elements to the right of it and select)
    
    for(int i=0; i<n-1; i++)
    {    
        int min = i;

        for(int j=i+1; j<n; j++)
        {   
            //if(a[i] < a[j]) //descending order
            if(a[min] > a[j]) //compare with each elements to the right of it
            {
                min = j; 
                c++;
            }
        }

        int t = a[i];
        a[i] = a[min];
        a[min] = t;

        c+=3;
    }
    printf("steps=%d\n",c);

//ascending order
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);

return 0;
}