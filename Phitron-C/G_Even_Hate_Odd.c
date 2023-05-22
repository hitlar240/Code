#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int a[n];
        int even=0, odd=0, o=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2 == 0)
                even++;
            else
                odd++;
        }

        if(n%2 != 0)
            o = -1;
        else 
        {
            if(even >= odd)
                o = (even - odd)/2;
            else 
                o = (odd - even)/2;
        }

        printf("%d\n",o);
    }


return 0;
}