#include<stdio.h>
int main()
{
   int a[10],b[10],i,j;

   for (i=0,j=9;i<10;i++,j--)
   {
       printf ("\na%d=",i+1);
       scanf("%d",&a[i]);
       b[j]=a[i];
   }

   for (i=0;i<10;i++)
   {
       printf ("\nb%d=%d",i+1,b[i]);
   }
}

