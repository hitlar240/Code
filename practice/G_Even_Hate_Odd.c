#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int e=0,o=0;
        int a[n];

        //for(int i=0;i<n;scanf("%d",&a[i++]))
        
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            //printf("%d\n",a[i]);
            if(a[i]%2==0)
                e++;
            else
                o++;
        }

        int c;

        if(n%2!=0)
            c=-1;
        else
        {
            if(e>=o)
                c=(e-o)/2;
            else
                c=(o-e)/2;
        }
        

        printf("%d\n",c);


    }

return 0;
}