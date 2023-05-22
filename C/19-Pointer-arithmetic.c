#include<stdio.h>

int main()
{
    int x=10, y=20;
    int *pX, *pY;
    pX = &x;
    pY = &y;

    //int z = 5*(-y/x)+y;
    int z = 5 * - *pY/ *pX + *pY; // 'space' between / *pX
    
    printf("z = %d\n",z);

//integer addition|subtraction
    int a, *p;              // int - 4 bytes
    //long long int a, *p;  // long long int - 4 bytes
    //float a, *p;          // float - 4 bytes
    //double a, *p;         // double - 8 bytes
    //char a, *p;           // char - 1 byte
    
    p = &a;
    printf("p = %p\n",p);
    printf("p+1 = %p\n",p+1);
    printf("p-1 = %p\n",p-1);

    

return 0;
}