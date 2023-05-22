#include<stdio.h>

//void fun(int *ar, int sz)
void fun(int ar[], int sz)  // passing the address of 0th index
{
// size cannot be found inside another founction!

    //printf("size of array = %d\n",sizeof(ar)/sizeof(int));

    for(int i=0; i < sz; i++)
    {
        printf("%d ",ar[i]); // ar[i] -> *(ar + i)
    }
}

int main()
{
    int ar[] = {1,2,3,4,5};

    int sz = sizeof(ar)/sizeof(ar[0]);

    fun(ar, sz);

return 0;
}