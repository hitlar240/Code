// pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
   //           some tasks are performed more easily with pointers
   //           * = indirection operator (value at address)
   //           as pointer is a varible itself, 
   //           -so it also occupy memory to store its value (i.e. address of another var.)
   //           size of pointer var. for
   //               32-bit machine -> 4 bytes
   //               64-bit machine -> 8 bytes

#include<stdio.h>

int main()
{
    int x = 25;
    printf("x = %d\n",x);
    printf("address of x = %p\n",&x); // address of x

//reference | p -> address of x
    
    // int* p = &x; 
    int *p = NULL;
    p = &x; //memory address of integer variable x (in Hexadecimal formate)
    
    printf("p = %p\n",p); // %p formate specifier for pointer variable
    printf("p = %x\n",p); // address (in Hexadeximal)
    printf("p = %u\n",p); // address (Decimal equivalent of Hexadeximal)

    printf("size of pointer var = %d\n",sizeof(p)); // size of p
    printf("address of p = %p\n",&p); // address of pointer var. p 

    int * p2 = p; // p2 = p = &x;
    printf("p2 = %p\n",p2); // address of x


//dereference | *p -> x
    printf("*p = %d <- x\n",*p); // print value of the var. at that address
    
    // p = &x | x = *p 
    // x = *&x | &x = &*p
    //int y = *p; // y = x
    int y = *&x; //value at address
    printf("y = %d\n",y);


    *p = 72; // change value of the var. at thet address
    printf("*p = %d <- x\n",*p); // print changed value of the var. at that address

    printf("x = %d\n",x); // x = 72

    *p2 = 240; // change value of the var. at thet address
    printf("x = %d\n",x); // print changed value of the var. at that address





//multiple indirections
    int a=10, *pA, **pA2;
    pA = &a;    //address of a
    pA2 = &pA;  //address of pA

    printf("address of pA = %p\n",pA2); //address of pointer var. pA
    printf("a = %d\n",**pA2); 


return 0;
}