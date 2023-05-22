#include<stdio.h>
#include<math.h>


int main()
{
    int f[100],y,z,i,j,x,t,n[10];

    scanf("%d",&t);

    for(i=0;i<t;i++)
        scanf("%d",&n[i]);


for(i=0;i<t;i++)
{
    x=0;
    for(j=1;j<=sqrt(n[i]);j++)
        {
            if(n[i]%j==0)
                {f[x]=j;x++;}
        }

    y=x;

    while(y--)
        {
            if(f[y]==sqrt(n[i])) continue;
            f[x]=n[i]/f[y];
            x++;
        }

    printf("Case %d:",i+1);

    for(z=0;z<x;z++)
        printf(" %d",f[z]);

    printf("\n");
}

return 0;
}
