// 27.Dot Product of vectors
#include<stdio.h>
int main()
{
    int i,j,n,a[10],b[10],v[10];
    printf("Dimension:");scanf("%d",&n);
//Input A
    for(i=0;i<n;i++)
    {
     printf("A[%d]=",i+1,a[i]);
     scanf("%d",&a[i]);
    }
//Input B
    for(i=0;i<n;i++)
    {
     printf("B[%d]=",i+1,b[i]);
     scanf("%d",&b[i]);
    }
//calculate V=A.B
    for(i=0;i<n;i++)
    {
     v[i]=a[i]*b[i];
    }
//Output A
    printf("\nVector A:   (");
    for(i=0;i<n;i++)
    {
     printf("\t%d",a[i]);
    }
    printf("\t)");
//Output B
    printf("\nVector B:   (");
    for(i=0;i<n;i++)
    {
     printf("\t%d",b[i]);
    }
    printf("\t)");
//Output V=A.B
    printf("\nVector A.B: (");
    for(i=0;i<n;i++)
    {
     printf("\t%d",v[i]);
    }
    printf("\t)");
}
