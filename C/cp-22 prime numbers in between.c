#include<stdio.h>
#include<math.h>

int main()
{
    int t,a,b,c=0,i,j;

    scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d %d",&a,&b);

    if(a<2) a=2;

    l1:for (i=a;i<=b;i++)
    {
        for (j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {a++;goto l1;}
        }
        //printf("%d %d\n",a,i);
        c++;
        a++;
    }


    printf("%d\n",c);
    c=0;
}
return 0;
}
