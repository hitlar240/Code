#include<stdio.h>
#include<math.h>


int main()
{
    int i,j,t,f,n,s;
    //unsigned long long int n;
    scanf("%d",&t);


while(t--)
{
    scanf("%d",&n);//range (0 to 2^64-1)

    //f=1;

for(j=2;j<=n;j++)
{
    f=1;
    s=sqrt(j);


    if(j%2!=0)
        {for (i=3;i<=s;i+=2)
            if(j%i==0)
                f+=i+j/i;
        }

    else if(j%2==0)
        {for (i=2;i<=s;i++)
            if(j%i==0)
                f+=i+j/i;//for perfect squares ex: 4(1 2 2 4) f=1+2+2=5 but f=1+2=3
        }

    if(f==j)
        printf("%d\n",j);

}


}
return 0;
}
