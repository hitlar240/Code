//Sum & Mean
#include<stdio.h>
int main()
{
    int n,i,v[100],s=0;
    float m;

    printf("Number of values:\t");scanf("%d",&n);
//Input Values & Sum
    for(i=0;i<n;i++)
    {printf("N%d=\t",i+1);
    scanf("%d",&v[i]);
    s=s+v[i];}
//Mean
    m=(float)s/n;
//Output results
    printf("Sum of %d numbers=%d\n",n,s);
    printf("Mean of %d numbers=%f",n,m);
    return 0;
}
