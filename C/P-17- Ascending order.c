// 17.Ascending/Descending Order
#include<stdio.h>
int main()
{
    int i,j,k,n,t;

    printf("Number of values=\t");
    scanf("%d",&n);
    
//Input Values
    int N[n];
    for (i=0;i<n;i++)
     {
      printf("N%d=\t",i+1);
      scanf("%d",&N[i]);
     }
//Output Values
    printf("Values:");
    for (i=0;i<n;i++)
    {
     printf("\t%d",N[i]);
    }
//Ascending/Descending order
    for(j=0;j<n-1;j++)
    {
    for(k=j+1;k<n;k++)
     {
      if(N[j]>N[k]) {t=N[j];N[j]=N[k];N[k]=t;}
      //if(N[j]<N[k]) {t=N[j];N[j]=N[k];N[k]=t;} //Descending order
     }
   }
//Output Ascending order
 printf("\nAscending Order: ");
   for (j=0;j<n;j++)
     {
      printf("\t%d",N[j]);
     }
//Output Min/Max
 printf("\nMin=%d",N[0]);
 printf("\nMax=%d",N[n-1]);
 return 0;
}
