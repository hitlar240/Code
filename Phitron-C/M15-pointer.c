#include<stdio.h>

int main()
{
    int x =10;
    printf("x = %d\n",x);

    printf("address of x = %p\n",&x);

//reference | pX -> address of x
    int *pX = &x; 
    printf("pX = %p\n",pX);

    printf("size of pX = %d\n",sizeof(pX)); // size = 4 bytes
    printf("address of pX = %p\n",&pX); // address of pointer var. pX

    int * pX2 = pX; // pX2 = pX = &x;
    printf("pX2 = %p\n",pX2);

//dereference | *pX -> x
    printf("*pX = %d\n",*pX); // x =10
    *pX = 50; // x = 50;
    printf("x = %d\n",x);

return 0;
}