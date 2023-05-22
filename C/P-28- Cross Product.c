// 28.Cross Product of Vectors
#include<stdio.h>
int main()
{
    int i,j,n,a[3],b[3],v[3];
//Input A
    for(i=0;i<3;i++)
    {
     printf("A[%d]=",i+1);
     scanf("%d",&a[i]);
    }
//Input B
    for(i=0;i<3;i++)
    {
     printf("B[%d]=",i+1);
     scanf("%d",&b[i]);
    }
//Cross Product v=AxB
    v[0]=a[1]*b[2]-a[2]*b[1];
    v[1]=a[2]*b[0]-a[0]*b[2];
    v[2]=a[0]*b[1]-a[1]*b[0];
//Output A
    printf("\nVector A:   (");
    for(i=0;i<3;i++)
    {
     printf("\t%d",a[i]);
    }
    printf("\t)");
//Output B
    printf("\nVector B:   (");
    for(i=0;i<3;i++)
    {
     printf("\t%d",b[i]);
    }
    printf("\t)");
//Output v=AxB
    printf("\nVector AxB: (");
    for(i=0;i<3;i++)
    {
     printf("\t%d",v[i]);
    }
    printf("\t)");
}
