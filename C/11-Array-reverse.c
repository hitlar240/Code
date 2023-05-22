#include<stdio.h>

int main()
{
    int n; //size
    scanf("%d",&n);

    int a[n];

//input
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

//reverse
//
//    for(int i=0;i<n/2;i++) //
//    {
//        int t=a[i];
//        a[i]=a[(n-1)-i];
//        a[(n-1)-i]=t;
//    }

//2-pointers technique
    for(int i=0,j=n-1;i<j;i++,j--)
    {   //swipe values
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }


//output
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);


return 0;
}
