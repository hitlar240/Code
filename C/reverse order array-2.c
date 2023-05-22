#include<stdio.h>
int main()
{
   int a[10],i,j,t;

   for (i=0;i<10;i++)
   {
       printf ("\na%d=",i+1);
       scanf("%d",&a[i]);
       //b[j]=a[i];

   }

   for (i=0,j=9;i<5;i++,j--)
   {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
       //printf ("\nb%d=%d",i+1,a[i]);
   }
   for (i=0;i<10;i++)
   {
       printf ("\nb%d=%d",i+1,a[i]);
   }
}

