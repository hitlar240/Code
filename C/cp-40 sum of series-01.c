#include <stdio.h>
#include <math.h>

int main()
{
   int i,t,x,k,s,p;

   scanf("%d",&t);

//for(i=0;i<t;i++)
while(t--)
{
    scanf("%d %d",&x,&k);

    s=0;p=1;

//double pow(double a, double b)
//not using pow() as it returns double type value
//arithmetic operations can yield wrong ans because of precision value

    for(i=0;i<=k;i++)
    {
        //if(x==0) break; // 0^k  sum=0
        s+=p;//s=s+p;
        p*=x;//p=p*x;
    }


    printf("Result = %d",s);
    if(t!=0) printf("\n");

}
return 0;
}
