#include<stdio.h>

int main()
{
    int n; // size of array
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);



    int l=100000,p; // -10^5 <= a[i] <= +10^5

    for(int i=0;i<n;i++) // searching
    {
        if(a[i] < l) // False even if equal
        {
            l=a[i]; // lowest
            p=i+1; // 1-index (i+1)
        }
    }

    printf("%d %d\n",l,p);

return 0;
}
