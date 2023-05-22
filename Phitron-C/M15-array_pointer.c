#include<stdio.h>

int main()
{
//array name is the address of 0th element of that array

    int ar[] = {1,2,3,4,5};

    printf("address of ar[0] = %p\n",&ar[0]);
    printf("address of ar[] = %p\n",ar); // ar = address of the 0th index
    //printf("address of pointer ar = %p\n",&ar);

    printf("ar[0] = %d\n",ar[0]);
    printf("*ar = %d\n",*(ar + 0)); // *ar = ar[0]

    *ar = 0; // ar[0] = 0;
    printf("ar[0] = %d\n",ar[0]);

    printf("ar[2] = %d\n",*(ar + 2));
    printf("ar[2] = %d\n",2[ar]); // ar[i] = i[ar]
    printf("ar[2] = %d\n",*(2 + ar));

    *(ar + 3) = 1; // ar[3] = 1

    for(int i=0; i < sizeof(ar)/sizeof(ar[0]); i++)
    {
        printf("%d ",*(ar + i));
        // printf("%d ",ar[i]);    // ar[i] -> *(ar + 1)
        
        // printf("%d ",*(i + ar));
        // printf("%d ",i[ar]);    // i[ar] -> *(i + ar)
    }


return 0;
}