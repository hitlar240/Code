#include<stdio.h>

int main()
{
    //maximum array size = 10^6
    //int a[5];
    int a[5]={1,2,3,4,5}; // intitialization

//input:
//    a[0]=1;
//    a[1]=2;
//    a[2]=3;
//    a[3]=4;
//    a[4]=5;

//user input:
//    for(int i=0; i<5; i++)
//    {
//        scanf("%d",&a[i]);
//    }
//
//    printf("%d\n\n",a[3]);//4th element

//output:
    for(int i=0; i<5; i++)
    {
        printf("%d\n",a[i]);
    }


return 0;
}
