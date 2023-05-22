#include<stdio.h>

int main()
{
    int n; // size of array
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]<=10) // print just after assigning each element!!
            printf("A[%d] = %d\n",i,a[i]);
    }


return 0;
}
