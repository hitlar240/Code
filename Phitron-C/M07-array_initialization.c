#include<stdio.h>

int main()
{
    int a[5]={1,2,3,4,5}; // initialization

    int b[5]={1,2};// other values are 0 by default

    int c[5]={0};// other values are 0 by default


    for(int i=0; i<5; i++)
        printf("%d\t%d\t%d\n",a[i],b[i],c[i]);

    int d[]={0};//no size!!?

    for(int i=0; i<10; i++)
        printf("%d\n",d[i]); //garbage??

return 0;
}
