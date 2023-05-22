#include <stdio.h>

int main()
{
 int l,h,m,n,k,a[100],i,j;
 printf("\nSize,Search");scanf("%d,%d",&n,&k);

 for (i=0;i<n;i++)//i<h-l+1
    scanf("\n%d",&a[i]);


 l=0;h=n-1;

 test: m=(h+l)/2;
 //printf("\nl=%d\th=%d",l,h);
 if (l>h) {printf("\nnot found!");exit(0);}
 if (a[m]<k) {l=m+1;goto test;}
 if (a[m]>k) {h=m-1;goto test;}

 printf("\nidex=%d\tsearch=%d",m,a[m]);
}

