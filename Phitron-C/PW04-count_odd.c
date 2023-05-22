#include<stdio.h>

// int count_odd(int *a, int n)
int count_odd(int a[], int n)
{
    int c = 0; //initialization
    for(int i=0; i<n; i++)
    {
        //if(*(a+i) % 2 != 0)
        if(a[i] % 2 != 0)
            c++;
    }

return c;
}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; scanf("%d",&a[i++]));

    printf("odd = %d\n",count_odd(a,n));

return 0;
}