#include<stdio.h>


int main()
{
    int i,j,t,n[10];

    scanf("%d",&t);

    for(i=0;i<t;i++)
        scanf("%d",&n[i]);


for(i=0;i<t;i++)
{
    printf("Case %d:",i+1);

    for(j=1;j<=n[i];j++)
        {
            if(n[i]%j==0)
                printf(" %d",j);
        }


    printf("\n");
}

return 0;
}
