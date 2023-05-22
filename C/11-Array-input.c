#include<stdio.h>

int main()
{
    int n=10;

    int a[n];


//input:

    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&a[i]);
    // }

    for(int i=0;i<n;scanf("%d",&a[i]),i++); //post-increment 
    //for(int i=0;i<n;scanf("%d",&a[i++])); //post-increment 

    // int i=0;
    // while(i<n)
    // {
    //     //scanf("%d",&a[i]);
    //     scanf("%d",&a[i++]);
    //     //i++;
    // }

//output:

    //for(int i=0;i<n;printf("i=%d a=%d\n",i++,a[i])); //post-increment 
    for(int i=0;i<n;printf("i=%d a=%d\n",i,a[i++])); //post-increment 

    // i=0;
    // while(i<n)
    // {
    //     //printf("i=%d a=%d\n",i,a[i]);
    //     printf("i=%d a=%d\n",i,a[i++]); //post-increment 
    //     //i++;
    // }

    // for(int i=0;i<n;i++)
    // {
    //     orintf("%d ",a[i]);
    // }

    

    
return 0;
}