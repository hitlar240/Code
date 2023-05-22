#include <stdio.h>

int main()
{
 int l,h,m,n,k,a[100],i,j;
 printf("\nSize,Search");scanf("%d,%d",&n,&k);

 for (i=0;i<n;i++)//i<h-l+1
    scanf("\n%d",&a[i]);

l=0;h=n-1;
//infinite loop
//for(;;)
while(1)
{
 m=(h+l)/2;
 if (a[m]==k) break; // exit when
 else if (a[m]<k) l=m+1;
 else h=m-1;
 //printf("\nl=%d\th=%d",l,h);
 if (l>h) {printf("\nnot found!");break;}
}
 printf("\nidex=%d\tsearch=%d",m,a[m]);
}

