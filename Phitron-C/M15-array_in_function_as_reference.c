#include<stdio.h>

void pun(char *s);
//void pun(char s[]);

//void fun(int *ar, int sz)
void fun(int ar[], int sz) // passing the address of 0th index
{
    // *(ar + 2) = 0; // dereference
    ar[2] = 0; // changing value at that address
}

int main()
{
    int ar[] = {1,2,3,4,5};
    int sz = sizeof(ar)/sizeof(ar[0]);


    fun(ar,sz);
    

    for(int i=0; i<sz; i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");


    char s[] = "Hello!";

    pun(s);

    printf("s = %s\n",s);

return 0;
}


void pun(char s[]) // passing the address of 0th index
{
    //*s = 'G'; // dereference
    s[0] = 'G'; // changing character at that address
}