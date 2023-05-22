#include<stdio.h>

void sort(int *a, int n)
//void sort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[min] > a[j])
            {
                min = j;
            }
        }

        int t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; scanf("%d",&a[i++]));

    sort(a,n);

    printf("%d %d\n",a[0], a[n-1]);


return 0;
}