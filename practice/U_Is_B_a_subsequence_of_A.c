#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n],b[m];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(int i=0;i<m;i++)
        scanf("%d",&b[i]);
    
    int c,k=0;
    for(int j=0;j<m;j++)
    {
        c=0;
        for(int i=k;i<n;i++)
        {
            if(b[j]==a[i])
            {
                c=1;
                k=i+1;
                break;
            }
        }

        if(c==0)
            break;
    }

    if(c==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}