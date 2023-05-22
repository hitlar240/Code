#include<stdio.h>

int main()
{
    int n; //size
    scanf("%d",&n);

    int a[n+1]; //extended size

//input
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

//insert
    int p,v; //(index)position,value
    scanf("%d %d",&p,&v);

    for(int i=n;i>p;i--) //n=(last index);  i>=p+1
        a[i]=a[i-1]; //move each value 1 index right

    a[p]=v; //assign v to index p

//output
    for(int i=0;i<=n;i++)
        printf("%d ",a[i]);


return 0;
}
