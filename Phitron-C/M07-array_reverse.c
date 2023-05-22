#include<stdio.h>

int main()
{
    //int a[5]={1,2,3,4,5};//fixed sized array can be initialized

    int n; // size of arry
    scanf("%d",&n);

    int a[n]; //variable sized array cannot be initialized

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=n-1; i>=0; i--)
        printf("%d\n",a[i]);

    for(int i=n-1; i>=0; i-=2) // compliment
        printf("%d\n",a[i]);


return 0;
}
