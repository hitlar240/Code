#include<stdio.h>



int main()
{
    int i,t,n,c=0;
    //long long int f=1;

    scanf("%d",&t);


//for(i=0;i<t;i++)
while(t--)
{
        scanf("%d",&n);

        for(i=2;i<=n;i++)
            if(i%5==0)
            {
            c++;
            if(i!=100 && i%25==0)
                c++;
            if(i%100==0)
                c++;

            //printf("\ni=%d c=%d",i,c);
            }

        printf("%d\n",c);
        c=0;

}

return 0;
}
