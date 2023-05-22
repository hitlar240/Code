#include <stdio.h>
#include <math.h>

long long int f(int n);


int main()
{
   int i,t,n;
   float s;

   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d",&n);

    s=0;
//
    for(i=1;i<=n;i++)
        {s+=1.0*i/f(i);//type cust
        //printf("%d/%lld\n",i,f(i));
        }

    printf("%.4f\n",s);

}
return 0;
}




long long int f(int n)
{
    long long int i,f;

    for(i=1,f=1;i<=n;i++)
        f*=i;

return f;
}
