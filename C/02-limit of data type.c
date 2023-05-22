#include<stdio.h>
#include<limits.h>

int main()
{
    printf("minimum value = %d\n"
           "maximum value = %d\n"
           "size in bytes = %d\n"
           "size in bits = %d\n",
           INT_MIN,
           INT_MAX,
           sizeof(int), //size of int in bytes
           sizeof(int) * CHAR_BIT); //size of int in bits


    float x=0.123;
    printf("bytes=%d\n",sizeof(x)); //float
    printf("bytes=%d\n",sizeof(0.123)); //double
    printf("bytes=%d\n",sizeof(0.123f)); //float

    printf("c=%c %d\n",'A'+'B','A'+'B');
    printf("c=%c\n",-125);
return 0;
}
