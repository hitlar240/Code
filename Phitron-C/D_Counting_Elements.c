#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; scanf("%d",&a[i++]));

    int c = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[j] == a[i]+1)
            {
                c++; break;
            }
        }
    }

    printf("%d\n",c);

return 0;
}