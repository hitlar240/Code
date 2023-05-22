#include<stdio.h>

int main()
{
    int n; //size
    scanf("%d",&n);

    int a[n];

//input
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

//deletion
    int p; //(index)position
    scanf("%d",&p);

    for(int i=p;i<n-1;i++) //last a[n-2]=a[n-1]
        a[i]=a[i+1]; //move each value 1 index left


//output
    for(int i=0;i<n-1;i++)
        printf("%d ",a[i]);


return 0;
}
