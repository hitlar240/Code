#include<stdio.h>

int main()
{
    //int a[5]; //size=5
    int a[]={1,2,3,4,5,6}; //size=5
    printf("size of array=%d\n",sizeof(a)); //in bytes=20
    printf("size of integer=%d\n",sizeof(int)); //in bytes=4
    printf("size=%d\n",sizeof(a)/sizeof(int)); //size=(20/4)=5int a[5]; //size=5


    //char c[5]; //size=5
    char c[]="tomal"; //size=5+1 '\0' | length=5
    printf("size of array=%d\n",sizeof(c)); //in bytes=20
    printf("size of character=%d\n",sizeof(char)); //in bytes=4
    //printf("size=%d\n",sizeof(c)/sizeof(c[2])); //size=(20/4)=5
    printf("size=%d\n",sizeof(c)/sizeof(char)); //size=(20/4)=5


return 0;
}
