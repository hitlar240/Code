#include<stdio.h>

int main()
{
    int a[5]={1,2,3,4,5}; // initialization

    int b[]={1,2,3,4,5}; // initialize 5 elements

    int c[5]={1,2}; // remaining elements will be set to 0 automatically

    int d[5]={0}; // all elements will be set to 0 automatically
        d[4]=1; // (4 index) 5th element = 1

    for(int i=0; i<5; i++)
        printf("%d\t%d\t%d\t%d\n",a[i],b[i],c[i],d[i]);

    int e[]={0};//no size!!?

    for(int i=0; i<10; i++)
        printf("\n%d",e[i]); //garbage??



return 0;
}
