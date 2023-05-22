#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;scanf("%d",&a[i++]));

    int c=0;

        if(a[0]>0)
        {
            for(int i=2;i<n;i+=2)
            {
                if(a[i]<0)
                    c++;
            }

            for(int i=1;i<n;i+=2)
            {
                if(a[i]>0)
                    c++;
            }
        }
        else if(a[0]<0)
        {
            for(int i=2;i<n;i+=2)
            {
                if(a[i]>0)
                    c++;
            }

            for(int i=1;i<n;i+=2)
            {
                if(a[i]<0)
                    c++;
            }
        }

    printf("%d\n",c);

return 0;
}