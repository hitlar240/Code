#include <stdio.h>
double pi=3.1416;
int max (int a[],int n);

int main()
{
    int i,n,m,a[100];

    printf("\nn=");
    scanf("%d",&n);

    for (i=0;i<n;i++)
        scanf("%d",&a[i]);

    m=max(a,n);

    printf("\nmax=%d",m);
}

int max ( int b[], int m)
{
    int i,j,t;
/*
     for (i=0;i<m-1;i++)
         for (j=i+1;j<m;j++)
            if (b[i]<b[j])
            {
             t=b[i];
             b[i]=b[j];
             b[j]=t;
            }
    return b[0];
    return b[m-1]; // min
*/

    t=b[0];
    for(i=0;i<m;i++)
        if (t<b[i]) // if (t>b[i])
            t=b[i];

    return t;
}
