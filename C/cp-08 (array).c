#include<stdio.h>



int main()
{
    int i,j,k,c,t,n[3];

    scanf("%d",&t);

for(i=0;i<t;i++)
{
//    for(j=0;j<3;j++)
//        scanf("%d",&n[j]);

scanf("%d %d %d",&n[0],&n[1],&n[2]);

    for(j=0;j<2;j++)
        for(k=j;k<3;k++)
            if(n[j]>n[k])
            {
                c=n[j];
                n[j]=n[k];
                n[k]=c;
            }

    printf("Case %d:",i+1);

    for(j=0;j<3;j++)
        printf(" %d",n[j]);

    printf("\n");
}

return 0;
}
