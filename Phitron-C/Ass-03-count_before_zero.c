#include<stdio.h>

int count_before_zero(int a[], int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 0)
        {
            return count;
        }
        count++;
    }

    return count;
}


int main()
{
    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("%d\n",count_before_zero(a, n));

return 0;
}