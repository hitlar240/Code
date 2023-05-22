#include<stdio.h>
#include<limits.h>

int main()
{
    int t;
    scanf("%d",&t);
    

    for(int k=1; k<=n; k++)
    {
        int n;
        scanf("%d",&n);

        int a[n];
        for(int i=0; i<n; scanf("%d",&a[i++]));

        int s;
        scanf("%d",&s);

        int p = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i] == s)
                p = i+1;
        }

        if(p != 0)
        {
            printf("Case %d: %d\n",k,p);
        }
        else
        {
            printf("Not Found\n");
        }
    }

return 0;
}